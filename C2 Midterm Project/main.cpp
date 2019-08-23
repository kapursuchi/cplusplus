/*
Name: Suchi Kapur
SID: 0558322
Date: March 12, 2019
Project: Midterm Project - A Better Random Number
File: main.cpp - This file tests the Random class
*/

#include <iostream>
#include "Random.h"

using suchi::Integer;
using suchi::Double;
using std::cout;
using std::endl;

int main()
{
	//testing nextInt and nextInteger using default constructor
	cout << "-------Using Default Constructor-------" << endl;
	cout << "Testing nextInt()" << endl;
	
	//creating random object using default constructor
	Random randomInt = Random();

	//getting next random number for the length of the vector
	for (int i = 0; i < randomInt.MAX_COUNT; i++)
	{
		cout << "Next int: " << randomInt.nextInt() << endl;
	}
	
	cout << endl << "---------------------------" << endl;
	cout << endl << "Testing nextInteger()" << endl;

	//resetting range and vector
	randomInt.setRange(0, RAND_MAX);

	//getting next random number for the length of the vector
	for (int i = 0; i < randomInt.MAX_COUNT; i++)
	{
		cout << "Next Integer: " << randomInt.nextInteger().toInt() << endl;
	}
	
	
	//testing seed constructor and nextInt()
	cout << endl << "---------------------------" << endl;
	cout << endl << "-------Using seed Constructor-------" << endl;
	cout << "Testing nextInt() using seed constructor" << endl;

	//create random object using seed constructor
	int seed = 0;
	Random seededRandom(seed);

	//getting next random number for the length of the vector
	for (int i = 0; i < randomInt.MAX_COUNT; i++)
	{
		cout << "Next int: " << randomInt.nextInt() << endl;
	}


	//testing primitive double constructor and nextDbl()
	cout << endl << "---------------------------" << endl;
	cout << endl << "-------Using Primitive double Constructor-------" << endl;
	cout <<  "Testing nextDbl() using primitive double constructor" << endl;

	//create random object using primitive double constructor
	double min = 0.0;
	double max = 1.0;
	Random doubleRand(min, max);

	//getting next random number for the length of the vector
	for (int i = 0; i < doubleRand.MAX_COUNT; i++)
	{
		cout << "Next double: " << doubleRand.nextDbl() << endl;
	}
	

	//testing Double class constructor and nextDouble()
	cout << endl << "---------------------------" << endl;
	cout << endl << "-------Using Double class Constructor-------" << endl;
	cout << endl << "Testing nextDouble() using Double class constructor" << endl;

	//create random object using Double class constructor
	Double classMinDouble(1.0);
	Double classMaxDouble(2.0);
	Random classDoubleRand(classMinDouble, classMaxDouble);

	//getting next random number for the length of the vector
	for (int i = 0; i < classDoubleRand.MAX_COUNT; i++)
	{
		cout << "Next Double: " << classDoubleRand.nextDouble().toDouble() << endl;
	}
	cout << endl << "---------------------------" << endl;


	return 0;
}