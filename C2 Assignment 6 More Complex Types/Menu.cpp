/*
Name: Suchi Kapur
SID: 0558322
Date: February 16, 2019
Project: Assignment 6 More Complex Types
File: Menu.cpp - This file has the class construction and
function definitions of the Menu Class.
*/

#include <iostream>
#include <cstdlib>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

#include "Menu.h"

Menu::Menu()
	: count(0) {}

void Menu::addMenuItem(string Description, void(*f)(void))
{
	menuItem tempMenu;
	tempMenu.descript = Description;
	tempMenu.func = f;
	this->mi.push_back(tempMenu);
	count++;
}

void Menu::runMenu()
{
	for (;;)
	{
		system("CLS");
		for (int i = 0; i < count; i++)
		{
			cout << this->mi[i].descript << endl;
		}
		runSelection();
	}
}

void Menu::runSelection()
{
	int select;
	cin >> select;
	if (select <= count)
		this->mi[select - 1].func();
}

void Menu::waitKey()
{
	cout << "Press any key to continue" << endl;
	while (!_kbhit()); // kbhit is depricated. use _kbhit
	fflush(stdin);
}