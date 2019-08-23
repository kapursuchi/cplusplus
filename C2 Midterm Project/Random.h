/*
Name: Suchi Kapur
SID: 0558322
Date: March 12, 2019
Project: Midterm Project - A Better Random Number
File: Random.h - This file has the class construction and prototypes of 
				the Random class
*/

#ifndef RANDOM
#define RANDOM

#include "Double.h"
#include "Integer.h"
#include <vector>

using suchi::Integer;
using suchi::Double;
using std::vector;


class Random
{

private:

	//data section
	vector <double> randomNumbers;
	int index = 0;

	//private functions
	void fillVect(double min, double max);
	void shuffle();

public:
	//constants
	const int MAX_COUNT = 250;
	const int NINETY_PERCENT = .9 * MAX_COUNT;

	//constructors
	Random(); //default constructor
	Random(double min, double max); //generates random numbers btwn min & max
	Random(Double min, Double max); //generates random numbers btwn min & max using class Double
	Random(int seed); //seed the random number generator

	//functions
	int nextInt(); //returns the next random number as an int
	Integer nextInteger(); //returns the next random number as an Integer class
	double nextDbl(); //returns the next random number as a primitive double
	Double nextDouble(); //returns the next random number as a Double class
	void setRange(double min, double max); //set range and recreates random numbers
	void setRange(Double min, Double max); //set range and recreate random numbers using Double class

};


#endif