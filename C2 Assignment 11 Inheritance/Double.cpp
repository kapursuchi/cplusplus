/*
Name: Suchi Kapur
SID: 0558322
Date: April 4, 2019
Project: Assignment 11 Inheritance
File: Double.cpp - This file has the class construction and
function definitions of the Double Class.
*/

#include <iostream>
#include <sstream>
#include <cstdlib>
#include "Double.h"
#include "Integer.h"

namespace suchi
{
	//Default + Overloaded Constructors
	Double::Double() : Number()
	{
		this->create();
		
	}

	Double::Double(Double &d)
	{
		this->create();
		this->equals(*d.num);
	}

	Double::Double(double d)
	{
		this->create();
		this->equals(d);
	}

	Double::Double(Integer &i)
	{
		this->create();
		this->equals(i.toInt());
	}

	Double::Double(string value) : Number(value)
	{
		this->create();
		this->equals(value);
	}

	//Deconstructor
	Double::~Double()
	{
		delete this->num;
		delete this->nan;
	}

	// Functions
	void Double::equals(double value)
	{
		*this->num = std::to_string(value);
		*this->nan = false;
	}

	void Double::create()
	{
		this->nan = new bool;
	}

	Double& Double::add(const Double &d)
	{
		Double *tmp = new Double;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stod(*this->num)) + ((d).toDouble()));
		return *tmp;
	}

	Double& Double::sub(const Double &d)
	{
		Double *tmp = new Double;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stod(*this->num)) - ((d).toDouble()));
		return *tmp;
	}

	Double& Double::mul(const Double &d)
	{
		Double *tmp = new Double;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stod(*this->num)) * ((d).toDouble()));
		return *tmp;
	}

	Double& Double::div(const Double &d)
	{
		Double *tmp = new Double;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stod(*this->num)) / ((d).toDouble()));
		return *tmp;
	}

	double Double::toDouble() const
	{
		return stod(*this->num);
	}

	string Double::toString() const
	{
		return *this->num;
	}

	void Double::isNaN(const string value)
	{
		int numOfDecimals = 0;
		*this->nan = recursiveNan(value, numOfDecimals);

	}

	bool Double::recursiveNan(const string value, int &numOfDecimals)
	{
		int index = 0;
		int end = value.length() - 1;
		if (index == end)
		{
			if (value[index] == '.')
			{
				numOfDecimals++;

				if (numOfDecimals > 1)
				{
					return true;
				}
			}

			if (!isdigit(value[index]))
			{
				return true;

			}
			return false;
		}
		else
		{
			if (value[index] == '.')
			{
				numOfDecimals++;
			}

			if ((!isdigit(value[index]) && value[index] != '.') || numOfDecimals > 1)
			{
				return true;
			}

			return (recursiveNan(value.substr(index + 1, end), numOfDecimals));

			index++;
		}
	}

	bool Double::isNaN() const
	{
		return *this->nan;
	}

	// Overloaded Functions
	Double& Double::add(const double d)
	{
		Double *tmp = new Double;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stod(*this->num)) + (d));
		return *tmp;
	}

	Double& Double::sub(const double d)
	{
		Double *tmp = new Double;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stod(*this->num)) - (d));
		return *tmp;
	}

	Double& Double::mul(const double d)
	{
		Double *tmp = new Double;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stod(*this->num)) * (d));
		return *tmp;
	}

	Double& Double::div(const double d)
	{
		Double *tmp = new Double;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stod(*this->num)) / (d));
		return *tmp;
	}

	void Double::equals(string value)
	{
		this->isNaN(value);
		if (!this->isNaN())
		{
			*this->num = value;
		}
		else
		{
			*this->num = 0.0;
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
		this->equals(*d.num);
		return *this;
	}

	Double& Double::operator = (const double &d)
	{
		this->equals(std::to_string(d));
		return *this;
	}

	Double& Double::operator = (const string value)
	{
		this->equals(value);
		return *this;
	}

	bool Double::operator == (const Double &d)
	{
		return (this->toDouble() == stod(*d.num));
	}

	bool Double::operator == (const double d)
	{
		return (this->toDouble() == d);
	}

	bool Double::operator != (const Double &d)
	{
		return (this->toDouble() != stod(*d.num));
	}
}