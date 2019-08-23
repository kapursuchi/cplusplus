/*
Name: Suchi Kapur
SID: 0558322
Date: April 12, 2019
Project: Assignment 12 Polymorphism
File: Number.cpp - This file has the function definitions of the Number Class.
*/

#include "Number.h"
#include <string>

using std::string;

namespace suchi
{
	Number::Number()
	{
		*this->num = "0";
	}

	Number::Number(string value)
	{
		*this->num = value;
	}

	string Number::toString()
	{
		return *this->num;
	}

	bool Number::isNaN()
	{
		return *this->nan;
	}

}
