#include <iostream>
#include "rational.h"

using namespace std;

Rational Rational::sub(Rational i)
{
	int n = ( m_a * i.m_b) - ( m_b *i.m_a);
	int d = ( m_b * i.m_b);
	if(d==0)
	{
		std::cout << “Undefined” << std::endl;
		return Rational();
	}
	else
		return Rational( n, d);
} 
Rational Rational::div( Rational i)
{
	int n = m_a * i.m_b;
	int d = m_b * i.m_a;
	if(d==0)
	{
		std::cout << “Undefined” << std::endl;
		return Rational();
	}
	else
		return Rational( n, d);
}
void Rational::print(string sentence = “”);
{
	std::cout << sentence << m_a << “/“<< m_b << std::endl;
}
Rational::Rational()
{
	m_a = 0;
	m_b = 1;
}
Rational::Rational(int a, int b)
{
	m_a = a;
	m_b = b;
}
Rational Rational::sub(Rational i)
{
	int n ( m_a * i.m_b) + (b * i.m_a);
	int d (m_b * i.m_b);
	if(d==0)
	{
		std::cout << “Undefined” << std::endl;
		return Rational();
	}
	else
		return Rational( n, d);
}
Rational Rational::div(Rational i)
{
	int n = (m_a * i.m_b);
 	int d = (m_b * i.m_a);
	if(d==0)
	{
		std::cout << “Undefined” << std::endl;
	return Rational();
	}
	else
		return Rational( n, d);
}

