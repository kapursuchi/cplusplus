/*
Name: Suchi Kapur
SID: 0558322
Date: March 28, 2019
Project: Assignment 10 Recursion
File: main.cpp - This file tests the functions of both the Double
and Integer classes using the Menu class and the classes' respective
overloaded operators.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "Double.h"
#include "Integer.h"
#include "Menu.h"


using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::ifstream;
using std::ofstream;

using suchi::Double;
using suchi::Integer;
using suchi::Menu;

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

//File IO function prototypes
void parseFile(vector <Integer *> &iNumbers, vector <Double *> &dNumbers);
void writeNumbers(vector <Integer *> iNumbers);
void writeNumbers(vector <Double *> dNumbers);
void testFileIO();

//recursive Nan prototypes
void intNan();
void doubleNan();


int main()
{


	//create instance of menu - singleton pattern only uses one instance
	//no matter how many times you "create" it - returns the same single
	//instance of the menu
	Menu *m = Menu::getInstance();

	//output 2 decimal places for
	cout << fixed << setprecision(2);

	//adding add/sub/mul/div for Double and Integer classes
	m->addMenuItem("1. Add two Doubles", doubleAdd);
	m->addMenuItem("2. Subtract two Doubles", doubleSub);
	m->addMenuItem("3. Multiply two Doubles", doubleMul);
	m->addMenuItem("4. Divide two Doubles", doubleDiv);
	m->addMenuItem("5. Add Integers", integerAdd);
	m->addMenuItem("6. Subtract Integers", integerSub);
	m->addMenuItem("7. Multiply Integers", integerMul);
	m->addMenuItem("8. Divide Integers", integerDiv);

	//adding add/sub/mul/div for Double and Integer classes with primitive types
	m->addMenuItem("9. Add Double and primitive double", doubleAddPrim);
	m->addMenuItem("10. Subtract Double and primitive double", doubleSubPrim);
	m->addMenuItem("11. Multiply Double and primitive double", doubleMulPrim);
	m->addMenuItem("12. Divide Double and primitive double", doubleDivPrim);
	m->addMenuItem("13. Add Integer and primitive integer", integerAdd);
	m->addMenuItem("14. Subtract Integer and primitive integer", integerSubPrim);
	m->addMenuItem("15. Multiply Integer and primitve integer", integerMulPrim);
	m->addMenuItem("16. Divide Integer and primitive integer", integerDivPrim);

	//adding Double equality and inequality functions
	m->addMenuItem("17. Test Double equality (==) operator", doubleEquality);
	m->addMenuItem("18. Test Double inequality (!=) operator", doubleInequality);

	//adding Integer equality and inequality function
	m->addMenuItem("19. Test Integer equality (==) operator", intEquality);
	m->addMenuItem("20. Test Integer inequality (!=) operator", intInequality);


	//adding toString functionality to menu for Double and Integer classes
	m->addMenuItem("21. Convert Integer to string", intToStr);
	m->addMenuItem("22. Convert Double to string", doubleToStr);
	m->addMenuItem("23. Create Integer using string", intByStr);
	m->addMenuItem("24. Create Integer using string with input (Tests overloaded = with string)", intByStrInput);
	m->addMenuItem("25. Create Double using string", doubleByStr);
	m->addMenuItem("26. Create Double using string with input (Tests overloaded = with string)", doubleByStrInput);

	//adding File IO functionality
	m->addMenuItem("27. Test File IO: Parse file into double.txt & integer.txt", testFileIO);

	//add testing for recursiveNan
	m->addMenuItem("28. Test Integer recursiveNan", intNan);
	m->addMenuItem("29. Test Double recursiveNan", doubleNan);

	//add exit menu 
	m->addMenuItem("30. Exit", exitMenu);

	//run menu
	m->runMenu();

	return 0;
}

//FUNCTION DEFINITIONS
//-----Double functions-----
void doubleAdd()
{
	Menu *m = Menu::getInstance();

	double d1, d2;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *doubleTwo = new Double(d2); //using overloaded = operator
	Double *result = new Double(*doubleOne + *doubleTwo); //using overloaded + operator and =
	cout << "The result of the two doubles added is: " << (*result).toDouble() << endl;
	m->waitKey();

	delete doubleOne;
	delete doubleTwo;
	delete result;
}

void doubleSub()
{
	Menu *m = Menu::getInstance();

	double d1, d2;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *doubleTwo = new Double(d2); //using overloaded = operator
	Double *result = new Double(*doubleOne - *doubleTwo); //using overloaded = operator  and -
	cout << "The result of the two doubles subtracted is: " << (*result).toDouble() << endl;
	m->waitKey();

	delete doubleOne;
	delete doubleTwo;
	delete result;
}

void doubleMul()
{
	Menu *m = Menu::getInstance();

	double d1, d2;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *doubleTwo = new Double(d2); //using overloaded = operator
	Double *result = new Double(*doubleOne * *doubleTwo); //using overloaded = operator and *
	cout << "The result of the two doubles multiplied is: " << (*result).toDouble() << endl;
	m->waitKey();

	delete doubleOne;
	delete doubleTwo;
	delete result;
}

void doubleDiv()
{
	Menu *m = Menu::getInstance();

	double d1, d2;
	cout << "Enter two doubles: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *doubleTwo = new Double(d2); //using overloaded = operator
	Double *result = new Double(*doubleOne / *doubleTwo); //using overloaded = operator and /
	cout << "The result of the two doubles divided is: " << (*result).toDouble() << endl;
	m->waitKey();

	delete doubleOne;
	delete doubleTwo;
	delete result;
}

//overloaded Double Functions (using primitive double)
void doubleAddPrim()
{
	Menu *m = Menu::getInstance();

	double d1, d2;
	cout << "Enter two doubles, one will be a Double and the other will be primitive: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *result = new Double(*doubleOne + d2); //using overloaded = operator and +
	cout << "The result of the two doubles added is: " << (*result).toDouble() << endl;
	m->waitKey();

	delete doubleOne;
	delete result;
}

void doubleSubPrim()
{
	Menu *m = Menu::getInstance();

	double d1, d2;
	cout << "Enter two doubles, one will be a Double and the other will be primitive: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *result = new Double(*doubleOne - d2); //using overloaded = operator and -
	cout << "The result of the two doubles subtracted is: " << (*result).toDouble() << endl;
	m->waitKey();

	delete doubleOne;
	delete result;
}

void doubleMulPrim()
{
	Menu *m = Menu::getInstance();

	double d1, d2;
	cout << "Enter two doubles, one will be a Double and the other will be primitive: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *result = new Double(*doubleOne * d2); //using overloaded = operator and *
	cout << "The result of the two doubles multiplied is: " << (*result).toDouble() << endl;
	m->waitKey();

	delete doubleOne;
	delete result;
}

void doubleDivPrim()
{
	Menu *m = Menu::getInstance();

	double d1, d2;
	cout << "Enter two doubles, one will be a Double and the other will be primitive: " << endl;
	cin >> d1 >> d2;
	Double *doubleOne = new Double(d1); //using overloaded = operator
	Double *result = new Double(*doubleOne / d2); //using overloaded = operator and /
	cout << "The result of the two doubles divided is: " << (*result).toDouble() << endl;
	m->waitKey();

	delete doubleOne;
	delete result;
}

void doubleEquality()
{
	Menu *m = Menu::getInstance();

	Double *doubleOne = new Double(2.45);
	Double *doubleTwo = new Double(2.45);
	cout << "The value of doubleOne is: " << (*doubleOne).toDouble() << endl;
	cout << "The value of doubleTwo is: " << (*doubleTwo).toDouble() << endl;
	bool isEqual = (*doubleOne == *doubleTwo);
	if (isEqual)
	{
		cout << "doubleOne and doubleTwo are equal" << endl;
	}
	m->waitKey();

	delete doubleOne;
	delete doubleTwo;
}

void doubleInequality()
{
	Menu *m = Menu::getInstance();

	Double *doubleOne = new Double(2.45);
	Double *doubleTwo = new Double(3.57);
	cout << "The value of doubleOne is: " << (*doubleOne).toDouble() << endl;
	cout << "The value of doubleTwo is: " << (*doubleTwo).toDouble() << endl;
	bool notEqual = (*doubleOne != *doubleTwo);
	if (notEqual)
	{
		cout << "doubleOne and doubleTwo are not equal" << endl;
	}
	m->waitKey();

	delete doubleOne;
	delete doubleTwo;
}

void doubleToStr()
{
	Menu *m = Menu::getInstance();

	double d;
	cout << "Enter a Double: " << endl;
	cin >> d;
	Double *doubleOne = new Double(d);
	string doubleOneStr = (*doubleOne).toString();
	cout << (*doubleOne).toDouble() << " as a string is: \"" << doubleOneStr << "\"" << endl;
	m->waitKey();

	delete doubleOne;

}

//Double string functions
void doubleByStr()
{
	Menu *m = Menu::getInstance();

	Double *doubleOne = new Double("1.23");
	cout << "The value of doubleOne is: " << (*doubleOne).toDouble() << endl;
	m->waitKey();

	delete doubleOne;
}

void doubleByStrInput()
{
	Menu *m = Menu::getInstance();

	string d;
	cout << "Enter a double" << endl;
	cin >> d;
	Double *doubleOne = new Double(d);
	cout << "The value of doubleOne is: " << (*doubleOne).toDouble() << endl;
	m->waitKey();

	delete doubleOne;
}

void doubleNan()
{
	Menu *m = Menu::getInstance();

	string d;
	cout << "Enter a double as a string" << endl;
	cin >> d;
	Double *dOne = new Double(d);
	if (dOne->isNaN())
	{
		cout << d << " is not a number" << endl;
	}
	else
	{
		cout << d << " is a number " << endl;
	}

	m->waitKey();
}

//-----Integer functions-----
void integerAdd()
{
	Menu *m = Menu::getInstance();

	int i1, i2;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *intTwo = new Integer(i2); //using overloaded = operator
	Integer *result = new Integer(*intOne + *intTwo); //using overloaded = operator and +
	cout << "The result of the two integers added is: " << (*result).toInt() << endl;
	m->waitKey();

	delete intOne;
	delete intTwo;
	delete result;
}

void integerSub()
{
	Menu *m = Menu::getInstance();

	int i1, i2;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *intTwo = new Integer(i2); //using overloaded = operator
	Integer *result = new Integer(*intOne - *intTwo); //using overloaded = operator and +
	cout << "The result of the two integers subtracted is: " << (*result).toInt() << endl;
	m->waitKey();

	delete intOne;
	delete intTwo;
	delete result;
}

void integerMul()
{
	Menu *m = Menu::getInstance();

	int i1, i2;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *intTwo = new Integer(i2); //using overloaded = operator
	Integer *result = new Integer(*intOne * *intTwo); //using overloaded = operator and *
	cout << "The result of the two integers multiplied is: " << (*result).toInt() << endl;
	m->waitKey();

	delete intOne;
	delete intTwo;
	delete result;
}

void integerDiv()
{
	Menu *m = Menu::getInstance();

	int i1, i2;
	cout << "Enter two integers: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *intTwo = new Integer(i2); //using overloaded = operator
	Integer *result = new Integer(*intOne / *intTwo); //using overloaded = operator and /
	cout << "The result of the two integers divided is: " << (*result).toInt() << endl;
	m->waitKey();

	delete intOne;
	delete intTwo;
	delete result;
}

//Overloaded Integer Functions (using primitive int)
void integerAddPrim()
{
	Menu *m = Menu::getInstance();

	int i1, i2;
	cout << "Enter two integers, one will be an Integer and the other will be primitive: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *result = new Integer(*intOne + i2); //using overloaded = operator and +
	cout << "The result of the two integers added is: " << (*result).toInt() << endl;
	m->waitKey();

	delete intOne;
	delete result;
}

void integerSubPrim()
{
	Menu *m = Menu::getInstance();

	int i1, i2;
	cout << "Enter two integers, one will be an Integer and the other will be primitive: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *result = new Integer(*intOne - i2); //using overloaded = operator and -
	cout << "The result of the two integers subtracted is: " << (*result).toInt() << endl;
	m->waitKey();

	delete intOne;
	delete result;
}

void integerMulPrim()
{
	Menu *m = Menu::getInstance();

	int i1, i2;
	cout << "Enter two integers, one will be an Integer and the other will be primitive: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *result = new Integer(*intOne * i2); //using overloaded = operator and *
	cout << "The result of the two integers multiplied is: " << (*result).toInt() << endl;
	m->waitKey();

	delete intOne;
	delete result;
}

void integerDivPrim()
{
	Menu *m = Menu::getInstance();

	int i1, i2;
	cout << "Enter two integers, one will be an Integer and the other will be primitive: " << endl;
	cin >> i1 >> i2;
	Integer *intOne = new Integer(i1); //using overloaded = operator
	Integer *result = new Integer(*intOne / i2);  //using overloaded = operator and /
	cout << "The result of the two integers divided is: " << (*result).toInt() << endl;
	m->waitKey();

	delete intOne;
	delete result;
}

void intEquality()
{
	Menu *m = Menu::getInstance();

	Integer *intOne = new Integer(2);
	Integer *intTwo = new Integer(2);
	cout << "The value of intOne is: " << (*intOne).toInt() << endl;
	cout << "The value of intTwo is: " << (*intTwo).toInt() << endl;
	bool isEqual = (*intOne == *intTwo);
	if (isEqual)
	{
		cout << "intOne and intTwo are equal" << endl;
	}
	m->waitKey();

	delete intOne;
	delete intTwo;
}

void intInequality()
{
	Menu *m = Menu::getInstance();

	Integer *intOne = new Integer(2);
	Integer *intTwo = new Integer(5);
	cout << "The value of intOne is: " << (*intOne).toInt() << endl;
	cout << "The value of intTwo is: " << (*intTwo).toInt() << endl;
	bool notEqual = (*intOne != *intTwo);
	if (notEqual)
	{
		cout << "intOne and intTwo are not equal" << endl;
	}
	m->waitKey();

	delete intOne;
	delete intTwo;
}

//Integer string functions
void intToStr()
{
	Menu *m = Menu::getInstance();

	int i;
	cout << "Enter an Integer: " << endl;
	cin >> i;
	Integer *intOne = new Integer(i);
	string intOneStr = (*intOne).toString();
	cout << (*intOne).toInt() << " as a string is: \"" << intOneStr << "\"" << endl;
	m->waitKey();

	delete intOne;
}

void intByStr()
{
	Menu *m = Menu::getInstance();

	Integer *intOne = new Integer("23");
	cout << "The value of intOne is: " << (*intOne).toInt() << endl;
	m->waitKey();

	delete intOne;
}

void intByStrInput()
{
	Menu *m = Menu::getInstance();

	string integer;
	cout << "Enter an integer" << endl;
	cin >> integer;
	Integer *intOne = new Integer(integer);
	cout << "The value of intOne is: " << (*intOne).toInt() << endl;
	m->waitKey();

	delete intOne;
}

void intNan()
{
	Menu *m = Menu::getInstance();

	string integer;
	cout << "Enter an integer as a string" << endl;
	cin >> integer;
	Integer *intOne = new Integer(integer);
	if (intOne->isNaN())
	{
		cout << integer << " is not a number" << endl;
	}
	else
	{
		cout << integer << " is a number " << endl;
	}

	m->waitKey();
}

//File IO Functions
void parseFile(vector <Integer *> &iNumbers, vector <Double *> &dNumbers)
{
	ifstream infile("Numbers.txt");

	if (!infile)
	{
		cout << "Unable to open the file for reading" << endl;
		exit(1);
	}

	string input;
	while (getline(infile, input))
	{
		if (input.find(".") != string::npos)
		{
			dNumbers.push_back(new Double(input));

		}
		else
		{
			iNumbers.push_back(new Integer(input));
		}
	}

}

void writeNumbers(vector <Integer *> iNumbers)
{
	ofstream outfile("integer.txt");

	if (!outfile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}

	vector <Integer *>::iterator p;
	for (p = iNumbers.begin(); p < iNumbers.end(); p++)
	{
		outfile << (*p)->toString() << endl;
	}
}

void writeNumbers(vector <Double *> dNumbers)
{
	ofstream outfile("double.txt");

	if (!outfile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}

	vector <Double *>::iterator p;
	for (p = dNumbers.begin(); p < dNumbers.end(); p++)
	{
		outfile << (*p)->toString() << endl;
	}
}

void testFileIO()
{
	Menu *m = Menu::getInstance();

	vector <Integer *> iNumbers;
	vector <Double *> dNumbers;
	parseFile(iNumbers, dNumbers);

	writeNumbers(iNumbers);
	writeNumbers(dNumbers);

	m->waitKey();
}


//exit menu function
void exitMenu()
{
	Menu *m = Menu::getInstance();

	cout << "Goodbye!" << endl;
	exit(0);
	m->waitKey();
}