//p70StructuresFunctionsEx2.cpp
//Joseph Charles Serrano
//Started 12/10/16 Ended 12/10/16
//Type up the example program and test it

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

void funcInput(CYLINDER *);
void funcOutput(CYLINDER);

int main()
{
    CYLINDER can;
	funcInput(&can);

	can.section = M_PI * can.radius * can.radius;
	can.volume = can.length * can.section;

	funcOutput(can);

	return 0;
}

void funcInput(CYLINDER * can1)
{
	cout << "Please enter radius:";
	cin >> can1->radius;
	cout << "Please enter length:";
	cin >> can1->length;
}

void funcOutput(CYLINDER can1)
{
	cout << "Radius: " << can1.radius << endl;
	cout << "Length: " << can1.length << endl;
	cout << "Section: " << can1.section << endl;
	cout << "Volume: " << can1.volume << endl;
}

/*
Please enter radius:5
Please enter length:7
Radius: 5
Length: 7
Section: 78.5398
Volume: 549.779
*/
