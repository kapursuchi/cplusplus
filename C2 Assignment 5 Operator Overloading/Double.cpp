/*
Name: Suchi Kapur
SID: 0558322
Date: February 10, 2019
Project: Assignment 5 Operator Overloading
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
	this->num = value;
}

Double& Double::add(const Double &d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num += d.num;
	return tmp;
}

Double& Double::sub(const Double &d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num -= d.num;
	return tmp;
}

Double& Double::mul(const Double &d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num *= d.num;
	return tmp;
}

Double& Double::div(const Double &d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num /= d.num;
	return tmp;
}

double Double::toDouble() const
{
	return this->num;
}

// Overloaded Functions
Double& Double::add(const double d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num += d;
	return tmp;
}

Double& Double::sub(const double d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num -= d;
	return tmp;
}

Double& Double::mul(const double d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num *= d;
	return tmp;
}

Double& Double::div(const double d)
{
	Double tmp;
	tmp.num = this->num;
	tmp.num /= d;
	return tmp;
}

//Operator Overloading
Double& Double::operator + (const Double &d)
{
	return this->add(d);
}

Double& Double::operator - (const Double &d)
{
	return this->sub(d);
}

Double& Double::operator * (const Double &d)
{
	return this->mul(d);
}

Double& Double::operator / (const Double &d)
{
	return this->div(d);
}

Double& Double::operator = (const Double &d)
{
	this->equals(d.num);
	return *this;
}

Double& Double::operator = (const double &d)
{
	this->equals(d);
	return *this;
}

bool Double::operator == (const Double &d)
{
	return (this->toDouble() == d.num);
}

bool Double::operator == (const double d)
{
	return (this->toDouble() == d);
}

bool Double::operator != (const Double &d)
{
	return (this->toDouble() != d.num);
}




