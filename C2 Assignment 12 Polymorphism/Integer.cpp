/*
Name: Suchi Kapur
SID: 0558322
Date: April 12, 2019
Project: Assignment 12 Polymorphism
File: Integer.cpp - This file has the class construction and
function definitions of the Integer Class.
*/

#include <iostream>
#include "Integer.h"
#include <sstream>

namespace suchi
{
	//Default & Overloaded Constructors
	Integer::Integer() : Number()
	{
		this->create();
	}

	Integer::Integer(Integer &i) : Number()
	{
		this->create();
		this->equals(*i.num);
	}

	Integer::Integer(int i) : Number()
	{
		this->create();
		this->equals(i);
	}

	Integer::Integer(string value) : Number(value)
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
		//this->num = new string;
		this->nan = new bool;
	}

	void Integer::equals(int value)
	{
		*this->num = std::to_string(value);
		*this->nan = false;
	}

	Integer& Integer::add(const Integer &i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stoi(*this->num)) + ((i).toInt()));
		return *tmp;
	}

	Integer& Integer::sub(const Integer &i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stoi(*this->num)) - ((i).toInt()));
		return *tmp;
	}

	Integer& Integer::mul(const Integer &i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stoi(*this->num)) * ((i).toInt()));
		return *tmp;
	}

	Integer& Integer::div(const Integer &i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stoi(*this->num)) / ((i).toInt()));
		return *tmp;
	}

	int Integer::toInt() const
	{
		return stoi(*this->num);
	}


	void Integer::isNaN(string value)
	{
		*this->nan = recursiveNaN(value);
	}


	bool Integer::recursiveNaN(string value)
	{
		int index = 0;
		int end = value.length() - 1;

		if (index == end)
		{
			if (!isdigit(value[index]))
			{
				return true;
			}
			return false;
		}
		else
		{
			if (!isdigit(value[index]))
			{
				return true;
			}

			return (this->recursiveNaN(value.substr(index + 1, end)) && isdigit(value[index]));
			index++;
		}
	}


	//Overloaded Functions
	Integer& Integer::add(const int i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stoi(*this->num)) + (i));
		return *tmp;
	}

	Integer& Integer::sub(const int i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stoi(*this->num)) - (i));
		return *tmp;
	}

	Integer& Integer::mul(const int i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stoi(*this->num)) * (i));
		return *tmp;
	}

	Integer& Integer::div(const int i)
	{
		Integer *tmp = new Integer;
		*(*tmp).nan = false;
		*(*tmp).num = std::to_string((stoi(*this->num)) / (i));
		return *tmp;
	}

	void Integer::equals(string value)
	{
		this->isNaN(value);
		if (!(*this->nan))
		{
			*this->num = value;
		}
		else
		{
			*this->num = "0";
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
		this->equals(std::to_string(i));
		return *this;
	}

	Integer& Integer::operator = (const string value)
	{
		this->equals(value);
		return *this;
	}

	bool Integer::operator == (const Integer &i)
	{
		return (this->toInt() == stoi(*i.num));
	}

	bool Integer::operator == (const int i)
	{
		return this->toInt() == i;
	}

	bool Integer::operator != (const Integer &i)
	{
		return this->toInt() != stoi(*i.num);
	}
}