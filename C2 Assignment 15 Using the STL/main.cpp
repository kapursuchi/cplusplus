/*
Name: Suchi Kapur
SID: 0558322
Date: May 2, 2019
Project: Assignment 15 Using the STL
File: main.cpp - Testing the priQue class
*/

#include <iostream>
#include "priQueue.h"
#include "Node.h"
#include <set>

using namespace std;

int main()
{
	cout << "-------Testing priQueue with string-------" << endl;
	priQueue <string> sQueue; //holds strings
	sQueue.enqueue("How are you", 3);
	sQueue.enqueue("Hello", 9);
	sQueue.enqueue("Goodbye", 11); //priority should be reset to 5 since 11 is out of range

	sQueue.printQ();

	cout << "sQueue has a size of " << sQueue.size() << " before dequeue " << endl;
	string s = sQueue.dequeue(); //dequeues "Hello" (has priority 3)

	cout << "Dequeued value: " << s << endl;
	cout << "sQueue has a size of " << sQueue.size() << " after dequeue " << endl;
	cout << "Peeking sQueue: " << sQueue.peek() << endl;

	

	cout << endl << "-------Testing priQueue with int-------" << endl;
	priQueue <int> iQueue; //holds ints
	iQueue.enqueue(1, 9);
	iQueue.enqueue(2, -3); //priority should be reset to 5 since -3 is out of range
	iQueue.enqueue(3, 3);
	iQueue.enqueue(4, 1);

	iQueue.printQ();

	cout << "iQueue has a size of " << iQueue.size() << " before dequeue " << endl;

	int i = iQueue.dequeue(); //dequeues 4 (has priority 1)
	cout << "Dequeued value: " << i << endl;
	cout << "iQueue has a size of " << iQueue.size() << " after dequeue " << endl;
	cout << "Peeking sQueue: " << iQueue.peek() << endl;

	//cout << i << endl;

	return 0;
}