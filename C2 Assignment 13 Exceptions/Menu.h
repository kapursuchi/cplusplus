/*
Name: Suchi Kapur
SID: 0558322
Date: April 17, 2019
Project: Assignment 13 Exceptions
File: Menu.h - This file has the function prototypes for the Menu class
*/

#ifndef MENU
#define MENU

#include <string>
#include <vector>

using std::string;
using std::vector;

namespace suchi
{
	const int MAXCOUNT = 20;

	struct menuItem
	{
		void(*func)();
		string descript;
	};

	class Menu
	{
	private:
		vector <menuItem> mi;
		int count;
		void runSelection();
		static Menu *instance; //singleton design pattern - one instance

							   //private constructor so no new objects can be created
		Menu()
		{
			count = 0;
		}

	public:
		static Menu* getInstance();
		void addMenuItem(string Description, void(*f)(void));
		void runMenu();
		void waitKey();

	};
}

#endif