#include <iostream>
#include<string.h>
#include<conio.h>
using namespace std;

// Function to add two numbers
double add(double x, double y) {
    return x + y;
}

// Function to subtract two numbers
double subtract(double x, double y) {
    return x - y;
}

// Function to multiply two numbers
double multiply(double x, double y) {
    return x * y;
}

// Function to divide two numbers
double divide(double x, double y) {
    if (y == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;  // Return 0 for division by zero
    } else {
        return x / y;
    }
}

int main() {
	char pass[50];
char ch;
int i;

cout<<"\n enter password to use my calculater";
for(i=0;i<49;i++){
	ch=getch();
	cout<<"*";
	if(ch=='\r')
	break;
	else
	pass[i]=ch;
}
pass[i]='\0';
int s='a';
strnset(pass,s,1);
if(strncmp(pass,"asifak",2)==0){
    double num1, num2;
    int choice;

    // Display available operations
    cout << "Select operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    // Loop for multiple calculations
    while (true) {
        cout << "Enter choice (1/2/3/4): ";
        cin >> choice;

        // Check if the choice is valid
        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            // Perform selected operation
            switch (choice) {
                case 1:
                    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
                    break;
                case 2:
                    cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
                    break;
                case 3:
                    cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
                    break;
                case 4:
                    cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
                    break;
            }
        } else {
            cout << "Invalid choice! Please choose a valid operation." << endl;
        }

        char nextCalculation;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> nextCalculation;
        if (nextCalculation != 'y' && nextCalculation != 'Y') {
            cout << "Goodbye!" << endl;
            break;
        }
    }
}
else {

cout<<"\n incorrect password";
cout<<"\n enter correct password ";}
    return 0;


}

