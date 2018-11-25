//p17CoinConversion.cpp
// Joseph Charles Serrano
//Started 9/25/16 Ended 9/25/16
//Write a program to converts any given number of total cents(under 100) into the correct number of: quarters, dimes, nickels, pennies.

#include <iostream>
using namespace std;

int main()
{
	int total;
	int q, d, n, p;

	cout << "Please enter the total amount of cents: ";
	cin >> total;

	q = total / 25;		//Total Quarters
	if( q > 0)
	{
		cout << "# of Quarters: "<<q<<" x 25c = "<<q*25<<" cents total" << endl;
		total = total - q*25;
	}

	d = total / 10;		//Total Dimes
	if( d > 0)
	{
		cout << "# of Dimes: "<<d<<" x 10c = "<<d*10<<" cents total" << endl;
		total = total - d*10;
	}

	n = total / 5;		//Total Nickels
	if( n > 0)
	{
		cout << "# of Nickels: "<<n<<" x 5c = "<<n*5<<" cents total" << endl;
		total = total - n*5;
	}

	p = total / 1;		//Total Pennies
	if( p > 0)
	{
		cout << "# of Pennies: "<<p<<" x 1c = "<<p*1<<" cents total" << endl;
		total = total - p*1;
	}
	return 0;
}

/*
Please enter the total amount of cents: 322
# of Quarters: 12 x 25c = 300 cents total
# of Dimes: 2 x 10c = 20 cents total
# of Pennies: 2 x 1c = 2 cents total


Please enter the total amount of cents: 17
# of Dimes: 1 x 10c = 10 cents total
# of Nickels: 1 x 5c = 5 cents total
# of Pennies: 2 x 1c = 2 cents total
*/
