//p29MathSkills.cpp
//Joseph Charles Serrano
//Started 10/9/16 Ended 10/9/16
/*
Write a program to let a child practice arithmetic skills.
The program should first ask for what kind of practice is wanted: +, -, * , and let the user repeat the practice as many times as desired, until "Q" is entered.
Two random numbers will be generated from (0 - 9).
If the child answers the equation correctly, a message should appear , and they can then go to the next problem(two different numbers generated).
If the child answers incorrectly, a message should appear & the problem should be repeated (same numbers used).
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	int x;
	int math = 0;
	int randnum1 = 0;
	int randnum2 = 0;
	int answer;

	srand(time(0));

    randnum1 = rand() % 10;
    randnum2 = rand() % 10;

	cout << "Would you like to add(1), subtract(2), or multiply(3): ";
	cin >> math;

    //All while statements are basically the same with a few differences

	while(math == 1)    //Addition equations
	{
		cout << "Please add "<< randnum1 <<" and "<< randnum2 <<": ";
		cin >> x;

		if(x != randnum1+randnum2)  //an if statement for false statement
        {
            cout << "Wrong, please try again. \n";
        }
        if(x == randnum1+randnum2)  //an if statement for true statement
        {
            cout << "Congrats, want to continue Yes(1) or No(2): ";
            cin >> answer;

            if(answer == 2)
                break;

            else
            {
                randnum1 = rand() % 10;     //New set of random numbers when the problem loops again
                randnum2 = rand() % 10;
                math = 1;
                continue;
            }
        }
	}

    randnum1 = rand() % 10;
    randnum2 = rand() % 10;

	while(math == 2)    //Subtraction Equations
    {
        cout << "Please subtract "<< randnum1 <<" and "<< randnum2 <<": ";
        cin >> x;

        if(x != randnum1-randnum2)
        {
            cout << "Wrong, please try again. \n";
        }
        if(x == randnum1-randnum2)
        {
            cout << "Congrats, want to continue Yes(1) or No(2): ";
            cin >> answer;

            if(answer == 2)
                break;

            else
            {
                randnum1 = rand() % 10;
                randnum2 = rand() % 10;
                math = 2;
                continue;
            }
        }
    }

    randnum1 = rand() % 10;
    randnum2 = rand() % 10;

    while(math == 3)    //Multiplication Equations
    {
        cout << "Please multiply "<< randnum1 <<" and "<< randnum2 <<": ";
        cin >> x;

        if(x != randnum1*randnum2)
        {
            cout << "Wrong, please try again. \n";
        }
        if(x == randnum1*randnum2)
        {
            cout << "Congrats, want to continue Yes(1) or No(2): ";
            cin >> answer;

            if(answer == 2)
                break;

            else
            {
                randnum1 = rand() % 10;
                randnum2 = rand() % 10;
                math = 3;
                continue;
            }
        }
    }
}


/*
Would you like to add(1), subtract(2), or multiply(3): 1
Please add 0 and 6: 5
Wrong, please try again.
Please add 0 and 6: 3
Wrong, please try again.
Please add 0 and 6: 6
Congrats, want to continue Yes(1) or No(2): 1
Please add 7 and 6: 13
Congrats, want to continue Yes(1) or No(2): 1
Please add 0 and 2: 2
Congrats, want to continue Yes(1) or No(2): 2
*/

/*
Would you like to add(1), subtract(2), or multiply(3): 2
Please subtract 3 and 3: 0
Congrats, want to continue Yes(1) or No(2): 1
Please subtract 2 and 1: 0
Wrong, please try again.
Please subtract 2 and 1: 1
Congrats, want to continue Yes(1) or No(2): 1
Please subtract 3 and 8: -5
Congrats, want to continue Yes(1) or No(2): 2
*/

/*
Would you like to add(1), subtract(2), or multiply(3): 3
Please multiply 0 and 3: 0
Congrats, want to continue Yes(1) or No(2): 1
Please multiply 4 and 6: 24
Congrats, want to continue Yes(1) or No(2): 1
Please multiply 5 and 8: 0
Wrong, please try again.
Please multiply 5 and 8: 40
Congrats, want to continue Yes(1) or No(2): 2
*/



