/*
Name: Suchi Kapur
SID: 0558322
Date: May 13, 2019
Project: Final Project - Batting Averages
File: Players.cpp
*/

#include "Players.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

void Players::addPlayer(string name, double avg)
{
	if (avg > this->high)
	{
		this->high = avg;
		while (!highAvg.empty())
		{
			highAvg.pop();
		}
		this->highAvg.push(name);
	}
	else if (avg == this->high)
	{
		this->highAvg.push(name);
	}
	else if (avg < this->low)
	{
		this->low = avg;
		while (!lowAvg.empty())
		{
			lowAvg.pop();
		}
		this->lowAvg.push(name);
	}
	else if (avg == this->low)
	{
		this->lowAvg.push(name);
	}
}


void Players::printLow()
{
	cout << "The lowest batting average is: " << this->low << endl;
	cout << "\tThe following players have this batting average: " << endl;

	while (!this->lowAvg.empty())
	{
		cout << "\t" << this->lowAvg.pop() << endl;
	}
}

void Players::printHigh()
{
	cout << "The highest batting average is: " << this->high << endl;
	cout << "\tThe following players have this batting average: " << endl;
	while(!this->highAvg.empty())
	{
		cout << "\t" << this->highAvg.pop() << endl;
	}
}