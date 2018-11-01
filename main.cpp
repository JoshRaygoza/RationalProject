#include<iostream>
#include<string>
#include "rational.h"
Rational getrat(std::string prompt, std::string dprompt);

int main()
{
	Rational i = Rational(5, 2);
	Rational n = Rational(7, 3);
	
	Rational a = i.add(n);
	
	a.print();

	Rational s = i.sub(n);
	s.print();

	Rational d = i.div(n);
	d.print();

	Rational m = i.mult(n);
	m.print();
	
	return 0;
}

Rational getrat(string nprompt , string dprompt)
{
	std::cout << nprompt;
	int n;
	std::cin >> n;
	
	std::cout << dprompt;
	int d;
	std::cin>> d;

	return Rational(n,d);
}
