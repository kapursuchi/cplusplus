/*
Name: Suchi Kapur
SID: 0558322
Date: May 13, 2019
Project: Final Project - Batting Averages
File: main.cpp
*/

#include <iostream>
#include <string>
#include <fstream>
#include "Players.h"

using namespace std;

void parseFile();

int main()
{
	parseFile();

	return 0;
}

void parseFile()
{
	ifstream infile("avgs.txt");

	if (!infile)
	{
		cout << "Unable to open the file for reading" << endl;
		exit(1);
	}

	string input;
	string name;
	double avg;

	Players p;

	while (getline(infile, input))
	{
		if (input != "")
		{
			int decPos = input.find_last_of(".");
			name = input.substr(0, decPos);
			avg = stod(input.substr(decPos));
			
			p.addPlayer(name, avg);
		}

	}

	p.printHigh();
	cout << endl;
	p.printLow();
}