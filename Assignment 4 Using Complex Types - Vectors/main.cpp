/*
Name: Suchi Kapur
SID: 0558322
Date: February 2, 2019
Project: Assignment 4 Using Complex Types - Vectors
File: main.cpp - This file tests the functions of both the Double
and Integer classes using the Menu class
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Double.h"
#include "Integer.h"
#include "Menu.h"


using namespace std;

//function prototypes for menu
void doubleAdd();
void doubleSub();
void doubleMul();
void doubleDiv();
void doubleAddOver(); //overloaded function
void doubleSubOver(); //overloaded function
void doubleMulOver(); //overloaded function
void doubleDivOver(); //overloaded function
void integerAdd();
void integerSub();
void integerMul();
void integerDiv();
void integerAddOver(); //overloaded function
void integerSubOver(); //overloaded function
void integerMulOver(); //overloaded function
void integerDivOver(); //overloaded function
void exitMenu();

//create global instance of menu object for use in functions
Menu m;

int main()
{
	//output 2 decimal places for
	cout << fixed << setprecision(2);

	//adding Double functions to menu
	m.addMenuItem("1. Add Doubles", doubleAdd);
	m.addMenuItem("2. Subtract Doubles", doubleSub);
	m.addMenuItem("3. Multiply Doubles", doubleMul);
	m.addMenuItem("4. Divide Doubles", doubleDiv);
	m.addMenuItem("5. Add Doubles (Overloaded)", doubleAddOver);
	m.addMenuItem("6. Subtract Doubles (Overloaded)", doubleSubOver);
	m.addMenuItem("7. Multiply Doubles (Overloaded)", doubleMulOver);
	m.addMenuItem("8. Divide Doubles (Overloaded)", doubleDivOver);

	//adding Integer functions to menu
	m.addMenuItem("9. Add Integers", integerAdd);
	m.addMenuItem("10. Subtract Integers", integerSub);
	m.addMenuItem("11. Multiply Integers", integerMul);
	m.addMenuItem("12. Divide Integers", integerDiv);
	m.addMenuItem("13. Add Integers (Overloaded)", integerAdd);
	m.addMenuItem("14. Subtract Integers (Overloaded)", integerSubOver);
	m.addMenuItem("15. Multiply Integers (Overloaded)", integerMulOver);
	m.addMenuItem("16. Divide Integers (Overloaded)", integerDivOver);
	m.addMenuItem("17. Exit", exitMenu);
	//run menu
	m.runMenu();

	return 0;
}

//Double functions
void doubleAdd()
{
	double d1, d2;
	Double doubleOne, doubleTwo, result;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	doubleOne.equals(d1);
	doubleTwo.equals(d2);
	result.equals(doubleOne.add(doubleTwo).toDouble());
	cout << "The result of the two doubles added is: " << result.toDouble() << endl;
	m.waitKey();
}

void doubleSub()
{
	double d1, d2;
	Double doubleOne, doubleTwo, result;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	doubleOne.equals(d1);
	doubleTwo.equals(d2);
	result.equals(doubleOne.sub(doubleTwo).toDouble());
	cout << "The result of the two doubles subtracted is: " << result.toDouble() << endl;
	m.waitKey();
}

void doubleMul()
{
	double d1, d2;
	Double doubleOne, doubleTwo, result;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	doubleOne.equals(d1);
	doubleTwo.equals(d2);
	result.equals(doubleOne.mul(doubleTwo).toDouble());
	cout << "The result of the two doubles multiplied is: " << result.toDouble() << endl;
	m.waitKey();
}

void doubleDiv()
{
	double d1, d2;
	Double doubleOne, doubleTwo, result;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	doubleOne.equals(d1);
	doubleTwo.equals(d2);
	result.equals(doubleOne.div(doubleTwo).toDouble());
	cout << "The result of the two doubles divided is: " << result.toDouble() << endl;
	m.waitKey();
}

//overloaded Double Functions
void doubleAddOver()
{
	double d1, d2;
	Double doubleOne, result;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	doubleOne.equals(d1);
	result.equals(doubleOne.add(d2).toDouble());
	cout << "The result of the two doubles added is: " << result.toDouble() << endl;
	m.waitKey();
}

void doubleSubOver()
{
	double d1, d2;
	Double doubleOne, result;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	doubleOne.equals(d1);
	result.equals(doubleOne.sub(d2).toDouble());
	cout << "The result of the two doubles subtracted is: " << result.toDouble() << endl;
	m.waitKey();
}

void doubleMulOver()
{
	double d1, d2;
	Double doubleOne, result;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	doubleOne.equals(d1);
	result.equals(doubleOne.mul(d2).toDouble());
	cout << "The result of the two doubles multiplied is: " << result.toDouble() << endl;
	m.waitKey();
}

void doubleDivOver()
{
	double d1, d2;
	Double doubleOne, result;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	doubleOne.equals(d1);
	result.equals(doubleOne.div(d2).toDouble());
	cout << "The result of the two doubles divided is: " << result.toDouble() << endl;
	m.waitKey();
}

//Integer functions
void integerAdd()
{
	int i1, i2;
	Integer intOne, intTwo, result;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	intOne.equals(i1);
	intTwo.equals(i2);
	result.equals(intOne.add(intTwo).toInt());
	cout << "The result of the two integers added is: " << result.toInt() << endl;
	m.waitKey();
}

void integerSub()
{
	int i1, i2;
	Integer intOne, intTwo, result;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	intOne.equals(i1);
	intTwo.equals(i2);
	result.equals(intOne.sub(intTwo).toInt());
	cout << "The result of the two integers subtracted is: " << result.toInt() << endl;
	m.waitKey();
}

void integerMul()
{
	int i1, i2;
	Integer intOne, intTwo, result;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	intOne.equals(i1);
	intTwo.equals(i2);
	result.equals(intOne.mul(intTwo).toInt());
	cout << "The result of the two integers multiplied is: " << result.toInt() << endl;
	m.waitKey();
}

void integerDiv()
{
	int i1, i2;
	Integer intOne, intTwo, result;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	intOne.equals(i1);
	intTwo.equals(i2);
	result.equals(intOne.div(intTwo).toInt());
	cout << "The result of the two integers divided is: " << result.toInt() << endl;
	m.waitKey();
}

//Overloaded Integer Functions
void integerAddOver()
{
	int i1, i2;
	Integer intOne, result;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	intOne.equals(i1);
	result.equals(intOne.add(i2).toInt());
	cout << "The result of the two integers added is: " << result.toInt() << endl;
	m.waitKey();
}

void integerSubOver()
{
	int i1, i2;
	Integer intOne, result;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	intOne.equals(i1);
	result.equals(intOne.sub(i2).toInt());
	cout << "The result of the two integers subtracted is: " << result.toInt() << endl;
	m.waitKey();
}

void integerMulOver()
{
	int i1, i2;
	Integer intOne, result;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	intOne.equals(i1);
	result.equals(intOne.mul(i2).toInt());
	cout << "The result of the two integers multiplied is: " << result.toInt() << endl;
	m.waitKey();
}

void integerDivOver()
{
	int i1, i2;
	Integer intOne, result;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	intOne.equals(i1);
	result.equals(intOne.div(i2).toInt());
	cout << "The result of the two integers divided is: " << result.toInt() << endl;
	m.waitKey();
}

//exit
void exitMenu()
{
	cout << "Goodbye!" << endl;
	exit(0);
	m.waitKey();
}

