// CGT-215-Lab-04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int n;
	// loop to get a valid input from the user
	do {
		cout << "Enter a positive whole number to calculate the factorial: ";
		cin >> n;
		if (n <= 0) {
			cout << "Please enter a positive whole number." << endl;
		}
	} while (n <= 0);

	unsigned long long fact = 1;

	// calculate the factoral while desplaying selected number! = and step by step calculation
	cout << n << "! = "; 
	for (int i = 1; i <= n; ++i) {
		fact *= i;
		cout << i;
		if (i < n) {
			cout << "*";
		}
	}
	cout << " = " << fact << endl;
}

void arithmetic() {
	int start, diff, elements;

	// starting number
	cout << "Enter the starting number: ";
	cin >> start;

	// difference between terms
	cout << "Enter the difference: ";
	cin >> diff;

	// loop to get a valid input for elements from the user
	do {
		cout << "Enter a positive whole number for the number of elements: ";
		cin >> elements;
		if (elements <= 0) {
			cout << "Please enter a positive whole number." << endl;
		}
	} while (elements <= 0);

	// calculate the arithmetic series while displaying the step by step calculation
	cout << "Arithmetic Series: ";
	int current = start;
	int sum = 0;

	// loop to calculate the sum of the arithmetic series and display each term
	for (int i = 0; i < elements; ++i) {
		sum += current;
		cout << current;
		if (i < elements - 1) {
			cout << " + ";
		}
		current += diff; //move to the next term in the series
	}
	cout << " = " << sum << endl;
}

void geometric() {
	int r, a, elements;

	// starting number
	cout << "Enter starting number: ";
	cin >> r;

	// number to multiply by
	cout << "Enter a number to multiply by: ";
	cin >> a;

	// loop to get a valid input for elements from the user
	do {
		cout << "Enter a positive whole number for the number of elements: ";
		cin >> elements;
		if (elements <= 0) {
			cout << "Please enter a positive whole number." << endl;
		}
	} while (elements <= 0);
	
	// calculate the geometric series while displaying the step by step calculation
	cout << "Geometric Series: ";
	int current = r; // first term r*a^0=r
	int sum = 0;

	//calculate the sum of the geometric series and display each term
	for (int i = 0; i < elements; ++i) {
		sum += current;
		cout << current;
		if (i < elements - 1) {
			cout << " + ";
		}
		current *= a; // move to the next term in the series
	}
	cout << " = " << sum << endl;

}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}