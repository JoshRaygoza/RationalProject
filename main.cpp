/*
Date Created: 11/1/2018
Purpose: This program uses a class called rational numbers and adds, subtracts, multiplies, and divides them.
*/
#include<iostream>
#include<string>
#include "rational.h"
Rational getrat(std::string nprompt, std::string dprompt);

int main()
{
	Rational i = getrat("Please enter your numerator: ", "Please enter your denominator: ");// this prompts the user for a rational number 
	Rational n = getrat("Please enter your numerator: ", "Please enter your denominator: "); 
	
	Rational a = i.add(n);// this adds two rational numbers
	std::cout << "The numbers added are: ";
	a.print();

	Rational s = i.sub(n);// this subtracts two rational numbers
	std::cout << "The numbers subtracted are: ";
	s.print();

	Rational d = i.div(n);// this divides two rational numbers
	std::cout << "The numbers divided are: ";
	d.print();

	Rational m = i.mult(n);// this multipiles two rational numbers
	std::cout << "The numbers multiplied are: ";
	m.print();
	
	return 0;
}

Rational getrat(std::string nprompt , std::string dprompt)// This function prompts for a numberator and a denominator
{
	std::cout << nprompt;
	int n;
	std::cin >> n;
	
	std::cout << dprompt;
	int d;
	std::cin>> d;

	return Rational(n,d);
}
