/*
 * Calculator.cpp
 *
 *  Date: 9/15
 *  Author: Carter Nadain
 */

#include <iostream> // using for input and output 

using namespace std;

int main() // changed orignal void main to int main for proper c++ standards
{
	// char statement[100]; // commented out this isn't doing anything for the program
	double op1, op2; // changed to double for floating point calculations
	char operation;
	char answer='Y'; // added single quotes and a semicolon for proper C++ standards
    //add spacing for proper sequencing 
    // Loop to continue asking for new expressions until the user decides to stop
    while (answer == 'Y' || answer == 'y')  // adjusted the condition to check both 'Y' and 'y'.
	 {
        cout << "Enter expression (e.g., 2 + 2): ";  // Instructions for the user.
        cin >> op1 >> operation >> op2;  // adjusted Input format so it matches the expected operand/operator order.
        // This statement performs the calculation based on the operator provided by the user.
        if (operation == '+')  // took the semicolon at the end of the if statement.
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;  // fixed the output for addition.
        else if (operation == '-')  // Changed this to an else if statment to avoid multiple evaluations.
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;  // fixed output for subtraction.
        else if (operation == '*')
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;  // fixed output for * (fixed operator from / to *).
        else if (operation == '/') 
        {
            if (op2 != 0)  // Added check to avoid division by zero.
                cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;  // fixed the output for division.
            else
                cout << "Error: Division by zero is undefined!" << endl;  // Error message for user. 
        }
        else
            cout << "Invalid operator. Please use +, -, *, or /." << endl;  // Error message for invalid uses for the users.

        // question for the user if they want to continue the program.
        cout << "Do you wish to evaluate another expression? (Y/N): ";
        cin >> answer;  // Taking the user's input to continue or end the program.
    }

    // Message when the program ends.
    cout << "Program Finished." << endl;

    return 0;  // Returning 0 to show successful execution of the program.
}