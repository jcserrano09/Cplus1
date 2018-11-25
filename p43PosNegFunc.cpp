//p43PosNegFunc.cpp
//Joseph Charles Serrano
//Started 11/8/16 Ended 11/8/16
/*
Given 2 int values, return True if one is negative and one is positive.
Except if the parameter "negative" is True, then return True only if both are negative.
*/

#include <iostream>
using namespace std;

bool posNeg(int val1, int val2, bool negative);

int main()
{
	posNeg(1,-23, false);
	posNeg(-3, 1, false);
	posNeg(1,1, false);
	posNeg(-4,-3, true);
	posNeg(1,1, true);
}

bool posNeg(int val1, int val2, bool negative)
{
	if(negative == false)
	{
		if(val1 < 0 || val2 < 0)
			cout << "("<<val1<<","<<val2<<") --> ""Return True\n";
		else
			cout << "("<<val1<<","<<val2<<") --> ""Return False\n";
	}

	if(negative == true)
	{
		if(val1 < 0 && val2 < 0)
			cout << "("<<val1<<","<<val2<<") --> ""Return True\n";
		else
			cout << "("<<val1<<","<<val2<<") --> ""Return False\n";
	}
}


/*
(1,-23) --> Return True
(-3,1) --> Return True
(1,1) --> Return False
(-4,-3) --> Return True
(1,1) --> Return False
*/
