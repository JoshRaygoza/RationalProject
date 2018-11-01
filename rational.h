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
