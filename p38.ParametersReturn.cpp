//p38ParameterReturn.cpp
//Joseph Charles Serrano
//Started 10/23/16 Ended 10/23/16
/*
Write the definition of a function that RETURNS a float and has TWO float PARAMETERS.
The function returns the larger of its two parameters.
*/

#include <iostream>
using namespace std;

float larger(float num1, float num2);
int main()
{
	float num1 = 4, num2 = 10, temp;

	cout << "The larger of " << num1 << " and " << num2 <<" is " << larger(num1,num2)
	<< endl;

	temp = larger(num2,num1);
	cout << "The larger of " << num2 << " and " << num1 <<" is "<< temp<<endl;
}

float larger(float num1, float num2)
{
    float larger;
    larger = num1;
    if(num2 > num1)
        larger = num2;

    return larger;
}


/*
The larger of 4 and 10 is 10
The larger of 10 and 4 is 10
*/
