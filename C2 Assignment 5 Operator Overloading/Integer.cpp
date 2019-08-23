/*
Name: Suchi Kapur
SID: 0558322
Date: February 10, 2019
Project: Assignment 5 Operator Overloading
File: Integer.cpp - This file has the class construction and
function definitions of the Integer Class.
*/

#include <iostream>
#include "Integer.h"

//Default + Overloaded Constructors
Integer::Integer()
{
	this->equals(0);
}

Integer::Integer(Integer &i)
{
	this->equals(i.num);
}

Integer::Integer(int i)
{
	this->equals(i);
}

void Integer::equals(int value)
{
	this->num = value;
}

//Functions
Integer& Integer::add(const Integer &i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num += i.num;
	return tmp;
}

Integer& Integer::sub(const Integer &i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num -= i.num;
	return tmp;
}

Integer& Integer::mul(const Integer &i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num *= i.num;
	return tmp;
}

Integer& Integer::div(const Integer &i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num /= i.num;
	return tmp;
}

int Integer::toInt() const
{
	return this->num;
}

//Overloaded Functions
Integer& Integer::add(const int i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num += i;
	return tmp;
}

Integer& Integer::sub(const int i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num -= i;
	return tmp;
}

Integer& Integer::mul(const int i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num *= i;
	return tmp;
}

Integer& Integer::div(const int i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num /= i;
	return tmp;
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
	this->equals(i.num);
	return *this;
}

Integer& Integer::operator = (const int i)
{
	this->equals(i);
	return *this;
}

bool Integer::operator == (const Integer &i)
{
	return (this->toInt() == i.num);
}

bool Integer::operator == (const int i)
{
	return this->toInt() == i;
}

bool Integer::operator != (const Integer &i)
{
	return this->toInt() != i.num;
}



