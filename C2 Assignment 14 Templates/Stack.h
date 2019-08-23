/*
Name: Suchi Kapur
SID: 0558322
Date: April 23, 2019
Project: Assignment 14 Templates
File: Stack.h - Creating the template Stack class
*/

#ifndef STACK
#define STACK

#include <vector>
#include <exception>
#include <string>

using std::vector;
using std::exception;
using std::string;

class stackException : public exception
{
private:
	string message;
public:
	stackException(string msg) : message(msg) {}
	virtual const char *what() { return message.c_str(); }
};
template <class T>
class Stack : public vector <T>
{
private:
	int index;

public:
	void push(T val);
	T pop();
	T peek();
};

template <class T>
void Stack<T>::push(T val)
{
	this->emplace(this->begin(), val);
	++index;
}

template <class T>
T Stack<T>::pop()
{
	T val = this->peek();
	this->erase(this->begin(), this->begin() + 1);
	--index;
	return val;
}

template <class T>
T Stack<T>::peek()
{
	if (this->empty())
		throw stackException("Stack is empty");
	return this->front();
}

#endif
