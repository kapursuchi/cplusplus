/*
Name: Suchi Kapur
SID: 0558322
Date: January 23, 2019
Project: Assignment 2 Class Construction
File: Double.cpp - This file has the class construction and
function definitions of the Double Class.
*/

#include <iostream>
#include "Double.h"


void Double::equals(double value)
{
	num = value;
}

Double Double::add(const Double &d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num += d.num;
	return tmp;
}

Double Double::sub(const Double &d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num -= d.num;
	return tmp;
}

Double Double::mul(const Double &d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num *= d.num;
	return tmp;
}

Double Double::div(const Double &d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num /= d.num;
	return tmp;
}

double Double::toDouble()
{
	return this->num;
}