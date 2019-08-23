/*
Name: Suchi Kapur
SID: 0558322
Date: February 23, 2019
Project: Assignment 7 Dynamic Memory
File: main.cpp - This file tests the functions of both the Double
and Integer classes using the Menu class and the classes' respective
overloaded operators.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Double.h"
#include "Integer.h"
#include "Menu.h"


using namespace std;

//function prototypes for menu for testing Double class
void doubleAdd();
void doubleSub();
void doubleMul();
void doubleDiv();
void doubleAddPrim(); //using Double and primitive double
void doubleSubPrim(); //using Double and primitive double
void doubleMulPrim(); //using Double and primitive double
void doubleDivPrim(); //using Double and primitive double
void doubleEquality();
void doubleInequality();
void doubleToStr(); //converting to string
void doubleByStr(); //convert string to double
void doubleByStrInput(); //convert string to double with user input

						 //function prototypes for menu for testing Integer class
void integerAdd();
void integerSub();
void integerMul();
void integerDiv();
void integerAddPrim(); //using Integer and primitive int
void integerSubPrim(); //using Integer and primitive int
void integerMulPrim(); //using Integer and primitive int
void integerDivPrim(); //using Integer and primitive int
void intEquality();
void intInequality();
void intToStr(); //convert integer to string
void intByStr(); //convert string to integer
void intByStrInput(); //convert string to integer with user input

					  //function prototype to exit menu
void exitMenu();

//create global instance of menu object for use in functions
Menu m;

int main()
{
	//output 2 decimal places for
	cout << fixed << setprecision(2);

	//adding add/sub/mul/div for Double and Integer classes
	m.addMenuItem("1. Add two Doubles", doubleAdd);
	m.addMenuItem("2. Subtract two Doubles", doubleSub);
	m.addMenuItem("3. Multiply two Doubles", doubleMul);
	m.addMenuItem("4. Divide two Doubles", doubleDiv);
	m.addMenuItem("5. Add Integers", integerAdd);
	m.addMenuItem("6. Subtract Integers", integerSub);
	m.addMenuItem("7. Multiply Integers", integerMul);
	m.addMenuItem("8. Divide Integers", integerDiv);

	//adding add/sub/mul/div for Double and Integer classes with primitive types
	m.addMenuItem("9. Add Double and primitive double", doubleAddPrim);
	m.addMenuItem("10. Subtract Double and primitive double", doubleSubPrim);
	m.addMenuItem("11. Multiply Double and primitive double", doubleMulPrim);
	m.addMenuItem("12. Divide Double and primitive double", doubleDivPrim);
	m.addMenuItem("13. Add Integer and primitive integer", integerAdd);
	m.addMenuItem("14. Subtract Integer and primitive integer", integerSubPrim);
	m.addMenuItem("15. Multiply Integer and primitve integer", integerMulPrim);
	m.addMenuItem("16. Divide Integer and primitive integer", integerDivPrim);

	//adding Double equality and inequality functions
	m.addMenuItem("17. Test Double equality (==) operator", doubleEquality);
	m.addMenuItem("18. Test Double inequality (!=) operator", doubleInequality);

	//adding Integer equality and inequality function
	m.addMenuItem("19. Test Integer equality (==) operator", intEquality);
	m.addMenuItem("20. Test Integer inequality (!=) operator", intInequality);


	//adding toString functionality to menu for Double and Integer classes
	m.addMenuItem("21. Convert Integer to string", intToStr);
	m.addMenuItem("22. Convert Double to string", doubleToStr);
	m.addMenuItem("23. Create Integer using string", intByStr);
	m.addMenuItem("24. Create Integer using string with input (Tests overloaded = with string)", intByStrInput);
	m.addMenuItem("25. Create Double using string", doubleByStr);
	m.addMenuItem("26. Create Double using string with input (Tests overloaded = with string)", doubleByStrInput);

	//add exit menu 
	m.addMenuItem("27. Exit", exitMenu);

	//run menu
	m.runMenu();

	return 0;
}

//FUNCTION DEFINITIONS
//-----Double functions-----
void doubleAdd()
{
	double d1, d2;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *doubleTwo = new Double(d2); //using overloaded = operator
	Double *result = new Double(*doubleOne + *doubleTwo); //using overloaded + operator and =
	cout << "The result of the two doubles added is: " << (*result).toDouble() << endl;
	m.waitKey();

	delete doubleOne;
	delete doubleTwo;
	delete result;
}

void doubleSub()
{
	double d1, d2;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *doubleTwo = new Double(d2); //using overloaded = operator
	Double *result = new Double(*doubleOne - *doubleTwo); //using overloaded = operator  and -
	cout << "The result of the two doubles subtracted is: " << (*result).toDouble() << endl;
	m.waitKey();

	delete doubleOne;
	delete doubleTwo;
	delete result;
}

void doubleMul()
{
	double d1, d2;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *doubleTwo = new Double(d2); //using overloaded = operator
	Double *result = new Double(*doubleOne * *doubleTwo); //using overloaded = operator and *
	cout << "The result of the two doubles multiplied is: " << (*result).toDouble() << endl;
	m.waitKey();

	delete doubleOne;
	delete doubleTwo;
	delete result;
}

void doubleDiv()
{
	double d1, d2;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *doubleTwo = new Double(d2); //using overloaded = operator
	Double *result = new Double(*doubleOne / *doubleTwo); //using overloaded = operator and /
	cout << "The result of the two doubles divided is: " << (*result).toDouble() << endl;
	m.waitKey();

	delete doubleOne;
	delete doubleTwo;
	delete result;
}

//overloaded Double Functions (using primitive double)
void doubleAddPrim()
{
	double d1, d2;
	cout << "Enter two doubles, one will be a Double and the other will be primitive: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *result = new Double(*doubleOne + d2); //using overloaded = operator and +
	cout << "The result of the two doubles added is: " << (*result).toDouble() << endl;
	m.waitKey();

	delete doubleOne;
	delete result;
}

void doubleSubPrim()
{
	double d1, d2;
	cout << "Enter two doubles, one will be a Double and the other will be primitive: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *result = new Double(*doubleOne - d2); //using overloaded = operator and -
	cout << "The result of the two doubles subtracted is: " << (*result).toDouble() << endl;
	m.waitKey();

	delete doubleOne;
	delete result;
}

void doubleMulPrim()
{
	double d1, d2;
	cout << "Enter two doubles, one will be a Double and the other will be primitive: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *result = new Double(*doubleOne * d2); //using overloaded = operator and *
	cout << "The result of the two doubles multiplied is: " << (*result).toDouble() << endl;
	m.waitKey();

	delete doubleOne;
	delete result;
}

void doubleDivPrim()
{
	double d1, d2;
	cout << "Enter two doubles, one will be a Double and the other will be primitive: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *result = new Double(*doubleOne / d2); //using overloaded = operator and /
	cout << "The result of the two doubles divided is: " << (*result).toDouble() << endl;
	m.waitKey();

	delete doubleOne;
	delete result;
}

void doubleEquality()
{
	Double *doubleOne = new Double(2.45);
	Double *doubleTwo = new Double(2.45);
	cout << "The value of doubleOne is: " << (*doubleOne).toDouble() << endl;
	cout << "The value of doubleTwo is: " << (*doubleTwo).toDouble() << endl;
	bool isEqual = (*doubleOne == *doubleTwo);
	if (isEqual)
	{
		cout << "doubleOne and doubleTwo are equal" << endl;
	}
	m.waitKey();

	delete doubleOne;
	delete doubleTwo;
}

void doubleInequality()
{
	Double *doubleOne = new Double(2.45);
	Double *doubleTwo = new Double(3.57);
	cout << "The value of doubleOne is: " << (*doubleOne).toDouble() << endl;
	cout << "The value of doubleTwo is: " << (*doubleTwo).toDouble() << endl;
	bool notEqual = (*doubleOne != *doubleTwo);
	if (notEqual)
	{
		cout << "doubleOne and doubleTwo are not equal" << endl;
	}
	m.waitKey();

	delete doubleOne;
	delete doubleTwo;
}

void doubleToStr()
{
	double d;
	cout << "Enter a Double: " << endl;
	cin >> d;
	Double *doubleOne = new Double(d);
	string doubleOneStr = (*doubleOne).toString();
	cout << (*doubleOne).toDouble() << " as a string is: \"" << doubleOneStr << "\"" << endl;
	m.waitKey();

	delete doubleOne;

}

//Double string functions
void doubleByStr()
{
	Double *doubleOne = new Double("1.23");
	cout << "The value of doubleOne is: " << (*doubleOne).toDouble() << endl;
	m.waitKey();

	delete doubleOne;
}

void doubleByStrInput()
{
	string d;
	cout << "Enter a double" << endl;
	cin >> d;
	Double *doubleOne = new Double(d);
	cout << "The value of doubleOne is: " << (*doubleOne).toDouble() << endl;
	m.waitKey();

	delete doubleOne;
}

//-----Integer functions-----
void integerAdd()
{
	int i1, i2;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *intTwo = new Integer(i2); //using overloaded = operator
	Integer *result = new Integer(*intOne + *intTwo); //using overloaded = operator and +
	cout << "The result of the two integers added is: " << (*result).toInt() << endl;
	m.waitKey();

	delete intOne;
	delete intTwo;
	delete result;
}

void integerSub()
{
	int i1, i2;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *intTwo = new Integer(i2); //using overloaded = operator
	Integer *result = new Integer(*intOne - *intTwo); //using overloaded = operator and +
	cout << "The result of the two integers subtracted is: " << (*result).toInt() << endl;
	m.waitKey();

	delete intOne;
	delete intTwo;
	delete result;
}

void integerMul()
{
	int i1, i2;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *intTwo = new Integer(i2); //using overloaded = operator
	Integer *result = new Integer(*intOne * *intTwo); //using overloaded = operator and *
	cout << "The result of the two integers multiplied is: " << (*result).toInt() << endl;
	m.waitKey();

	delete intOne;
	delete intTwo;
	delete result;
}

void integerDiv()
{
	int i1, i2;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *intTwo = new Integer(i2); //using overloaded = operator
	Integer *result = new Integer(*intOne / *intTwo); //using overloaded = operator and /
	cout << "The result of the two integers divided is: " << (*result).toInt() << endl;
	m.waitKey();

	delete intOne;
	delete intTwo;
	delete result;
}

//Overloaded Integer Functions (using primitive int)
void integerAddPrim()
{
	int i1, i2;
	cout << "Enter two integers, one will be an Integer and the other will be primitive: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *result = new Integer(*intOne + i2); //using overloaded = operator and +
	cout << "The result of the two integers added is: " << (*result).toInt() << endl;
	m.waitKey();

	delete intOne;
	delete result;
}

void integerSubPrim()
{
	int i1, i2;
	cout << "Enter two integers, one will be an Integer and the other will be primitive: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *result = new Integer(*intOne - i2); //using overloaded = operator and -
	cout << "The result of the two integers subtracted is: " << (*result).toInt() << endl;
	m.waitKey();

	delete intOne;
	delete result;
}

void integerMulPrim()
{
	int i1, i2;
	cout << "Enter two integers, one will be an Integer and the other will be primitive: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *result = new Integer(*intOne * i2); //using overloaded = operator and *
	cout << "The result of the two integers multiplied is: " << (*result).toInt() << endl;
	m.waitKey();

	delete intOne;
	delete result;
}

void integerDivPrim()
{
	int i1, i2;
	cout << "Enter two integers, one will be an Integer and the other will be primitive: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *result = new Integer(*intOne / i2);  //using overloaded = operator and /
	cout << "The result of the two integers divided is: " << (*result).toInt() << endl;
	m.waitKey();

	delete intOne;
	delete result;
}

void intEquality()
{
	Integer *intOne = new Integer(2);
	Integer *intTwo = new Integer(2);
	cout << "The value of intOne is: " << (*intOne).toInt() << endl;
	cout << "The value of intTwo is: " << (*intTwo).toInt() << endl;
	bool isEqual = (*intOne == *intTwo);
	if (isEqual)
	{
		cout << "intOne and intTwo are equal" << endl;
	}
	m.waitKey();

	delete intOne;
	delete intTwo;
}

void intInequality()
{
	Integer *intOne = new Integer(2);
	Integer *intTwo = new Integer(5);
	cout << "The value of intOne is: " << (*intOne).toInt() << endl;
	cout << "The value of intTwo is: " << (*intTwo).toInt() << endl;
	bool notEqual = (*intOne != *intTwo);
	if (notEqual)
	{
		cout << "intOne and intTwo are not equal" << endl;
	}
	m.waitKey();

	delete intOne;
	delete intTwo;
}

//Integer string functions
void intToStr()
{
	int i;
	cout << "Enter an Integer: " << endl;
	cin >> i;
	Integer *intOne = new Integer(i);
	string intOneStr = (*intOne).toString();
	cout << (*intOne).toInt() << " as a string is: \"" << intOneStr << "\"" << endl;
	m.waitKey();

	delete intOne;
}

void intByStr()
{
	Integer *intOne = new Integer("23");
	cout << "The value of intOne is: " << (*intOne).toInt() << endl;
	m.waitKey();

	delete intOne;
}

void intByStrInput()
{
	string integer;
	cout << "Enter an integer" << endl;
	cin >> integer;
	Integer *intOne = new Integer(integer);
	cout << "The value of intOne is: " << (*intOne).toInt() << endl;
	m.waitKey();

	delete intOne;
}

//exit menu function
void exitMenu()
{
	cout << "Goodbye!" << endl;
	exit(0);
	m.waitKey();
}