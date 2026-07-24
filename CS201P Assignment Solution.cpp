#include <iostream> 
using namespace std; 
 
int main() { 
    // Hard-coded data 
    string name = "Sameer Masih"; 
    string studentID = "BS250436858"; 
 
    cout << "Name: " << name << endl; 
    cout << "Student ID: " << studentID << endl; 
 
    // Step-1 Digit Extraction and Reversal
    
    string digits = "";
	   for (int i = 0; i < studentID.length(); i++) { 
	        if (isdigit(studentID[i])) {
	        	digits += studentID[i]; 
			}
		}
     
 
    // Display Digits 
    
    cout << "\nDigits in ID: "; 
    for (int i = 0; i < digits.length(); i++) { 
        cout << digits[i]; 
    } 
    
    // Display Reverse Digits
    
    cout << "\nReversed Digits : ";
    for ( int i = digits.length() - 1; i >= 0 ; i--) {
    	cout << digits[i];
	}
	
	cout << "\n" << endl;
	
	// Step 2 – Report of absent digits
	
 cout << "Absent Digits: ";
    for(char d = '0'; d <= '9'; d++) {
        bool found = false;
        for(int i = 0; i < digits.length(); i++) {
            if(digits[i] == d) {
                found = true;
                break;
            }
        }
        if(!found) {
        	cout << d << " ";
		} 
    }
    cout << endl;

	// Step 3 – Even and Odd Digit
	
	cout << "\nEven digits: ";
	for (int i = 0; i < digits.length(); i++) {
		if (digits[i] % 2 == 0){
			cout << digits[i] << " ";
		}
	}
	cout << endl;
	
	cout << "\nOdd digits: ";
	for (int i = 0; i < digits.length(); i++) {
		if (digits[i] % 2 != 0){
			cout << digits[i] << " ";
		}
	}
	cout << endl;
	
	cout << "\n";
	
	// Step 4 – Largest and Smallest Digit
	
	int largest_Digit = digits[0] - '0';
	int smallest_Digit = digits[0] - '0';
	
	for (int i = 0; i < digits.length(); i++) {
		int idx = digits[i] - '0';
		if (idx > largest_Digit) {
			largest_Digit = idx;
		}
		if (idx < smallest_Digit) {
			smallest_Digit = idx;
		}
	} 
	
	cout << "Largest digit: " << largest_Digit << endl;
	cout << "Smallest digit: " << smallest_Digit << endl;
	
	cout << endl;
	
	// Step 5 – Multiplication Table of the Largest Digit
	
	if (largest_Digit == 0) {
		cout << "Multiplication table cannot be printed for 0." << endl;
	} else{
	
			for (int i = 1; i <= 10; i++) {
				cout << largest_Digit << " * " << i << " = " << largest_Digit * i << endl;
			}
		}
	
	return 0;

}
