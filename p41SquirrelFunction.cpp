//p41SquirrelFunction.cpp
//Joseph Charles Serrano
//Started 11/8/16 Ended 11/8/16
/*
When squirrels get together for a party, they like to have acorns.
A squirrel party is successful when the number of acorns is between 40 and 60, inclusive.
Unless it is a weekend, in which case there is no upper limit on the number of acorns.
*/

#include <iostream>
#include <string>
using namespace std;

string squirrelParty(int acorns, bool isWeekend);

int main()
{
	cout << squirrelParty(30, false) << endl;
	string storeString;
	storeString = squirrelParty(55,false);
	cout << storeString << endl;
	cout << squirrelParty(70, true) << endl;
}

string squirrelParty(int acorns, bool isWeekend)
{

	if(isWeekend == false)
    {
        if(acorns >= 40 && acorns <= 60)
            cout << "Successful ";
    }

    if(isWeekend == false)
    {
        if(acorns < 40);
            cout << "No ";
    }


	else if(isWeekend == true)
	{
	    if(acorns >= 40)
            cout << "Successful ";
	}


	return "party.";
}

/*
No party.
Successful No party.
Successful party.
*/

//I don't know what I'm doing wrong... ;(
