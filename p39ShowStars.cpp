//p39ShowStars.cpp
//Joseph Charles Serrano
//Started 10/23/16 Ended 10/23/16
//Write the definition of a function with one parameter numStars.

#include <iostream>
using namespace std;

void showStars(int numStars);

int main()
{
	int N;
	cout << "How many stars would you like to show?: ";

	cin >> N;
	showStars(N);
}

void showStars(int N)
{
    char x = 42;
    int count1;
	int count2;
	for(count1 = 0;count1 < N; count1++)
    {
        for(count2 = 0;count2 <= count1; count2++)
        {
            cout << x;
        }
        cout << " \n";
    }
}

/*
How many stars would you like to show?: 10
*
**
***
****
*****
******
*******
********
*********
**********
*/
