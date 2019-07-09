
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main ()
{
	double netbalance, d1, d2, payment, interestratepermonth;
	cout << " Enter the balance shown in the bill. \n"; cin >> netbalance;
	cout << " Enter the number of days in the billing cycle. \n"; cin >> d1;
	cout << " Enter the number of days before the billing cycle. \n"; cin >> d2;
	cout << " Enter the payment made. \n"; cin >> payment;
	cout << " Enter the interest per month. \n"; cin >> interestratepermonth;
	
	cout << "The interest is: " << ((netbalance * d1 - payment * d2)/d1 )*interestratepermonth << endl;
	
	
	
	getch ();
	return 0;
}
