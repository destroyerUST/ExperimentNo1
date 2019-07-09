#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double mass, density;
	cout << "Input the mass in grams. \n"; cin >> mass;
    cout << "Input the density cubic centimeters. \n"; cin >> density;
	cout << " The volume is: " << mass*density/4 << " m/c^3";

	getch ();
	return 0;

}
