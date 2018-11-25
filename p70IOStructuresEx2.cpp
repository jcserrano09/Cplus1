//p70IOStructuresEx2.cpp
//Joseph Charles Serrano
// Started 12/10/16 Ended 12/10/16
//Type up the example program and test iter_swap

#include <iostream>
using namespace std;

struct RECORD
{
	int partNum;
	int numUnits;
	float unitCost;
	float totalCost;
};

int main()
{
	struct RECORD autoParts;
	cout << "Enter a part number:";
	cin >> autoParts.partNum;

	cout << "Enter number of units:";
	cin >> autoParts.numUnits;

	cout << "Enter unit cost: ";
	cin >> autoParts.unitCost;

	autoParts.totalCost = autoParts.numUnits * autoParts.unitCost;
	cout << "The total cost for those units is: " << autoParts.totalCost << endl;

	return 0;
}

/*
Enter a part number:4
Enter number of units:5
Enter unit cost: 3
The total cost for those units is: 15
*/
