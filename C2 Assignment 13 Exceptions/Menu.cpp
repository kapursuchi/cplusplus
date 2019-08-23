/*
Name: Suchi Kapur
SID: 0558322
Date: April 17, 2019
Project: Assignment 13 Exceptions
File: Menu.cpp - This file has the function definitions for the Menu class
*/

#include <iostream>
#include <cstdlib>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

#include "Menu.h"

namespace suchi
{
	//allocate instance pointer so space is made
	Menu* Menu::instance = NULL;

	//static member function
	Menu * Menu::getInstance()
	{
		if (!instance)
			instance = new Menu;
		return instance;
	}

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
}