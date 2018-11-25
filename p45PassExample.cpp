//p45PassExample.cpp
//Joseph Charles Serrano
//Started 11/6/16 Ended 11/6/16
//Type up the pointer example including the comments.

#include <iostream>
using namespace std;

// parameter "&referenceParameter" REFERS to the variable "localVar"
void input(int &referenceParameter);

int main()
{
	int localVar = 10;
	cout << "localVar = " << localVar << endl; // shows "localVar = 10"

	input(localVar); // Passing "localVar" by REFERENCE...
	// ...means that the value of "localVar" will change...
	// ... when we change "referenceParameter" inside the input(...) function

	cout << "localVar = " << localVar << endl;5

	return 0;
}

void input(int &referenceParameter)
{
	cout << "Please enter a new value: ";
	cin >> referenceParameter;
}

/*
localVar = 10
Please enter a new value: 15
localVar = 15
*/
