/*
Name: Suchi Kapur
SID: 0558322
Date: April 4, 2019
Project: Assignment 11 Inheritance
File: Number.h - This file has the class construction and
prototypes of the Number Class.
*/

#ifndef NUMBER
#define NUMBER

#include <string>


using std::string;

namespace suchi
{
	class Number : protected string
	{
	protected:
		string * num = new string;

	public:
		//Constructors
		Number(); //no argument constructor that sets the data section to "0"
		Number(string value); //overloaded constructor that sets the data section to the string passed
	};
}

#endif