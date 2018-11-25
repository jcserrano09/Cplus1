//p71ClassExample.cpp
//Joseph Charles Serrano
//Started 12/10/16 Ended 12/10/16
//Type up the example program then test it out

#include <iostream>
#include <stdlib.h>
using namespace std;

class DayofYear
{
	public:
			void output();
			int month;
			int day;
};

void DayofYear::output()
{
	cout << "Month = " << month <<", day = " << day <<"\n\n";
}

int main()
{
	DayofYear today, birthday;

	cout << "Enter today's date. ";
	cout << "Enter month as a number:";
	cin >> today.month;
	cout << "Enter the day of the month:";
	cin >> today.day;

	cout << "Today's Date:\n";
	today.output();

	cout << "Enter your birthday. ";
	cout << "Enter month as a number:";
	cin >> birthday.month;
	cout << "enter the day of the month:";
	cin >> birthday.day;

	cout << "Your birthday is:\n";
	birthday.output();

	if (today.month == birthday.month && today.day == birthday.day)
		cout << "Happy Birthday!\n\n";
	else
		cout << "Happy Unbirthday!\n\n";

	system("pause");
	return 0;
}

/*
Enter today's date. Enter month as a number:12
Enter the day of the month:10
Today's Date:
Month = 12, day = 10

Enter your birthday. Enter month as a number:9
enter the day of the month:24
Your birthday is:
Month = 9, day = 24

Happy Unbirthday!

*/
