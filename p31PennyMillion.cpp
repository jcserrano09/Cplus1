//p31PennyMillion.cpp
//Joseph Charles Serrano
// Started: 10/16/16 Ended 10/16/16
//Write a program to compute the value of the penny every day from day 1 to day 30, and how much more (or less) that is compared to the 1 million dollars.

#include <iostream>
using namespace std;

int main()
{
	int million = 1000000;
	int days = 0;
	int penny = 0, pennies = 1, D;
	int dollar;


    for(days == 0; days < 31; days++)
	{
		if(days <= 1)
			D = days;
		else
		{
			D = penny + pennies*2;
			penny = pennies;
			pennies = D;
		}
		cout <<"Days = "<< days <<", Pennies = "<< D <<" \n";
	}

	dollar = D/100;

	cout << "With this amount of pennies, you have "<< dollar <<" dollars!\n";
	if(dollar < million)
        cout << "You have less money than a million dollars";
    else
        cout << "You have more money than a million dollars";
}

/*
Days = 0, Pennies = 0
Days = 1, Pennies = 1
Days = 2, Pennies = 2
Days = 3, Pennies = 5
Days = 4, Pennies = 12
Days = 5, Pennies = 29
Days = 6, Pennies = 70
Days = 7, Pennies = 169
Days = 8, Pennies = 408
Days = 9, Pennies = 985
Days = 10, Pennies = 2378
Days = 11, Pennies = 5741
Days = 12, Pennies = 13860
Days = 13, Pennies = 33461
Days = 14, Pennies = 80782
Days = 15, Pennies = 195025
Days = 16, Pennies = 470832
Days = 17, Pennies = 1136689
Days = 18, Pennies = 2744210
Days = 19, Pennies = 6625109
Days = 20, Pennies = 15994428
Days = 21, Pennies = 38613965
Days = 22, Pennies = 93222358
Days = 23, Pennies = 225058681
Days = 24, Pennies = 543339720
Days = 25, Pennies = 1311738121
Days = 26, Pennies = -1128151334
Days = 27, Pennies = -944564547
Days = 28, Pennies = 1277686868
Days = 29, Pennies = 1610809189
Days = 30, Pennies = 204337950
With this amount of pennies, you have 2043379 dollars!
You have more money than a million dollars
*/
