/*
Name: Suchi Kapur
SID: 0558322
Date: February 2, 2019
Project: Assignment 4 Using Complex Types - Vectors
File: Double.cpp - This file has the class construction and
function definitions of the Double Class.
*/

#include <iostream>
#include "Double.h"
#include "Integer.h"

// Default + Overloaded Constructors
Double::Double()
{
	this->equals(0.0);
}

Double::Double(Double &d)
{
	this->equals(d.num);
}

Double::Double(double d)
{
	this->equals(d);
}

Double::Double(Integer &i)
{
	this->equals(i.toInt());
}

// Functions
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

// Overloaded Functions
Double Double::add(double d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num += d;
	return tmp;
}

Double Double::sub(double d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num -= d;
	return tmp;
}

Double Double::mul(double d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num *= d;
	return tmp;
}

Double Double::div(double d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num /= d;
	return tmp;
}
