/*
Name: Suchi Kapur
SID: 0558322
Date: February 2, 2019
Project: Assignment 4 Using Complex Types - Vectors
File: Menu.h - This file has the function prototypes for the Menu class
*/

#ifndef MENU
#define MENU

#include <string>
#include <vector>

using std::string;
using std::vector;


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

public:
	Menu();
	void addMenuItem(string Description, void(*f)(void));
	void runMenu();
	void waitKey();
};

#endif