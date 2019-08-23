/*
Name: Suchi Kapur
SID: 0558322
Date: March 1, 2019
Project: Assignment 8 Namespaces & Static Variables
File: Integer.cpp - This file has the class construction and
function definitions of the Integer Class.
*/

#include <iostream>
#include "Integer.h"
#include <sstream>

namespace suchi
{
	//Default & Overloaded Constructors
	Integer::Integer()
	{
		this->create();
		this->equals(0);
	}

	Integer::Integer(Integer &i)
	{
		this->create();
		this->equals(*i.num);
	}

	Integer::Integer(int i)
	{
		this->create();
		this->equals(i);
	}

	Integer::Integer(string value)
	{
		this->create();
		this->equals(value);
	}

	//Deconstructor
	Integer::~Integer()
	{
		delete this->num;
		delete this->nan;
	}

	//Functions
	void Integer::create()
	{
		this->num = new int;
		this->nan = new bool;
	}
	void Integer::equals(int value)
	{
		*this->num = value;
		*this->nan = false;
	}

	Integer& Integer::add(const Integer &i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = *this->num;
		*(*tmp).num += *i.num;
		return *tmp;
	}

	Integer& Integer::sub(const Integer &i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = *this->num;
		*(*tmp).num -= *i.num;
		return *tmp;
	}

	Integer& Integer::mul(const Integer &i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = *this->num;
		*(*tmp).num *= *i.num;
		return *tmp;
	}

	Integer& Integer::div(const Integer &i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = *this->num;
		*(*tmp).num /= *i.num;
		return *tmp;
	}

	int Integer::toInt() const
	{
		return *this->num;
	}

	string Integer::toString() const
	{
		stringstream ss;
		ss << *this->num;
		string intToStr = ss.str();
		return intToStr;
	}

	void Integer::isNaN(const string value)
	{
		bool notValidNum = false;
		for (int i = 0; i < value.length(); i++)
		{
			//if not valid, set nan to true
			if (!isdigit(value[i]))
			{
				notValidNum = true;
			}
		}
		*this->nan = notValidNum;

	}

	bool Integer::isNaN() const
	{
		return *this->nan;
	}

	//Overloaded Functions
	Integer& Integer::add(const int i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = *this->num;
		*(*tmp).num += i;
		return *tmp;
	}

	Integer& Integer::sub(const int i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = *this->num;
		*(*tmp).num -= i;
		return *tmp;
	}

	Integer& Integer::mul(const int i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = *this->num;
		*(*tmp).num *= i;
		return *tmp;
	}

	Integer& Integer::div(const int i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = *this->num;
		*(*tmp).num /= i;
		return *tmp;
	}

	void Integer::equals(string value)
	{
		this->isNaN(value);
		if (!this->isNaN())
		{
			*this->num = stoi(value);
		}
		else
		{
			*this->num = 0;
		}

	}

	//Operator Overloads
	Integer& Integer::operator + (const Integer &i)
	{
		return this->add(i);
	}

	Integer& Integer::operator - (const Integer &i)
	{
		return this->sub(i);
	}

	Integer& Integer::operator * (const Integer &i)
	{
		return this->mul(i);
	}

	Integer& Integer::operator / (const Integer &i)
	{
		return this->div(i);
	}

	Integer& Integer::operator = (const Integer &i)
	{
		this->equals(*i.num);
		return *this;
	}

	Integer& Integer::operator = (const int i)
	{
		this->equals(i);
		return *this;
	}

	Integer& Integer::operator = (const string value)
	{
		this->equals(value);
		return *this;
	}

	bool Integer::operator == (const Integer &i)
	{
		return (this->toInt() == *i.num);
	}

	bool Integer::operator == (const int i)
	{
		return this->toInt() == i;
	}

	bool Integer::operator != (const Integer &i)
	{
		return this->toInt() != *i.num;
	}
}