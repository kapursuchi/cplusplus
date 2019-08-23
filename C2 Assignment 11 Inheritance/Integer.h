/*
Name: Suchi Kapur
SID: 0558322
Date: April 4, 2019
Project: Assignment 11 Inheritance
File: Integer.h - This file has the class construction and
prototypes of the Integer Class.
*/

#ifndef INTEGER
#define INTEGER

#include <string>
#include "Number.h"

using std::string;
using std::stringstream;
namespace suchi
{
	class Integer : protected Number
	{
	private:
		bool *nan;
		void isNaN(const string value);
		bool recursiveNan(const string value);

	public:

		//Functions
		void create();
		void equals(int value);
		Integer& add(const Integer &i);
		Integer& sub(const Integer &i);
		Integer& mul(const Integer &i);
		Integer& div(const Integer &i);
		int toInt() const;
		string toString() const;
		bool isNaN() const;


		//Overloaded functions
		Integer& add(const int i);
		Integer& sub(const int i);
		Integer& mul(const int i);
		Integer& div(const int i);
		void equals(string value);

		//Operator Overloads
		Integer& operator + (const Integer &i);
		Integer& operator - (const Integer &i);
		Integer& operator * (const Integer &i);
		Integer& operator / (const Integer &i);
		Integer& operator = (const Integer &i);
		Integer& operator = (const int i); //primitive
		Integer& operator = (const string value); //string
		bool operator == (const Integer &i);
		bool operator == (const int i); //primitive
		bool operator != (const Integer &i);

		//Constructors
		Integer();//default
		Integer(Integer &i); //Integer class
		Integer(int i); //Primitive int
		Integer(string value); //string

		//Deconstructor
		~Integer();

	};
}

#endif