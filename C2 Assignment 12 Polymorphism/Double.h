/*
Name: Suchi Kapur
SID: 0558322
Date: April 12, 2019
Project: Assignment 12 Polymorphism
File: Double.h - This file has the class construction and
prototypes of the Double Class.
*/

#ifndef DOUBLE
#define DOUBLE

#include "Integer.h"
#include "Number.h"
#include <string>

using std::string;
using std::stringstream;

namespace suchi
{
	class Double : public Number
	{
	private:
		int numOfDecimals;
		virtual void isNaN(string value);
		bool recursiveNaN(string value);

	public:

		//Functions
		void create();
		void equals(double value);
		Double& add(const Double &d);
		Double& sub(const Double &d);
		Double& mul(const Double &d);
		Double& div(const Double &d);
		double toDouble() const;

		

		//Overloaded Functions
		Double& add(const double d);
		Double& sub(const double d);
		Double& mul(const double d);
		Double& div(const double d);
		void equals(string value);

		//Operator Overloads
		Double& operator + (const Double &d);
		Double& operator - (const Double &d);
		Double& operator * (const Double &d);
		Double& operator / (const Double &d);
		Double& operator = (const Double &d);
		Double& operator = (const double &d); //primitive
		Double& operator = (const string value); //string
		bool operator == (const Double &d);
		bool operator == (const double d); //primitive
		bool operator != (const Double &d);

		//Constructors
		Double(); //default
		Double(Double &d); //Double argument
		Double(double d); //Primitive double
		Double(Integer &i); //Integer class
		Double(string value); //string

							  //Deconstructor
		~Double();

	};
}

#endif
