//p70IOStructuresEx1.cpp
//Joseph Charles Serrano
//Started 12/10/16 Ended 12/10/16
//Type of the example program and get it running

#include <iostream>
using namespace std;

struct PARTS
{
	string partname;
	int count;
	float unitCost;
	float totalCost;
};

int main()
{
	struct PARTS part;
	part.partname = "bolt";
	part.count = 20;
	part.unitCost = 0.25;
	part.totalCost = part.count * part.unitCost;
	cout << "Total cost = " << part.totalCost << endl;
	cout << "partname = " << part.partname << endl;
	return 0;
}

/*
Total cost = 5
partname = bolt
*/
