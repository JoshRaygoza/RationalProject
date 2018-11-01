#include <iostream>
#include "rational.h"

Rational::Rational()// default constructor
{
	m_a = 0;
	m_b = 1;
}
Rational::Rational(int a, int b)// constructor
{
	m_a = a;
	m_b = b;
}
Rational Rational::sub(Rational i)// subtracts one rational number from another
{
	int n = ( m_a * i.m_b) - ( m_b *i.m_a);
	int d = ( m_b * i.m_b);
	if(d==0)
	{
		std::cout << "Undefined" << std::endl;
		return Rational();
	}
	else
		return Rational( n, d);
} 
Rational Rational::div( Rational i) // this divides one rational number from another
{
	int n = m_a * i.m_b;
	int d = m_b * i.m_a;
	if(d==0)
	{
		std::cout << "Undefined" << std::endl;
		return Rational();
	}
	else
		return Rational( n, d);
}
void Rational::print() // This prints out a Rational number
{
	std::cout << m_a << "/"<< m_b << std::endl;
}
Rational Rational::add(Rational i) // This adds two rational numbers together
{
	int n =  ( m_a * i.m_b) + ( m_b * i.m_a);
	int d =  (m_b * i.m_b);
	if(d==0)
	{
		std::cout << "Undefined" << std::endl;
		return Rational();
	}
	else
		return Rational( n, d);
}
Rational Rational::mult(Rational i) // This multiplys two rational numbers together
{
	int n = (m_a * i.m_a);
 	int d = (m_b * i.m_b);
	if(d==0)
	{
		std::cout << "Undefined" << std::endl;
		return Rational();
	}
	else
		return Rational( n, d);
}

