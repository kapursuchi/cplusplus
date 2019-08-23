/*
Name: Suchi Kapur
SID: 0558322
Date: February 16, 2019
Project: Assignment 6 More Complex Types
File: Integer.h - This file has the class construction and
prototypes of the Integer Class.
*/

#ifndef INTEGER
#define INTEGER

#include <string>

using std::string;
using std::stringstream;

class Integer
{
private:

	int num;
	bool nan;
	void isNaN(const string value);

public:

	//Functions
	void equals(int value);
	Integer& add(const Integer &i);
	Integer& sub(const Integer &i);
	Integer& mul(const Integer &i);
	Integer& div(const Integer &i);
	int toInt() const;
	string toString() const;
	bool isNaN() const;
	

	//Overloaded functions
	Integer& add(const int i);
	Integer& sub(const int i);
	Integer& mul(const int i);
	Integer& div(const int i);
	void equals(string value);

	//Operator Overloads
	Integer& operator + (const Integer &i);
	Integer& operator - (const Integer &i);
	Integer& operator * (const Integer &i);
	Integer& operator / (const Integer &i);
	Integer& operator = (const Integer &i);
	Integer& operator = (const int i); //primitive
	Integer& operator = (const string value); //string
	bool operator == (const Integer &i);
	bool operator == (const int i); //primitive
	bool operator != (const Integer &i);

	//Constructors
	Integer(); //default
	Integer(Integer &i); //Integer class
	Integer(int i); //Primitive int
	Integer(string value); //string
};

#endif