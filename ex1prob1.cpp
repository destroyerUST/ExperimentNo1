#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int premium, sideline, box, generaladmission;

	cout << "Enter the total tickets for premium. \n"; cin >> premium;
	cout << "Enter the total tickets for sideline. \n";  cin >> sideline;
	cout << "Enter the total tickets for box. \n"; cin >> box;
	cout << "Enter the total tickets for general admission. \n";  cin >> generaladmission;

	cout << "The total ticket is: " << premium + sideline + box + generaladmission << endl;
	cout << "The total sales for premium: " << premium*25 << endl;
	cout << "The total sales for sideline: " << sideline*50 << endl;
	cout << "The total sales for box: " << box*150 << endl;
	cout << "The total sales for general admission: " << generaladmission*250 << endl;
	cout << "And the total sales of ticket is: " << premium*25 + sideline*50 + box*150 + generaladmission*250;


getch();
return 0;
}
