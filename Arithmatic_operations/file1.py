# First install the required libraries:
# pip install requests beautifulsoup4 pandas

import requests
from bs4 import BeautifulSoup
import pandas as pd

# Target website
url = "https://books.toscrape.com/"

try:
    # Send request to the website
    response = requests.get(url)
    response.raise_for_status()

    # Parse HTML content
    soup = BeautifulSoup(response.text, "html.parser")

    # Create an empty list to store product data
    products = []

    # Find all product articles
    items = soup.find_all("article", class_="product_pod")

    # Extract product names and prices
    for item in items:
        name = item.h3.a["title"]
        price = item.find("p", class_="price_color").text

        products.append({
            "Product Name": name,
            "Price": price
        })

    # Convert list to DataFrame
    df = pd.DataFrame(products)

    # Save data to CSV file
    df.to_csv("scraped_products.csv", index=False)

    # Display the extracted data
    print("\nScraping Complete!\n")
    print(df)

    print("\nData has been saved to 'scraped_products.csv'")

except requests.exceptions.RequestException as e:
    print("Website connection error:", e)

except Exception as e:
    print("An unexpected error occurred:", e)