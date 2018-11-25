//p13Voting.cpp
//Joseph Charles Serrano
//Started 9/18/16 Ended 9/18/16
//Write a program to determine if the user can vote.

#include <iostream>
using namespace std;

int main()
{
	int Age;
	char Answer1;   //The Variables for the Age and the questions
	char Answer2;

	cout << "Answer the questions with your age and with a Y or N\n"; //Just a starting question to let users know how to answer

    //AGE question
	cout << "How old are you? ";
	cin >> Age;

    //CITIZENSHIP question
	cout << "Are you a U.S. citizen? ";
	cin >> Answer1;

    //REGISTRATION question
	cout << "Are you registered to vote? ";
	cin >> Answer2;

    // The You Cannot Vote IF Statement
	if(Age < 18, Answer1 == 'N', Answer2 == 'N')
	{
		cout << "You cannot vote\n";
		if(Age < 18)
        {
            cout << "-You are too young\n"; //the too young if statement
        }
        if(Answer1 == 'N')
        {
            cout << "-You must be a citizen\n"; //the be a citizen if statement
        }
        if(Answer2 == 'N')
        {
            cout << "-You must be registered"; //the be registered if statement
        }

	}

    // The You Can Vote IF Statement
	if(Age >= 18, Answer1 == 'Y', Answer2 == 'Y')
	{
		cout << "Congrats,You can vote!!";
	}
}

/*
Answer the questions with your age and with a Y or N
How old are you? 18
Are you a U.S. citizen? Y
Are you registered to vote? N
You cannot vote
-You must be registered

Answer the questions with your age and with a Y or N
How old are you? 21
Are you a U.S. citizen? Y
Are you registered to vote? Y
Congrats,You can vote!!

Answer the questions with your age and with a Y or N
How old are you? 15
Are you a U.S. citizen? N
Are you registered to vote? N
You cannot vote
-You are too young
-You must be a citizen
-You must be registered
*/
