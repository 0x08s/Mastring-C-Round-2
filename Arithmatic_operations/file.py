import requests
from bs4 import BeautifulSoup
import pandas as pd

# 1. Define the target URL
url = 'https://books.toscrape.com/'

# 2. Send an HTTP request to the website
response = requests.get(url)

# 3. Parse the website content using BeautifulSoup
soup = BeautifulSoup(response.text, 'html.parser')

# 4. Extract product names and prices
products = []
for item in soup.find_all('article', class_='product_pod'):
    name = item.h3.a['title']
    price = item.find('p', class_='price_color').text
    products.append({'Product Name': name, 'Price': price})

# 5. Save the extracted data into a CSV file
df = pd.DataFrame(products)
df.to_csv('scraped_products.csv', index=False)

print("Scraping complete! Data has been saved to scraped_products.csv")

