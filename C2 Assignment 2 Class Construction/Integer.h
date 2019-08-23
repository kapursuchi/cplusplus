/*
Name: Suchi Kapur
SID: 0558322
Date: January 23, 2019
Project: Assignment 2 Class Construction
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
	void equals(int value);
	Integer add(const Integer &i);
	Integer sub(const Integer &i);
	Integer mul(const Integer &i);
	Integer div(const Integer &i);
	int toInt();
};

#endif