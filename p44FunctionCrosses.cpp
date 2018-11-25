//p44FunctionCrosses.cpp
//Joseph Charles Serrano
//Started 11/8/16 Ended 11/8/16
/*
Write a VOID function with a NAME "crosses" and a PARAMETER "numCrosses".
The function outputs as many rows as there are crosses, each row having one more cross than the previous.
*/

#include <iostream>
using namespace std;

void crosses(int numCrosses);

int main()
{
	int numCrosses;
	cout << "Enter amount of crosses: ";
	cin >> numCrosses;
	crosses(numCrosses);
}

void crosses(int numCrosses)
{
	char x = 43;
	int count1;
	int count2;
    for(count1 = 0;count1 < numCrosses; count1++)
    {
        for(count2 = 0;count2 <= count1; count2++)
        {
            cout << x;
        }
        cout << " \n";
    }
}

/*
+
++
+++
++++
+++++
++++++
+++++++
++++++++
+++++++++
++++++++++
+++++++++++
*/
