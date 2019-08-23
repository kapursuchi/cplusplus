/*
Name: Suchi Kapur
SID: 0558322
Date: January 23, 2019
Project: Assignment 2 Class Construction
File: Integer.cpp - This file has the class construction and
function definitions of the Integer Class.
*/

#include <iostream>
#include "Integer.h"


void Integer::equals(int value)
{
	num = value;
}

Integer Integer::add(const Integer &i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num += i.num;
	return tmp;
}

Integer Integer::sub(const Integer &i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num -= i.num;
	return tmp;
}

Integer Integer::mul(const Integer &i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num *= i.num;
	return tmp;
}

Integer Integer::div(const Integer &i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num /= i.num;
	return tmp;
}

int Integer::toInt()
{
	return this->num;
}