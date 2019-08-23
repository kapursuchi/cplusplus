/*
Name: Suchi Kapur
SID: 0558322
Date: May 13, 2019
Project: Final Project - Batting Averages
File: Players.h
*/


#ifndef PLAYER
#define PLAYER

#include <string>
#include "Stack.h"

using std::string;

class Players 
{
private:
	Stack<string> lowAvg;
	Stack<string> highAvg;
	double low = 1;
	double high = 0;
	
public:
	void addPlayer(string name, double avg);
	void printLow();
	void printHigh();
};

#endif