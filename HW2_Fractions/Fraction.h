#pragma once
#include <iostream>
class Fraction
{
public:
	Fraction(int numerator, int denominator);
	Fraction(Fraction& other);
	int getNumerator();
	int getDenominator();
		
	Fraction operator+(Fraction& other);
	Fraction operator-(Fraction& other);
	Fraction operator*(Fraction& other);
	Fraction operator/(Fraction& other);
	
private:
	int _numerator;
	int _denominator;
};


