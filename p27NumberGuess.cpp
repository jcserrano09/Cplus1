//p27NumberGuess.cpp
//Joseph Charles Serrano
//Started 10/9/16 Ended 10/9/16
/*Write a number guessing name. The computer will generate a random number between 0 and 100.
The user will be prompted to guess the number.
If the number guessed is greater than the random number, an appropriate message will appear, with a similar message for low guesses.
The user should keep guessing until the correct number is guessed.
An appropriate message should congratulate the user for guessing the correct number.
Count how many guesses it took to get the correct number
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	int guess, randnum, tries;

	guess = 0;
	randnum = 0;
	tries = 0;

	srand(time(0));

    randnum = rand() % 101;

    do
    {
        cout << "Guess a number b/w 0-100: ";
        cin >> guess;
        tries++;

        if(guess < randnum)	//Low Guess
        {
            cout << "Your guess is too low! Pick a new number! \n";
        }

        else if(guess > randnum)	//High Guess
        {
            cout << "Your guess is too high! Pick a new number! \n";
        }

        else	//Accurate Guess
        {
            cout << "Correct, you got it... It took you "<< tries <<" guesses.";
        }
	}

	while(guess != randnum);	//If it is not the random number
    {
        cin.ignore();
        cin.get();
	}
}


/*
Guess a number b/w 0-100: 61
Your guess is too high! Pick a new number!
Guess a number b/w 0-100: 24
Your guess is too low! Pick a new number!
Guess a number b/w 0-100: 50
Correct, you got it... It took you 3 guesses.
*/

/*
Guess a number b/w 0-100: 66
Your guess is too high! Pick a new number!
Guess a number b/w 0-100: 33
Your guess is too high! Pick a new number!
Guess a number b/w 0-100: 11
Your guess is too low! Pick a new number!
Guess a number b/w 0-100: 14
Your guess is too low! Pick a new number!
Guess a number b/w 0-100: 20
Your guess is too high! Pick a new number!
Guess a number b/w 0-100: 19
Your guess is too high! Pick a new number!
Guess a number b/w 0-100: 18
Your guess is too high! Pick a new number!
Guess a number b/w 0-100: 15
Correct, you got it... It took you 8 guesses.
*/
