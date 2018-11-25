//p16RPSgame.cpp
// Joseph Charles Serrano
//Started 9/25/16 Ended 9/25/16
/*Write a program to simulate rock-paper-scissors game
Each players enters 'R', 'P', 'S' or 1, 2, 3 for Rock, Paper, Scissors.*/

#include <iostream>
using namespace std;

int main()
{
	int RPS1;
	int RPS2;

	cout << "PLAYER 1\n";
	cout << "Enter Rock, Paper, Scissors as 1, 2, or 3: ";
	cin >> RPS1;

	cout << "PLAYER 2\n";
	cout << "Enter Rock, Paper, Scissors as 1, 2, or 3: ";
	cin >> RPS2;

	// Tie Game
	if(RPS1 == RPS2)
	{
		cout << "Tie Game";
	}
	//--------------------------------------

	// Rock beats Scissors
	else if(RPS1 == 1 && RPS2 == 3)
	{
		cout << "Player 1 wins: Rock beats Scissors";
	}

	else if(RPS2 == 1 && RPS1 == 3)
	{
		cout << "Player 2 wins: Rock beats Scissors";
	}
	//--------------------------------------

	//Scissors beats paper
	else if(RPS1 == 3 && RPS2 == 2)
	{
		cout << "Player 1 wins: Scissors beats Paper";
	}

	else if(RPS2 == 3 && RPS1 == 2)
	{
		cout << "Player 2 wins: Scissors beats Paper";
	}
	//--------------------------------------

	//Paper beats Rock
	else if(RPS1 == 2 && RPS2 == 1)
	{
		cout << "Player 1 wins: Paper beats Rock";
	}

	else if(RPS2 == 2 && RPS1 == 1)
	{
		cout << "Player 2 wins: Paper beats Rock";
	}
	//--------------------------------------

	// Invalid inputs
	else
	{
		cout << "Please enter valid Numbers (1,2,3)";
	}

}


/*
PLAYER 1
Enter Rock, Paper, Scissors as 1, 2, or 3: 3
PLAYER 2
Enter Rock, Paper, Scissors as 1, 2, or 3: 2
Player 1 wins: Scissors beats Paper

PLAYER 1
Enter Rock, Paper, Scissors as 1, 2, or 3: 1
PLAYER 2
Enter Rock, Paper, Scissors as 1, 2, or 3: 3
Player 1 wins: Rock beats Scissors

PLAYER 1
Enter Rock, Paper, Scissors as 1, 2, or 3: 1
PLAYER 2
Enter Rock, Paper, Scissors as 1, 2, or 3: 2
Player 2 wins: Paper beats Rock
*/
