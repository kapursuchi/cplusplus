/*
Name: Suchi Kapur
SID: 0558322
Date: January 27, 2019
Project: Assignment 3 Overloaded Constructors
File: Double.h - This file has the class construction and
prototypes of the Double Class.
*/

#ifndef DOUBLE
#define DOUBLE

#include "Integer.h"

class Double
{
private:

	double num;

public:

	//Functions
	void equals(double value);
	Double add(const Double &d);
	Double sub(const Double &d);
	Double mul(const Double &d);
	Double div(const Double &d);
	double toDouble();

	//Overloaded Functions
	Double add(double d);
	Double sub(double d);
	Double mul(double d);
	Double div(double d);

	//Constructors
	Double(); //default
	Double(Double &d); //Double argument
	Double(double d); //Primitive double
	Double(Integer &i); //Integer class

};

#endif