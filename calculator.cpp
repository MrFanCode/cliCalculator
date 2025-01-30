#include <iostream>

using namespace std;

// Initializing/Declaring the function before using it
void calculator();

int main() {

	// Calling the calculator function
	calculator();

	return 0;
}


void calculator() {

	// Initializing variables
	int operation;
	double first_num, second_num, sum; 

	cout << "**********************************************" << endl;
	cout << "WELCOME TO THE SIMPLE CALCULATOR" << endl;
	// This will lis the operation menu for the user to refer
	cout << "1. Addition (+)" << endl;
	cout << "2. Subtractrion (-)" << endl;
	cout << "3. Multiplication (*)" << endl;
	cout << "4. Division (/)" << endl;

	cout << "Choose a operation from option above through (1-4): ";
	cin >> operation;

	// Handling the each operation
	switch ( operation ) {
		case 1:
			cout << "Enter the first number: ";
			cin >> first_num;
			cout << "Enter the second number: ";
			cin >> second_num;

			sum  = first_num + second_num;
			cout << sum << endl;
			break;
		
		case 2:
			cout << "Enter the first number: ";
			cin >> first_num;
			cout << "Enter the second number: ";
			cin >> second_num;

			sum = first_num - second_num;
			cout << sum << endl;
			break;

		case 3:
			cout << "Enter the first number: ";
			cin >> first_num;
			cout << "Enter the second number: ";
			cin >> second_num;

			sum = first_num * second_num;
			cout << sum << endl;
			break;

		case 4:
			cout << "Enter the first number: ";
			cin >> first_num;
			cout << "Enter the second number: ";
			cin >> second_num;

			// Check for zero division error and handle the error
			if ( second_num != 0 ) {
				sum = first_num / second_num;
				cout << sum << endl;
			} else if ( second_num == 0 ) {
				cout << "OOPS!!, You cannot do division with zero." << endl;
			}
			break;
		default:
			cout << "Please enter a valid value" << endl; // Return a message if there is no valid number entered
			break;

	}

	cout << "*********************************************************";
	// END PROGRAM

	// Checking for the operation and handle the operation
	//if ( operation == 1 ) {
		//cout << "Enter the first number: ";
		//cin >> first_num;
		//cout << "Enter the second number: ";
		//cin >> second_num;

		//sum  = first_num + second_num;
		//cout << sum;
	//} else if ( operation == 2 ) {
		//cout << "Enter the first number: ";
		//cin >> first_num;
		//cout << "Enter the second number: ";
		//cin >> second_num;

		//sum = first_num - second_num;
		//cout << sum;
	//} else if ( operation == 3 ) {
		//cout << "Enter the first number: ";
		//cin >> first_num;
		//cout << "Enter the second number: ";
		//cin >> second_num;

		//sum = first_num * second_num;
		//cout << sum;
		
	//} else if ( operation == 4 ) {
		//cout << "Enter the first number: ";
		//cin >> first_num;
		//cout << "Enter the second number: ";
		//cin >> second_num;


		//if ( first_num != 0 || second_num != 0 ) {
			//sum = first_num / second_num;
			//cout << sum;
		//} else if ( first_num == 0 || second_num == 0 ) {
			//cout << "OOPS!!, You cannot do division with zero.";
		//}
	
		//}
}


