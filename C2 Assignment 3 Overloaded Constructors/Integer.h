/*
Name: Suchi Kapur
SID: 0558322
Date: January 27, 2019
Project: Assignment 3 Overloaded Constructors
File: Integer.h - This file has the class construction and
prototypes of the Integer Class.
*/

#ifndef INTEGER
#define INTEGER

class Integer
{
private:

	int num;

public:

	//Functions
	void equals(int value);
	Integer add(const Integer &i);
	Integer sub(const Integer &i);
	Integer mul(const Integer &i);
	Integer div(const Integer &i);
	int toInt();

	//Overloaded functions
	Integer add(int i);
	Integer sub(int i);
	Integer mul(int i);
	Integer div(int i);

	//Constructors
	Integer(); //default
	Integer(Integer &i); //Integer class
	Integer(int i); //Primitive int
};

#endif