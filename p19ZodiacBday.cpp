//p19ZodiacBday.cpp
// Joseph Charles Serrano
//Started 9/25/16 Ended 9/25/16
/*
Write a program that asks the user for day and month of a birthday.
The program then tells the Zodiac signs that will be compatible with that birthday.
*/

#include <iostream>
using namespace std;

int main()
{
	int Month;
	int Day;


    cout << "Please enter your month of birth(1-12): ";
	cin >> Month;

	cout << "Please enter your day of birth: ";
	cin >> Day;

	// Aries
	if(Month == 3 && Day >= 21 && Day <= 31 || Month == 4 && Day >= 1 && Day <=19)
	{
		cout << "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Aries\n";
		cout << "You're compatible with Aries, Leo, and Sagittarius";           //Compatibility Output
	}

	//Taurus
	if(Month == 4 && Day >= 20 && Day <= 31 || Month == 5 && Day >= 1 && Day <=20)
	{
		cout << "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Taurus\n";
		cout << "You're compatible with Taurus, Virgo, and Capricorn";      //Compatibility Output
	}

	//Gemini
	if(Month == 5 && Day >= 21 && Day <= 31 || Month == 6 && Day >= 1 && Day <=21)
	{
		cout << "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Gemini\n";
		cout << "You're compatible with Gemini, Libra, and Aquarius";       //Compatibility Output
	}

	//Cancer
	if(Month == 6 && Day >= 22 && Day <= 31 || Month == 7 && Day >= 1 && Day <=22)
	{
		cout << "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Cancer\n";
		cout << "You're compatible with Cancer, Scorpio, Pisces";       //Compatibility Output
	}

	//Leo
	if(Month == 7 && Day >= 23 && Day <= 31 || Month == 8 && Day >= 1 && Day <=22)
	{
		cout << "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Leo\n";
		cout << "You're compatible with Leo, Aries, and Sagittarius";       //Compatibility Output
	}

	//Virgo
	if(Month == 8 && Day >= 23 && Day <= 31 || Month == 9 && Day >= 1 && Day <=22)
	{
		cout<< "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Virgo\n";
		cout << "You're compatible with Virgo, Taurus, Capricorn";      //Compatibility Output
	}

	//Libra
	if(Month == 9 && Day >= 23 && Day <= 31 || Month == 10 && Day >= 1 && Day <=23)
	{
		cout<< "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Libra\n";
		cout << "You're compatible with Libra, Gemini, Aquarius";       //Compatibility Output
	}

	//Scorpio
	if(Month == 10 && Day >= 24 && Day <= 31 || Month == 11 && Day >= 1 && Day <=21)
	{
		cout<< "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Scorpio\n";
		cout << "You're compatible with Scorpio, Cancer, and, Pisces";      //Compatibility Output
	}

	//Sagittarius
	if(Month == 11 && Day >= 22 && Day <= 31 || Month == 12 && Day >= 1 && Day <=21)
	{
		cout<< "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Sagittarius\n";
		cout << "You're compatible with Sagittarius, Leo, Aries";       //Compatibility Output
	}

	//Capricorn
	if(Month == 12 && Day >= 22 && Day <= 31 || Month == 1 && Day >= 1 && Day <=19)
	{
		cout<< "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Capricorn\n";
		cout << "You're compatible with Capricorn, Virgo, Taurus";      //Compatibility Output
	}

	//Aquarius
	if(Month == 1 && Day >= 19 && Day <= 31 || Month == 2 && Day >= 1 && Day <=18)
	{
		cout<< "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Aquarius\n";
		cout << "You're compatible with Aquarius, Libra, Gemini";       //Compatibility Output
	}

	//Pisces
	if(Month == 2 && Day >= 21 && Day <= 31 || Month == 3 && Day >= 1 && Day <=20)
	{
		cout << "A birthday of " <<Month<< "/" <<Day<< " had the zodiac Pisces\n";
		cout << "You're compatible with Pisces, Cancer, and Scorpio";       //Compatibility Output
	}


}

/*
Please enter your month of birth(1-12): 9
Please enter your day of birth: 24
A birthday of 9/24 had the zodiac Libra
You're compatible with Libra, Gemini, Aquarius

Please enter your month of birth(1-12): 4
Please enter your day of birth: 16
A birthday of 4/16 had the zodiac Aries
You're compatible with Aries, Leo, and Sagittarius
*/


