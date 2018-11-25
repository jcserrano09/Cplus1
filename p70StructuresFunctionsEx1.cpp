//p70StructuresFunctionsEx1.cpp
//Joseph Charles Serrano
//Started 12/10/16 Ended 12/10/16
//Type the example program and test it

#include <iostream>
#include <math.h>
using namespace std;

struct cylinder
{
	float radius;
	float length;
	float section;
	float volume;
};

typedef struct cylinder CYLINDER;

void funcoutput(CYLINDER can1);

int main()
{
	CYLINDER can;

	cout << "Enter radius:";
	cin >> can.radius;
	cout << "Enter length:";
	cin >> can.length;

	can.section = M_PI * can.radius;
	can.volume = can.length * can.section;
	funcoutput(can);

	return 0;
}

void funcoutput(CYLINDER can1)
{
    cout << "Radius: " << can1.radius << endl;
    cout << "Length: " << can1.length << endl;
    cout << "Section " << can1.section << endl;
    cout << "Volume: " << can1.volume << endl;
}
/*
Enter radius:5
Enter length:7
Radius: 5
Length: 7
Section 15.708
Volume: 109.956
*/
