#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace mathlib
{
	template<typename N = int,typename D = int> class Fraction
	{
	public:
		N numerator;
		D denominator;
		Fraction() : numerator { 1 }, denominator{ 1 }{}
		Fraction(N num, D den) : numerator{ num }, denominator{ den }
		{
			if (den == 0) { denominator = 1; }
		}

		const float operator + (const Fraction& fract);
		const float operator - (const Fraction& fract);
		const float operator * (const Fraction& fract);
		const float operator / (const Fraction& fract);

		const string operator == (const Fraction& fract);
		const string operator != (const Fraction& fract);
		const string operator < (const Fraction& fract);
		const string operator > (const Fraction& fract);
		const string operator <= (const Fraction& fract);
		const string operator >= (const Fraction& fract);

		friend ostream& operator << (ostream& ostream, const Fraction& fract);
		friend ostream& operator << (ostream& ostream, const string element);
		const friend void operator >> (istream& istream, Fraction& fract);

		void Simplify();
		const double ToDouble();
	};
}