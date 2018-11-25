//p55.SwapSample.cpp
//Joseph Charles Serrano
//Started 11/30/16 Ended 11/30/16
//Write the example File

#include <iostream>
using namespace std;

int main()
{
	int v1 = 5;
	int v2 = 10;
	int temp;

	cout << "Before Swap: v1 = " << v1 << ", v2 = "<< v2 << endl;

	temp = v1;
	v1 = v2;
	v2 = temp;

	cout << "After Swap: v1 = "<< v1 <<", v2 = "<< v2 << endl;

	return 0;
}

/*
Before Swap: v1 = 5, v2 = 10
After Swap: v1 = 10, v2 = 5
*/
