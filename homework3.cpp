/*	Author:		Jefferson Crelia	(JeffersonCrelia@gmail.com)
	Date:		November 2, 2016
	Instructor:	David M. Keathly
	Description:	This program reads user input and visuallizes a trapezoid, as well as displaying height and area
*/


#include <iostream>
#include <cstdlib>
using namespace std;

/*
============================================================================
Function : trap
Parameters : a double representing the bottom andtop base ofthetrapezoid,
as well as a char representing the wanted character
Return : a trapezoid in the within the given values
Description : This function uses printing strings to make a trapezoid shape
============================================================================
*/
void trap(int base_1, int base_2, char x);

/*
============================================================================
Function : check_b_1
Parameters : an int representing thetop base of the trapezoid
Return : nothing if value is valid, error message if not
Description : This function checks to see if the given value for base_1
is valid
============================================================================
*/
void check_b_1(int& base_1);

/*
============================================================================
Function : check_b_2
Parameters : an int representing the bottom base of the trapezoid
Return : nothing if value is valid, error message if not
Description : This function checks to see if the given value for base_2
is valid
============================================================================
*/
void check_b_2(int base_1, int& base_2);

/*
============================================================================
Function : trap_area
Parameters : an int representing base_1, base_2, height and area
Return : nothing if value is valid
Description : This function computes theheight andarea of the trapezoid
============================================================================
*/
void trap_area(int base_1, int base_2, int& height, double& area);

int main ()
{
	cout << "\n\n\n";
	cout <<"x" << string(47, '-') << "x\n";
        cout << "|\t~Course Number: CSCE 1030~\t\t|\n";
        cout << "|\t~Program Number: Section 002~\t\t|\n";
        cout << "|\t~Name: Jefferson Crelia~\t\t|\n";
        cout << "|\t~Email: JeffersonCrelia@my.unt.edu~\t|\n";
	cout << "x" << string(47, '-') << "x" << endl;
        cout << "\n\n\n";
	// display header with border around it


	int base_1, base_2, height;// declaraing variablesfor both bases, and height
	double area; //declaring variablefor area
	char x; //delcaring char 'x' for the character wanted for trpaezoid

	cout << "Please enter an odd integer for the top base (1-21): ";
		cin >> base_1;
		cout << endl;
		check_b_1(base_1); // get user input for base_1 and run void to check if it is valid

	cout << "Please enter and odd integer larger than the top base (3-23): ";
		cin >> base_2;
		cout << endl;
		check_b_2(base_1, base_2); // get user input for base_2 and run void to check if it is valid

	cout << "Please enter the character you would like to use for the trapezoid: ";
		cin >> x;
		cout << endl;
		cout << "\n\n\n"; // get user input for x

	trap(base_1, base_2, x);// call to void trap()
	trap_area(base_1, base_2, height, area);// call to void trap_are()

	cout << "\n\n\nThe height of the trapezoid is " << height << " " << x << "'s.\n\n";
	cout << "The area of the trapezoid is " << area << x << "^2.\n\n\n\n";

	return 0;

}




void trap(int base_1, int base_2, char x) // definitition for void trap()
{
	for (double g = base_2 % base_1; g != 0; g += 0) // add the correct amount of spaces and characters
	{
		for (int i = base_1; i <= base_2; i += 2)
		{
			cout << "\t" << string(((base_2 - i)/2), ' ');
			cout << string(i, x) << endl;
		}break; //for loop prints out the spaces and x's of the trapezoid andbreakswhen the function is false
	}
}




void check_b_1(int& base_1)
{
	while(base_1 < 1 || base_1 > 21 || base_1 % 2 == 0) // while loop to check if valid input
	{
		cout << "The top base must be odd and between 1 and 21. Please enter a valid value: " << endl;
			cin >> base_1;
	}
}




void check_b_2(int base_1, int& base_2) // while loop to check for valid input
{
	while(base_2 <= base_1 || base_2 < 3 || base_2 > 23 || base_2 % 2 == 0)
	{
		cout << "The bottom base must be odd, between 3 and 23, and larger than the top base. Please enter a valid value: " << endl;
			cin >> base_2;
	}
}



void trap_area(int base_1, int base_2, int& height, double& area)
{
	height =(( base_2 - base_1)/2)+1;
	area = (.5 * height * (base_1 + base_2));
	// computation for height and area
}
