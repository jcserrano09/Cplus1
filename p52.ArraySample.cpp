//p52.ArraySample.cpp
//Joseph Charles Serrano
//Started 11/30/16 Ended 11/30/16
//Write the example File


#include <iostream>
using namespace std;
#include <stdlib.h>

int main()
{
	int i;
	int velocity[5];
	float distance[] = {10, 23.4, 20, 40.86};

	float time[3];
	time[0] = 100;
	time[1] = 200;
	time[2] = 300;

	for (int i = 0; i < 3; i++)
	{
		cout << "time: " << time[i] << endl;
	}

	for (i=0; i<5; i++)
	{
		cout << "Enter velocity # " << i+1 << " : ";
		cin >> velocity[i];
	}
    cout << "the velocities you entered: ";
	for (i=0; i<5; i++)
	{
		cout << velocity[i];
		if (i<4)
			cout << ",";
	}

	cout << endl;

	system("pause");
	return 0;
}

/*
time: 100
time: 200
time: 300
Enter velocity # 1 : 45
Enter velocity # 2 : 33
Enter velocity # 3 : 56
Enter velocity # 4 : 34
Enter velocity # 5 : 23
the velocities you entered: 45,33,56,34,23
*/
