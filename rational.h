/* 
Authors: Alec Guinan
File Name: Rational.h
Date created: 11/1/2018
Purpose: This creates a class called Rational
*/
#ifndef RATIONAL_H
#define RATIONAL_H

#include <string>

class Rational
{
public:
	Rational();
	Rational(int a, int b);
	Rational add(Rational i);
	Rational sub(Rational i);
	Rational div(Rational i);
	Rational mult(Rational i);
	void print();

private:
	int m_a;
	int m_b;
};
#endif
