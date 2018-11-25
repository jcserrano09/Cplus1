// p9Quarter
// Joseph Charles Serrano
// Started 9/11/16 Ended 9/11/16

#include <iostream>
using namespace std; //INPUT/OUTPUT

int main() // start
{
	int q;
	cout << "Please enter quarters "; //quarters
	cin >> q;

	int d;
	cout << "Please enter dimes: "; // dimes
	cin >> d;

	int n;
	cout << "Please enter nickel: "; // nickels
	cin >> n;

	cout << "You have: "<< q <<" * 25 + "<< d <<" * 10  + "<< n <<" * 5 = " << q*(25) + d*(10)+ n*(5) << " cents    ";  // the total cents

	return 0; // end
}

/*
Please enter quarters 6
Please enter dimes: 2
Please enter nickel: 5
You have: 6 * 25 + 2 * 10  + 5 * 5 = 195 cents
*/
