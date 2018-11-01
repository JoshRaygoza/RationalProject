#ifndef RATIONAL_H
#define RATIONAL_H

#include <string>
using namespace std;

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
	m_a;
	m_b;
};
#endif
