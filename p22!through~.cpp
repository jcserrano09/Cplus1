//p22!through~.cpp
//Joseph Charles Serrano
//Started 10/2/16 Ended 10/2/16
/*
Write a program that displays the characters in the ASCII character table from ! to ~.
Display ten characters per line.
The characters are separated by exactly one space.
*/

#include <iostream>
using namespace std;

int main()
{
	int count = 0;  //the count integer
    int x = 33; //the ASCII integer starting at 33

    while (x <= 126)    // 33-126
    {
		cout << char(x) << ' ';     // display the int as a character
		count = count + 1; //characters are counted
		x = x + 1; //integer goes up by 1 until it reaches 126
		if (count == 10)    //counted up to 10 characters
        {
			cout << endl;   //ends line at 10 characters
			count = 0;  //resets
        }
    }

}

/*
! " # $ % & ' ( ) *
+ , - . / 0 1 2 3 4
5 6 7 8 9 : ; < = >
? @ A B C D E F G H
I J K L M N O P Q R
S T U V W X Y Z [ \
] ^ _ ` a b c d e f
g h i j k l m n o p
q r s t u v w x y z
{ | } ~
*/
