//Anitha Tumarada
//03-17-2020
//Create a program that computes the Quadratic formula

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Declare variables to enter in the values for a, b, and c
	double a = 0;
	double b = 0;
	double c = 0;
	double discriminant;
	double root1 = 0;
	double root2 = 0;
	char letter;
	letter = 'x';

	cout << "      Welcome to the Quadratic Formula Solver" << endl << endl;
	
	// Prompt the user to input the values of a, b, and c.
		cout << "Please enter in the value of a: ";
		cin >> a;
		cout << endl;
		cout << setprecision(2) << fixed << showpoint;


		cout << "Please enter in the value of b: ";
		cin >> b;
		cout << endl;
		cout << setprecision(2) << fixed << showpoint;

		cout << "Please enter in the value of c: ";
		cin >> c;
		cout << endl;
		cout << setprecision(2) << fixed << showpoint;

		cout << endl;
		cout << endl;

		// Display the general form of a quadratic equation in the form of ax^2 + bx + c
		cout << "The equation is " << a << "x^2" << " + " << b << "x" << " + " << c << endl << endl;

		// Calculate the discriminant (b^2 - 4ac)
		discriminant = (pow(b, 2) - (4 * a * c));// Calculating the discriminant
		cout << "The discriminant is: " << discriminant << endl << endl; // Display the discriminant

		// If statement for calculating the number of roots if the value of the discriminant is 0

		if (discriminant == 0)
		{
			root2 = (-b - sqrt(discriminant)) / 2 * a; // Calculate the roots of the equation
			cout << "There is only one root and the value is " << root2 << endl;
			
		}
		
		// If statement for calculating the number of roots if the value of the discriminant is less than 0
		
		if (discriminant < 0)
		{
			cout << "There are no roots for this equation!! " << endl;
		}
	
		// Calculate the number of roots in the quadratic equation if the discriminant is greater than 0

		if (discriminant > 0)
		{
			root1 = (-b + sqrt(discriminant)) / 2 * a; // Calculate the roots of the equation
			root2 = (-b - sqrt(discriminant)) / 2 * a;

			cout << "There are two roots and the values are: " << root1 << " and " << root2 << endl << endl; // Display the roots
		}
		// Display a Thank You message when the user exits the program

		cout << "Thank you for using the quadratic problem solver" << endl;
	
	
	
	
	
	return 0;
	system("pause");

}



