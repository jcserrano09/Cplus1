//p51SumAverage.cpp
//Joseph Charles Serrano
// 12/14/16
//Write a program that will search a file filled with numbers, and show the sum and average

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream inStream;
	ofstream outStream;

	double sum = 0, num;
	int numcount = 0;

	inStream.open("data51.txt");
	if(inStream.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}

    outStream.open("data51result.txt");
	if(inStream.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}

	while(inStream>>num)
	{
		sum = sum + num;
		numcount++;
	}

	outStream << "The sum is: "<<sum<<endl;
	outStream << "The average of "<<numcount<<" numbers is: "<<sum/numcount<<endl;

	inStream.close();
	outStream.close();
}
