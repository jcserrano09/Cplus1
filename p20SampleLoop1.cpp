//p20SampleLoop1.cpp
//Joseph Charles Serrano
// Started 10/2/16 Finished 10/2/16
//Type up the sample program

#include <iostream>
using namespace std;

int main()
{
	int count;
	//FOR loop is used when an action must be repeated
	//FOR (BEGIN; END CONDITION; INCREMENT ) ( statements... ;)
	for (count = 0; count < 3; count++)
	{
		cout << "Int FOR loop: " << endl;
		cout << "count = " << count << endl;
	}

	//WHILE loop is also used when an action must be repeated
	//WHILE ( END CONDITION ) ( statements... ;)
	while ( count < 4)
	{
		cout << "In WHILE loop:" << endl;
		cout << "count = " << count << endl;
		count++;
	}

	//DO-WHILE loop is used when an action must me repeated at least once
	//DO (statements... ;) WHILE (END CONDITION);
	do
	{
		cout << "In DO-WHILE loop;" << endl;
		cout << "count = " << count << endl;
		count = count + 1;
	}
	while (count < 3);

	return 0;
}


/*
Int FOR loop:
count = 0
Int FOR loop:
count = 1
Int FOR loop:
count = 2
In WHILE loop:
count = 3
In DO-WHILE loop;
count = 4
*/