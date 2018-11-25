//p28GymScore.cpp
//Joseph Charles Serrano
//Started 10/9/16 Ended 10/9/16
/*
Write a program to compute a gymnastics competition score.
There are 4 judges who mark the gymnasts in the range of 0 to 10, and the overall score is the average of the marks.
An error message should appear if a mark is entered that is out of the range (0-10) and then ask the user to input a valid mark again.
Output the average.
*/

#include <iostream>
using namespace std;

int main()
{
	float score;
	float sum = 0;
	float judges = 0;

    cout << "4 judges, please enter your scores! \n\n";

	do
	{
		cout << "Judge, please enter score b/w 0-10: ";
		cin >> score;
		judges++; 

		if(score < 0 || score > 10)
		{
			cout << "Incorrect, Please put a valid score! \n";
			cin >> score;
			continue;
		}

        else
		sum = sum + score;
	}
	while(judges < 4);	//limit of 4 scores
        cout << "The average of the 4 scores is: "<< sum/judges << endl;

}


/*
4 judges, please enter your scores!

Judge, please enter score b/w 0-10: 8
Judge, please enter score b/w 0-10: 5
Judge, please enter score b/w 0-10: 7
Judge, please enter score b/w 0-10: 6
The average of the 4 scores is: 6.5
*/
