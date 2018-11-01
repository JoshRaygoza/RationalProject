#include<iostream>
#include<string>
#include "rational.h"

int main()
{
	Rational i = Rational(5, 2);
	Rational n = Rational(7, 3);
	
	Rational z = i.add(n);
	
	z.print();

	z = i.sub(n);
	z.print();

	z = i.div(n);
	z.print();

	z = i.mult(n);
	z.print();
	
	return 0;
}
