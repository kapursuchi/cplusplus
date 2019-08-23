/*
Name: Suchi Kapur
SID: 0558322
Date: January 23, 2019
Project: Assignment 2 Class Construction
File: Double.h - This file has the class construction and
prototypes of the Double Class.
*/

#ifndef DOUBLE
#define DOUBLE

class Double
{
private:
	double num;
public:
	void equals(double value);
	Double add(const Double &d);
	Double sub(const Double &d);
	Double mul(const Double &d);
	Double div(const Double &d);
	double toDouble();
};

#endif