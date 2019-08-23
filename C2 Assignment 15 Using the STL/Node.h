/*
Name: Suchi Kapur
SID: 0558322
Date: May 2, 2019
Project: Assignment 15 Using the STL
File: Node.h - Node Class
*/

#ifndef NODE
#define NODE
#include <string>
using namespace std;

template <class T>
class Node
{
public:
	Node(T element, int i) : Data(element), pri(i) {}

	//Overload the relational operator so that the priority is compared
	bool operator < (const Node& n) const { return pri > n.pri; }

	T getData() { return Data; }
	int getId() { return pri; }
private:
	T Data;
	int pri;
};

#endif