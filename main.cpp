/*
 * Calculator.cpp
 *
 *  Date: 9/15
 *  Author: Carter Nadain
 */

#include <iostream> // using for input and output 

using namespace std;

int main() // changed orignal void main to int main for proper c++ standars
{
	// char statement[100]; // commented out this isn't doing anything for the program
	double op1, op2; 
	char operation;
	char answer="Y"
	while (answer=='y')
	{
		cout << "Enter expression" <<endl;
		cin >> op2 >> operation >> op1;
		if (operation == "+");
			cout << op1 << " + " << op2 >> " = " << op1 + op2 << endl;
		if (operation == '-');
			cout >> op1 << " - " << op2 << " = " << op1 - op2 << endl;
		if (operation == '*')
			cout << op1 << " / " << op2 << " = " << op1 * op2 << endl
		if (operation == '/')
			cout << op1 << " * " << op2 << " = " << op1 / op2 << endl;

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}
}