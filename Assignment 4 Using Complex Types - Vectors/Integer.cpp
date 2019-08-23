/*
Name: Suchi Kapur
SID: 0558322
Date: February 2, 2019
Project: Assignment 4 Using Complex Types - Vectors
File: Integer.cpp - This file has the class construction and
function definitions of the Integer Class.
*/

#include <iostream>
#include "Integer.h"

// Default + Overloaded Constructors
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
	num = value;
}

// Functions
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

// Overloaded Functions
Integer Integer::add(int i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num += i;
	return tmp;
}

Integer Integer::sub(int i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num -= i;
	return tmp;
}

Integer Integer::mul(int i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num *= i;
	return tmp;
}

Integer Integer::div(int i)
{
	Integer tmp;
	tmp.num = this->num;
	tmp.num /= i;
	return tmp;
}