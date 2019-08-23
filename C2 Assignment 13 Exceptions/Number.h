/*
Name: Suchi Kapur
SID: 0558322
Date: April 17, 2019
Project: Assignment 13 Exceptions
File: Number.h - This file has the class construction and
prototypes of the Number Class.
*/

#ifndef NUMBER
#define NUMBER

#include <exception>
#include <string>


using std::string;
using std::exception;

namespace suchi
{

	class NumberException : public exception
	{
	private:

		//data section
		int code;
		string msg;

	public:

		//constructors
		NumberException() : code(-1), msg("Unknown") {} //Default constructor
		NumberException(string message) : code(-1), msg(message) {}//overloaded constructor
		NumberException(string message, int num) : code(num), msg(message) {}//overloaded constructor


		//functions
		string getMessage() { return msg; };
		int getCode() { return code; };

	};


	class Number : public string
	{
	protected:
		string * num = new string;
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