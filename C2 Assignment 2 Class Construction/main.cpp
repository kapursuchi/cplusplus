/*
Name: Suchi Kapur
SID: 0558322
Date: January 23, 2019
Project: Assignment 2 Class Construction
File: main.cpp - This file tests the functions of both the Integer
	  and Double classes.
*/

#include <iostream>
#include "Double.h"
#include "Integer.h"
#include <iomanip>

using namespace std;

int main()
{
	// creating instances of Integer class
	Integer intOne;
	Integer intTwo;

	// result variable to output
	int result;
	

	// testing Integer functions: equals() and toInt()
	cout << "--- TESTING INTEGER FUNCTIONS: equals() and toInt()---" << endl;
	
	intOne.equals(5);
	result = intOne.toInt();
	cout << "The value of intOne is: " << result << endl;
	
	intTwo.equals(3);
	result = intTwo.toInt();
	cout << "The value of intTwo is: " << result << endl;


	// testing Integer functions: add, sub, mul, div
	cout << endl << "---------- TESTING INTEGER FUNCTIONS: add() ----------" << endl;
	Integer intThree;
	intThree = intOne.add(intTwo);
	result = intThree.toInt();
	cout << "The value of intOne + intTwo is: " << result << endl;
	
	cout << endl << "---------- TESTING INTEGER FUNCTIONS: sub() ----------" << endl;
	intThree = intOne.sub(intTwo);
	result = intThree.toInt();
	cout << "The value of intOne - intTwo is: " << result << endl;

	cout << endl << "---------- TESTING INTEGER FUNCTIONS: mul() ----------" << endl;
	intThree = intOne.mul(intTwo);
	result = intThree.toInt();
	cout << "The value of intOne * intTwo is: " << result << endl;

	cout << endl << "---------- TESTING INTEGER FUNCTIONS: div() ----------" << endl;
	intThree = intOne.div(intTwo);
	result = intThree.toInt();
	cout << "The value of intOne / intTwo is: " << result << endl;


	// Begin Testing Double Class
	// creating instances of Double class
	Double doubleOne;
	Double doubleTwo;

	// variable to output
	double output;

	// testing Double functions: equals() and toInt()
	cout << endl << "--- TESTING DOUBLE FUNCTIONS: equals() and toInt()---" << endl;
	
	doubleOne.equals(12.34);
	output = doubleOne.toDouble();
	cout << "The value of doubleOne is: " << output << endl;

	doubleTwo.equals(1.56);
	output = doubleTwo.toDouble();
	cout << "The value of doubleTwo is: " << output << endl;


	// testing Double functions: add, sub, mul, div
	cout << endl << "---------- TESTING DOUBLE FUNCTIONS: add() ----------" << endl;
	Double doubleThree;
	doubleThree = doubleOne.add(doubleTwo);
	output = doubleThree.toDouble();
	cout << fixed << setprecision(2); //show 2 decimal places
	cout << "The value of doubleOne + doubleTwo is: " << output << endl;
	
	cout << endl << "---------- TESTING DOUBLE FUNCTIONS: sub() ----------" << endl;
	doubleThree = doubleOne.sub(doubleTwo);
	output = doubleThree.toDouble();
	cout << "The value of doubleOne - doubleTwo is: " << output << endl;

	cout << endl << "---------- TESTING DOUBLE FUNCTIONS: mul() ----------" << endl;
	doubleThree = doubleOne.mul(doubleTwo);
	output = doubleThree.toDouble();
	cout << "The value of doubleOne * doubleTwo is: " << output << endl;

	cout << endl << "---------- TESTING DOUBLE FUNCTIONS: div() ----------" << endl;
	doubleThree = doubleOne.div(doubleTwo);
	output = doubleThree.toDouble();
	cout << "The value of doubleOne / doubleTwo is: " << output << endl;


	return 0;
}