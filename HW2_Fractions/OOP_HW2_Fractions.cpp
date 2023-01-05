#include <iostream>
#include "Fraction.h"


int main ()  {
	std::cout << "HW2_Fractions" << std::endl;
	Fraction f1(3, 4);
	Fraction f2(1, 2);
	Fraction result (0,1);
	result = f1 + f2;	
	std::cout << "First fraction = " << f1.getNumerator() << "/" << f1.getDenominator() << std::endl;
	std::cout << "Second fraction = " << f2.getNumerator() << "/" << f2.getDenominator() << std::endl;
	std::cout << "Result of composition = " << result.getNumerator() << "/" << result.getDenominator() << std::endl;
	
	result = f1 - f2;
	std::cout << "Result of subraction = " << result.getNumerator() << "/" << result.getDenominator() << std::endl;
	
	result = f1 * f2;
	std::cout << "Result of multiplication = " << result.getNumerator() << "/" << result.getDenominator() << std::endl;
	
	result = f1 / f2;
	std::cout << "Result of division = " << result.getNumerator() << "/" << result.getDenominator() << std::endl;

	return 0;
}