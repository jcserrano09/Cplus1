//p35samplefunction.cpp
//Joseph Charles Serrano
//Started 10/23/16 Ended 10/23/16
//Type up the sample function and add the main and function call

#include <iostream>
#include <iomanip>
using namespace std;

void weightOfPeople(int numberPeople, double weightPerPerson);

int main()
{
	weightOfPeople(12,100);
}

void weightOfPeople(int numberPeople, double weightPerPerson)
{
	cout << "The total weight of " << numberPeople << " people,\n";
	cout << "each person weighing " << weightPerPerson << "lb,\nis ";
	cout << fixed << setprecision(1) << numberPeople * weightPerPerson << "lb\n";
}

/*
The total weight of 12 people,
each person weighing 100lb,
is 1200.0lb
*/
