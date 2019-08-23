/*
Name: Suchi Kapur
SID: 0558322
Date: February 23, 2019
Project: Assignment 7 Dynamic Memory
File: Double.h - This file has the class construction and
prototypes of the Double Class.
*/

#ifndef DOUBLE
#define DOUBLE

#include "Integer.h"
#include <string>

using std::string;
using std::stringstream;

class Double
{
private:

	double *num;
	bool *nan;
	void isNaN(const string value);

public:

	//Functions
	void create();
	void equals(double value);
	Double& add(const Double &d);
	Double& sub(const Double &d);
	Double& mul(const Double &d);
	Double& div(const Double &d);
	double toDouble() const;
	string toString() const;
	bool isNaN() const;

	//Overloaded Functions
	Double& add(const double d);
	Double& sub(const double d);
	Double& mul(const double d);
	Double& div(const double d);
	void equals(string value);

	//Operator Overloads
	Double& operator + (const Double &d);
	Double& operator - (const Double &d);
	Double& operator * (const Double &d);
	Double& operator / (const Double &d);
	Double& operator = (const Double &d);
	Double& operator = (const double &d); //primitive
	Double& operator = (const string value); //string
	bool operator == (const Double &d);
	bool operator == (const double d); //primitive
	bool operator != (const Double &d);

	//Constructors
	Double(); //default
	Double(Double &d); //Double argument
	Double(double d); //Primitive double
	Double(Integer &i); //Integer class
	Double(string value); //string

	//Deconstructor
	~Double();

};

#endif