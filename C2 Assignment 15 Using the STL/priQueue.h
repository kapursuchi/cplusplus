/*
Name: Suchi Kapur
SID: 0558322
Date: May 2, 2019
Project: Assignment 15 Using the STL
File: priQue.h - template priority queue class
*/

#ifndef PRIQUE
#define PRIQUE

#include "Node.h"
#include <set>

using namespace std;


template <class T>
class priQueue
{
private:
	multiset <Node<T>> ms;

public:
	void enqueue(T element, int pri);
	T dequeue();
	T peek();
	int size();
	void printQ();
};


template <class T>
void priQueue<T>::enqueue(T element, int pri)
{
	if (pri > 10 || pri < 1)
		pri = 5;
	this->ms.insert(Node<T>(element, pri));
}

template <class T>
T priQueue<T>::dequeue()
{
	class multiset<Node<T>>::iterator p = (ms.begin());
	Node<T> n = *p;
	T val = this->peek();

	this->ms.erase((*p));
	return val;
}

template <class T>
T priQueue<T>::peek()
{
	class multiset<Node<T>>::iterator p = (ms.begin());
	Node<T> n = *p;
	
	return n.getData();
}

template <class T>
int priQueue<T>::size()
{
	return ms.size();
}

template <class T>
void priQueue<T>::printQ()
{
	class multiset<Node<T>>::iterator p;
	for (p = ms.begin(); p != ms.end(); p++)
	{
		Node<T> n = *p;
		cout << "Data: " << n.getData() << " ID: " << n.getId() << endl;
	}
}


#endif
