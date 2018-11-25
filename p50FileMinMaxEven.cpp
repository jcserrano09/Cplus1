//p50FileMinMaxEven.cpp
//Joseph Charles Serrano
// 12/14/16
//Write a program that will search a file filled with numbers, and show the largest number and the smallest number.

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream inStream;
	ofstream outStream;

	int num, smallest, largest = 0, even;
	int count = 0;


	inStream.open("data50.txt");
	if(inStream.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}

    outStream.open("data50result.txt");
	if(inStream.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}


	while(inStream>>num)
    {

        if(largest<num)
            largest = num;

		if(num < smallest)
            smallest = num;
        else if(num < smallest)
            smallest = num;

        if ( num % 2 == 0)
			count++;
    }


	outStream << "The smallest number is: "<< smallest <<".\n\n";
	outStream << "The largest number is: "<< largest <<".\n\n";
	outStream << "The number of even numbers are: "<<count<<"\n\n";

	inStream.close();
	outStream.close();
}
