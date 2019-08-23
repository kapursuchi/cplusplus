/*
Name: Suchi Kapur
SID: 0558322
Date: March 12, 2019
Project: Midterm Project - A Better Random Number
File: Random.cpp - This file has the class definitions and 
					function definitions of the Random class
*/

#include "Random.h"
#include <ctime>
#include <iostream>

using suchi::Integer;
using suchi::Double;
using std::cout;
using std::endl;
using std::srand;

//constructors
Random::Random()
{
	srand((unsigned int)time(0));
	this->fillVect(0, RAND_MAX);
}

Random::Random(double min, double max)
{
	srand((unsigned int)time(0));
	this->fillVect(min, max);
}

Random::Random(Double min, Double max)
{
	srand((unsigned int)time(0));
	this->fillVect(min.toDouble(), max.toDouble());
}

Random::Random(int seed)
{
	srand(seed);
	this->fillVect(0, RAND_MAX);
}

//private functions
void Random::fillVect(double min, double max)
{
	this->randomNumbers.clear();
	this->randomNumbers.resize(MAX_COUNT);
	
	for (int index = 0; index < MAX_COUNT; index++)
	{
		double random = (((double) rand() / (double) RAND_MAX) * (max - min)) + min;
		this->randomNumbers[index] = random;
	}

	this->shuffle();
}

void Random::shuffle()
{
	srand((unsigned int)time(0));

	for (int i = 0; i < MAX_COUNT; i++)
	{
		int randomIndex = rand() % MAX_COUNT;

		double tempVar = this->randomNumbers[i];
		this->randomNumbers[i] = this->randomNumbers[randomIndex];
		this->randomNumbers[randomIndex] = tempVar;

	}
}

//public functions
int Random::nextInt()
{
	//returns the next random number as an int

	int returnVal = this->randomNumbers[index];
	if (index < NINETY_PERCENT)
	{
		index++;
	}
	else
	{
		this->shuffle();
		index = 0;
		returnVal = this->randomNumbers[index];

	}
	
	return returnVal;
}

Integer Random::nextInteger()
{
	//returns the next random number as an Integer class

	int randomInt = this->nextInt();
	Integer tmp(randomInt);
	return tmp;
}

double Random::nextDbl()
{
	//returns the next random number as a primitive double

	double returnVal = this->randomNumbers[index];
	if (index < NINETY_PERCENT)
	{
		index++;
	}
	else
	{
		this->shuffle();
		index = 0;
		returnVal = this->randomNumbers[index];

	}

	return returnVal;
}


Double Random::nextDouble()
{
	//returns the next random number as a Double class

	double randomDouble = this->nextDbl();
	Double tmp(randomDouble);
	return tmp;
}


void Random::setRange(double min, double max)
{
	//set range and recreates random numbers

	this->randomNumbers.clear();
	this->fillVect(min, max);
}

void Random::setRange(Double min, Double max)
{
	//set range and recreate random numbers using Double class

	this->setRange(min.toDouble(), max.toDouble());
}
