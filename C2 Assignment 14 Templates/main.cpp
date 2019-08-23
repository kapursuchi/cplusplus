/*
Name: Suchi Kapur
SID: 0558322
Date: April 23, 2019
Project: Assignment 14 Templates
File: main.cpp - Testing the template Stack class
*/

#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	//Testing template Stack class using int
	cout << "***Testing template Stack class using int***" << endl;
	Stack <int> stInt; //holds ints

	for (int i = 0; i < 10; i++)
	{
		stInt.push(i);
	}

	try
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "Peek value BEFORE popping: " << stInt.peek() << endl;
			stInt.pop();
			cout << "Peek value AFTER popping: " << stInt.peek() << endl;
		}
	}
	catch (stackException se)
	{
		cout << se.what() << endl;
	}

	//Testing template Stack class using string
	cout << endl << "***Testing template Stack class using string***" << endl;
	Stack <string> stString; //holds strings

	stString.push("First string pushed onto stack");
	stString.push("Second string pushed onto stack");
	stString.push("Third string pushed onto stack");
	stString.push("Fourth string pushed onto stack");
	stString.push("Fifth string pushed onto stack");

	try
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Peek value BEFORE popping: " << stString.peek() << endl;
			stString.pop();
			cout << "Peek value AFTER popping: " << stString.peek() << endl;
		}
	}
	catch (stackException se)
	{
		cout << se.what() << endl;
	}

	//Testing template Stack class using double
	cout << endl << "***Testing template Stack class using double***" << endl;
	Stack <double> stDouble; //holds doubles

	double d = 0.0;
	
	for (int i = 0; i < 10; i++)
	{
		stDouble.push(d);
		d += 0.5;
	}

	try
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "Peek value BEFORE popping: " << stDouble.peek() << endl;
			stDouble.pop();
			cout << "Peek value AFTER popping: " << stDouble.peek() << endl;
		}
	}
	catch (stackException se)
	{
		cout << se.what() << endl;
	}

	//Testing template Stack class using char
	cout << endl << "***Testing template Stack class using char***" << endl;
	Stack <char> stChar; //holds chars

	for (char letter = 'a'; letter < 'f'; letter++)
	{
		stChar.push(letter);
	}

	try
	{
		for (char i = 'a'; i < 'f'; i++)
		{
			cout << "Peek value BEFORE popping: " << stChar.peek() << endl;
			stChar.pop();
			cout << "Peek value AFTER popping: " << stChar.peek() << endl;
		}
	}
	catch (stackException se)
	{
		cout << se.what() << endl;
	}

	return 0;
} 