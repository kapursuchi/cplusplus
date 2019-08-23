/*
Name: Suchi Kapur
SID: 0558322
Date: April 4, 2019
Project: Assignment 11 Inheritance
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
}
