//p30Dice.cpp
//Joseph Charles Serrano
// Started: 10/16/16 Ended 10/16/16
//Write a Dice Game program

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	int dice = 0;
	int comp = 0;
	int answer;

	srand(time(0)); //srand for random numbers

	cout << "Beat the computer!\n";
	cout << "Your dice is now rolled.\n\n";

	while(dice == 0 && comp == 0)
	{
		dice = rand()%6 + 1;    //The random dice
		comp = rand()%6 + 1;

		cout << "Would you like to re-roll,yes(1) or no(2)\n";
		cin >> answer;

		if(answer == 1) //if statement for a re-roll
        {
            dice = 0;
            comp = 0;
			continue;
        }

		else if(answer == 2)    //else if statement for the dice game
			if(dice > comp)
				cout << "You have "<<dice<<" while the computer has "<<comp<<", you Won!(total = "<<dice + comp<<")\n";
			if(dice < comp)
				cout << "You have "<<dice<<" while the computer has "<<comp<<", you Lost...(total = "<<dice + comp<<")\n";
			if(dice == comp)
				cout << "You have "<<dice<<" while the computer has "<<comp<<", Tie Game!?!(total = "<<dice + comp<<")\n";
	}

}

/*
Beat the computer!
Your dice is now rolled.

Would you like to re-roll,yes(1) or no(2)
2
You have 4 while the computer has 4, Tie Game!?!(total = 8)
*/

/*
Beat the computer!
Your dice is now rolled.

Would you like to re-roll,yes(1) or no(2)
1
Would you like to re-roll,yes(1) or no(2)
1
Would you like to re-roll,yes(1) or no(2)
2
You have 5 while the computer has 3, you Won!(total = 8)
*/

/*
Beat the computer!
Your dice is now rolled.

Would you like to re-roll,yes(1) or no(2)
1
Would you like to re-roll,yes(1) or no(2)
2
You have 1 while the computer has 4, you Lost...(total = 5)
*/
