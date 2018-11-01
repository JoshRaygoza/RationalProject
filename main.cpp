#include<iostream>
#include<string>
#include "rational.h"
Rational getrat(std::string nprompt, std::string dprompt);

int main()
{
	Rational i = getrat("Please enter your numerator: ", "Please enter your denominator: ");
	Rational n = getrat("Please enter your numerator: ", "Please enter your denominator: "); 
	
	Rational a = i.add(n);
	std::cout << "The numbers added are: ";
	a.print();

	Rational s = i.sub(n);
	std::cout << "The numbers subtracted are: ";
	s.print();

	Rational d = i.div(n);
	std::cout << "The numbers divided are: ";
	d.print();

	Rational m = i.mult(n);
	std::cout << "The numbers multiplied are: ";
	m.print();
	
	return 0;
}

Rational getrat(std::string nprompt , std::string dprompt)
{
	std::cout << nprompt;
	int n;
	std::cin >> n;
	
	std::cout << dprompt;
	int d;
	std::cin>> d;

	return Rational(n,d);
}
