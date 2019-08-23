/*
Name: Suchi Kapur
SID: 0558322
Date: April 12, 2019
Project: Assignment 12 Polymorphism
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
		string *num = new string;
		bool *nan;
		virtual void isNaN(string value) = 0;
		virtual bool recursiveNaN(string value) = 0;

	public:
		//Constructors
		Number(); //no argument constructor that sets the data section to "0"
		Number(string value); //overloaded constructor that sets the data section to the string passed

		// functions
		virtual string toString();
		bool isNaN();

		

		
	};
}

#endif