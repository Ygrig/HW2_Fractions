#include "Fraction.h"
#include <iostream>

Fraction::Fraction (int numerator, int denominator) : _numerator(numerator), _denominator(denominator) {}

Fraction::Fraction( Fraction& other) : _numerator(other._numerator), _denominator(other._denominator) {}

int Fraction::getNumerator()  {
	return _numerator;
}

int Fraction::getDenominator() {
	return _denominator;
}

Fraction Fraction::operator+(Fraction& other) {
	Fraction result ((_numerator * other._denominator + _denominator * other._numerator), ( _denominator * other._denominator));
	return result;
}

Fraction Fraction::operator-(Fraction& other) {
	Fraction result((_numerator * other._denominator - _denominator * other._numerator), (_denominator * other._denominator));
	return result;
}

Fraction Fraction::operator*(Fraction& other) {
	Fraction result((_numerator * other._numerator), (_denominator * other._denominator));
	return result;
}

Fraction Fraction::operator/(Fraction& other) {
	Fraction result((_numerator * other._denominator) , (_denominator * other._numerator));
	return result;
}
