#include<iostream>
#include<string>
#include "rational.h"

int main()
{
	Rational i = Rational(2, 2);
	Rational n = Rational(3, 3);
	
	Rational z = i.add(n);
	
	z.print();

	return 0;
}
