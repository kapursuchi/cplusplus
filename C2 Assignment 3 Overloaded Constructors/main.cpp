/*
Name: Suchi Kapur
SID: 0558322
Date: January 27, 2019
Project: Assignment 3 Overloaded Constructors
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
	cout << "**************************************************" << endl;
	cout << "***************ASSIGNMENT 2 TESTING***************" << endl;
	cout << "**************************************************" << endl << endl;
	
	// creating instances of Integer class
	Integer intOne;
	Integer intTwo;

	// testing Integer functions: equals() and toInt()
	cout << "--- TESTING INTEGER FUNCTIONS: equals() and toInt()---" << endl;

	intOne.equals(5);
	cout << "The value of intOne is: " << intOne.toInt() << endl;

	intTwo.equals(3);
	cout << "The value of intTwo is: " << intTwo.toInt() << endl;


	// testing Integer functions: add, sub, mul, div
	cout << endl << "---------- TESTING INTEGER FUNCTIONS: add() ----------" << endl;
	Integer intThree;
	intThree = intOne.add(intTwo);
	cout << "The value of intOne + intTwo is: " << intThree.toInt() << endl;

	cout << endl << "---------- TESTING INTEGER FUNCTIONS: sub() ----------" << endl;
	intThree = intOne.sub(intTwo);
	cout << "The value of intOne - intTwo is: " << intThree.toInt() << endl;

	cout << endl << "---------- TESTING INTEGER FUNCTIONS: mul() ----------" << endl;
	intThree = intOne.mul(intTwo);
	cout << "The value of intOne * intTwo is: " << intThree.toInt() << endl;

	cout << endl << "---------- TESTING INTEGER FUNCTIONS: div() ----------" << endl;
	intThree = intOne.div(intTwo);
	cout << "The value of intOne / intTwo is: " << intThree.toInt() << endl;


	// Begin Testing Double Class
	// creating instances of Double class
	Double doubleOne;
	Double doubleTwo;


	// testing Double functions: equals() and toInt()
	cout << endl << "--- TESTING DOUBLE FUNCTIONS: equals() and toInt()---" << endl;

	cout << fixed << setprecision(2); //show 2 decimal places

	doubleOne.equals(12.34);
	cout << "The value of doubleOne is: " << doubleOne.toDouble() << endl;

	doubleTwo.equals(1.56);
	cout << "The value of doubleTwo is: " << doubleTwo.toDouble() << endl;


	// testing Double functions: add, sub, mul, div
	cout << endl << "---------- TESTING DOUBLE FUNCTIONS: add() ----------" << endl;
	Double doubleThree;
	doubleThree = doubleOne.add(doubleTwo);
	cout << "The value of doubleOne + doubleTwo is: " << doubleThree.toDouble() << endl;

	cout << endl << "---------- TESTING DOUBLE FUNCTIONS: sub() ----------" << endl;
	doubleThree = doubleOne.sub(doubleTwo);
	cout << "The value of doubleOne - doubleTwo is: " << doubleThree.toDouble() << endl;

	cout << endl << "---------- TESTING DOUBLE FUNCTIONS: mul() ----------" << endl;
	doubleThree = doubleOne.mul(doubleTwo);
	cout << "The value of doubleOne * doubleTwo is: " << doubleThree.toDouble() << endl;

	cout << endl << "---------- TESTING DOUBLE FUNCTIONS: div() ----------" << endl;
	doubleThree = doubleOne.div(doubleTwo);
	cout << "The value of doubleOne / doubleTwo is: " << doubleThree.toDouble() << endl;

	// Assignment 3 Testing
	cout << endl;
	cout << "**************************************************" << endl;
	cout << "***************ASSIGNMENT 3 TESTING***************" << endl;
	cout << "**************************************************" << endl;

	// Testing overloaded constructors for Integer class
	cout << endl << "----------TESTING INTEGER CLASS OVERLOADED CONSTRUCTORS----------" << endl;
	Integer intFour;
	intFour.equals(4);

	//default
	Integer intFive;
	cout << "The value of intFive using default constructor is: " << intFive.toInt() << endl;

	//Integer
	Integer intSix(intFour); // value of intSix should be 4
	cout << "The value of intSix using Integer constructor is: " << intSix.toInt() << endl;

	//Primitive int
	Integer intSeven(7);
	cout << "The value of intSeven using primitive int constructor is: " << intSeven.toInt() << endl;


	//Testing Integer Class Overloaded Functions
	//Testing add() Integer overloaded function
	cout << endl << "---------- TESTING INTEGER OVERLOADED FUNCTIONS: add() ---------- " << endl;
	Integer intEight(1), intNine;
	cout << "The value of intEight is: " << intEight.toInt() << endl; //should be 1
	intNine = intEight.add(4); // should equal 5
	cout << "The value of intEight + 4 is: " << intNine.toInt() << endl;

	//Testing sub() Integer overloaded function
	cout << endl << "---------- TESTING INTEGER OVERLOADED FUNCTIONS: sub() ---------- " << endl;
	intEight.equals(5);
	cout << "The value of intEight is: " << intEight.toInt() << endl; //should be 5
	intNine = intEight.sub(4); //should be 1
	cout << "The value of intEight - 4 is: " << intNine.toInt() << endl;

	//Testing mul() Integer overloaded function
	cout << endl << "---------- TESTING INTEGER OVERLOADED FUNCTIONS: mul() ---------- " << endl;
	intEight.equals(5);
	cout << "The value of intEight is: " << intEight.toInt() << endl; //should be 5
	intNine = intEight.mul(4); //should be 20
	cout << "The value of intEight * 4 is: " << intNine.toInt() << endl;

	//Testing div() Integer overloaded function
	cout << endl << "---------- TESTING INTEGER OVERLOADED FUNCTIONS: div() ---------- " << endl;
	intEight.equals(20);
	cout << "The value of intEight is: " << intEight.toInt() << endl; //should be 20
	intNine = intEight.div(4); //should be 5
	cout << "The value of intEight / 4 is: " << intNine.toInt() << endl;


	// Testing overloaded constructors for Double class
	cout << endl << "----------TESTING DOUBLE CLASS OVERLOADED CONSTRUCTORS----------" << endl;
	Double doubleFour;
	doubleFour.equals(4.00);
	cout << "The value of doubleFour is: " << doubleFour.toDouble() << endl; //should be 4.00

	//Default Constructor
	Double doubleFive; // should be 0.00
	cout << "The value of doubleFive using default constructor is: " << doubleFive.toDouble() << endl;

	//Double
	Double doubleSix(doubleFour); // value of doubleSix should be 4.00
	cout << "The value of doubleSix using Double constructor is: " << doubleSix.toDouble() << endl;

	//Primitive double
	Double doubleSeven(12.50);
	cout << "The value of doubleSeven using primitive double constructor is: " << doubleSeven.toDouble() << endl; //should be 12.50

	//Integer class
	Double doubleInt(intOne); // should be 5.00
	cout << "The value of doubleInt using Integer class constructor is: " << doubleInt.toDouble() << endl;

	//Testing Double Class Overloaded Functions
	//Testing add() Double overloaded function
	cout << endl << "---------- TESTING DOUBLE OVERLOADED FUNCTIONS: add() ---------- " << endl;
	cout << "The vale of doubleSeven is: " << doubleSeven.toDouble() << endl;
	Double doubleEight;
	doubleEight = doubleSeven.add(1.50); //should be 14.00
	cout << "The value of doubleSeven + 1.50 is: " << doubleEight.toDouble() << endl;

	//Testing sub() Double overloaded function
	cout << endl << "---------- TESTING DOUBLE OVERLOADED FUNCTIONS: sub() ---------- " << endl;
	doubleSeven.equals(14.00);
	cout << "The value of doubleSeven is: " << doubleSeven.toDouble() << endl;
	doubleEight = doubleSeven.sub(1.50); // should be 12.50
	cout << "The value of doubleSeven - 1.50 is: " << doubleEight.toDouble() << endl;

	//Testing mul() Double overloaded function
	cout << endl << "---------- TESTING DOUBLE OVERLOADED FUNCTIONS: mul() ---------- " << endl;
	doubleSeven.equals(12.50);
	cout << "The value of doubleSeven is: " << doubleSeven.toDouble() << endl;
	doubleEight = doubleSeven.mul(1.50); // should be 18.75
	cout << "The value of doubleSeven * 1.50 is: " << doubleEight.toDouble() << endl;

	//Testing div() Double overloaded function
	cout << endl << "---------- TESTING DOUBLE OVERLOADED FUNCTIONS: div() ---------- " << endl;
	doubleSeven.equals(18.75);
	cout << "The value of doubleSeven is: " << doubleSeven.toDouble() << endl;
	doubleEight = doubleSeven.div(1.50); // should be 12.50
	cout << "The value of doubleSeven / 1.50 is: " << doubleEight.toDouble() << endl;


	return 0;
}