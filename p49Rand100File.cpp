//p49Rand100File.cpp
//Joseph Charles Serrano
//Started 12/10/16 Ended 12/10/16
//Write a program which outputs 100 random numbers between 1-100 in a file named "numbers.txt" , 10 numbers per line.

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	ofstream outStream;

	outStream.open("numbers.txt");
	if(outStream.fail())
	{
		cout << "Input file opening fail. \n";
		exit(1);
	}


	outStream << "Numbers between 1-100(random)\n";

	for(int count = 0; count < 10; count++)
    {
        for(int i=0; i<10; i++)
        {
            outStream << rand()%100 + 1 << ' ';
        }
        outStream << "\n";
    }

}
