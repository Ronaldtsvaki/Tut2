# include <iostream>
# include "Fraction.h"
using namespace std;


Fraction Multi(Fraction A, Fraction B)
{
	Fraction C;
	C.num = (A.num*B.num);
	C.den = (A.den *B.den);
	return C;
}
Fraction Div(Fraction A, Fraction B)
{

	Fraction C;
	C.num = (A.num*B.den);
	C.den = (A.den *B.num);
	return C;
}

Fraction Add(Fraction A, Fraction B)
{
	Fraction C;

	C.num = (A.num*B.den) + (B.num*A.den);
	C.den = A.den*B.den;

	return C;
}


Fraction Sub(Fraction A, Fraction B)
{
	Fraction C;

	C.num = (A.num*B.den) - (B.num*A.den);
	C.den = A.den*B.den;

	return C;
}
//Greatest common divisor function
int gcd(int a, int b)
{
	int c = a % b;     // Euclids Algorithm
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

// Function for printing simplified fractions  
void Print(Fraction A)
{
	int i = 0;
	int zz = A.num;
	int zy = A.den;
	int rem = zz%zy;//remainder
	int gcd1 = gcd(zz, zy);//gcd for numerator & denominator
	int gcd2 = gcd(rem, zy);//gcd for remainder and denominator


	if (zz > zy || (-1)*zz>zy || zz > (-1)*zy)// for counting how many times the denominator goes to te numerator if it an improper fraction
	{
		if (zz<0)
		{
			do
			{
				zz += zy;
				i++;
			} while (zz<0);
		}

		else
		{
			do
			{
				zz -= zy;
				i++;
			} while (zz>0);
		}
	}

	if ((i - 1) == 0)
	{

		cout << zz / gcd1 << "/" << zy / gcd1;
	}//it will print this,if it is not a mixed fraction
	else{

		cout << i - 1 << " " << rem / gcd2 << "/" << zy / gcd2;
	}
}
