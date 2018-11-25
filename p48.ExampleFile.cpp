//p48.ExampleFile.cpp
//Joseph Charles Serrano
//Started 11/30/16 Ended 11/30/16
//Write the example File

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream inStream;
	ofstream outStream;
	int val;

	inStream.open("telemetry.txt");
	if(inStream.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}

	outStream.open("results.txt");
	{
		if(outStream.fail())
		{
			cout << "Output file opening failed.\n";
			exit(1);
		}
	}

    outStream << "Square of telemetry data:\n";
	while (!inStream.eof())
	{
		inStream >> val;
		outStream << val * val << endl;
	}
	inStream.close();
	outStream.close();
}
