/*
Name: Suchi Kapur
SID: 0558322
Date: February 16, 2019
Project: Assignment 6 More Complex Types
File: Double.cpp - This file has the class construction and
function definitions of the Double Class.
*/

#include <iostream>
#include <sstream>
#include <cstdlib>
#include "Double.h"
#include "Integer.h"

//Default + Overloaded Constructors
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

Double::Double(string value)
{
	this->equals(value);
}

// Functions
void Double::equals(double value)
{
	this->num = value;
	this->nan = false;
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

string Double::toString() const
{
	stringstream ss;
	ss << this->num;
	string doubleToStr = ss.str();
	return doubleToStr;
}

void Double::isNaN(const string value)
{
	bool notValidNum = false;
	int numOfDecimals = 0;
	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] == '.')
		{
			numOfDecimals++;
			if (numOfDecimals > 1)
			{
				notValidNum = true;
			}
		}

		//if not valid, set nan to true
		if (!isdigit(value[i]) && value[i] != '.')
		{
			notValidNum = true;
		}
	}
	this->nan = notValidNum;

}

bool Double::isNaN() const
{
	return this->nan;
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

void Double::equals(string value)
{
	this->isNaN(value);
	if (!this->isNaN())
	{
		this->num = stod(value);
	}
	else
	{
		this->num = 0.0;
	}
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

Double& Double::operator = (const string value)
{
	this->equals(value);
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
