
#ifndef Fraction_H
#define Fraction_H

class Fraction

{
private:
	int numerator;
	int denominator;

public:
	Fraction(int num = 1, int den = 1) // constructor  includes accessors 
	{
		numerator = num;
		denominator = den;
	};
	~Fraction();     // Destructor
	int num;
	int den;
	int gcd(int, int);                // compute the greatest common devisor
	Fraction Add(Fraction, Fraction);   // Fraction methods
	Fraction Sub(Fraction, Fraction);   // Fraction method receives fraction objects as arguments
	Fraction Multi(Fraction, Fraction);
	Fraction Div(Fraction, Fraction);
	void print(Fraction);
};
#endif