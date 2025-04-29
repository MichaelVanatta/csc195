#include "Fraction.h"

namespace mathlib
{
	const float Fraction<>::operator+(const Fraction& fract)
	{
		return (float(numerator) / float(denominator)) + (float(fract.numerator) / float(fract.denominator));
	}
	const float Fraction<>::operator-(const Fraction& fract)
	{
		return (float(numerator) / float(denominator)) - (float(fract.numerator) / float(fract.denominator));
	}
	const float Fraction<>::operator*(const Fraction& fract)
	{
		return (float(numerator) / float(denominator)) * (float(fract.numerator) / float(fract.denominator));
	}
	const float Fraction<>::operator/(const Fraction& fract)
	{
		return (float(numerator) / float(denominator)) / (float(fract.numerator) / float(fract.denominator));
	}

	const string Fraction<>::operator==(const Fraction& fract)
	{
		if ((float(numerator) / float(denominator)) == (float(fract.numerator) / float(fract.denominator)))
		{
			return "They are equal";
		}
		else
		{
			return "Not equal";
		}
	}
	const string Fraction<>::operator!=(const Fraction& fract)
	{
		if ((float(numerator) / float(denominator)) != (float(fract.numerator) / float(fract.denominator)))
		{
			return "Not equal";
		}
		else
		{
			return "They are equal";
		}
	}
	const string Fraction<>::operator<(const Fraction& fract)
	{
		if ((float(numerator) / float(denominator)) < (float(fract.numerator) / float(fract.denominator)))
		{
			return "Less than";
		}
		else if ((numerator / denominator) == (fract.numerator / fract.denominator))
		{
			return "Equal";
		}
		else
		{
			return "Greater than";
		}
	}
	const string Fraction<>::operator>(const Fraction& fract)
	{
		if ((float(numerator) / float(denominator)) > (float(fract.numerator) / float(fract.denominator)))
		{
			return "Greater than";
		}
		else if ((numerator / denominator) == (fract.numerator / fract.denominator))
		{
			return "Equal";
		}
		else
		{
			return "Less than";
		}
	}
	const string Fraction<>::operator<=(const Fraction& fract)
	{
		if ((float(numerator) / float(denominator)) <= (float(fract.numerator) / float(fract.denominator)))
		{
			return "Less than or equal to";
		}
		else
		{
			return "Greater than or equal to";
		}
	}
	const string Fraction<>::operator>=(const Fraction& fract)
	{
		if ((float(numerator) / float(denominator)) >= (float(fract.numerator) / float(fract.denominator)))
		{
			return "Greater than or equal to";
		}
		else
		{
			return "Less than or equal to";
		}
	}

	ostream& operator << (ostream& ostream, const Fraction<>& fract)
	{
		ostream << fract.numerator << "/" << fract.denominator;
		return ostream;
	}
	ostream& operator << (ostream& ostream, const string element)
	{
		ostream << element;
		return ostream;
	}
	const void operator >> (istream& istream, Fraction<>& fract)
	{
		istream >> fract.numerator >> fract.denominator;
	}

	void Fraction<>::Simplify()
	{
		int num = numerator;
		int den = denominator;
		bool quit = false;
		while (!quit)
		{
			if ((num % 2 == 0) && (den % 2 == 0))
			{
				num = num / 2;
				den = den / 2;
				continue;
			}
			else if ((num % 3 == 0) && (den % 3 == 0))
			{
				num = num / 3;
				den = den / 3;
				continue;
			}
			else if ((num % 4 == 0) && (den % 4 == 0))
			{
				num = num / 4;
				den = den / 4;
				continue;
			}
			else if ((num % 5 == 0) && (den % 5 == 0))
			{
				num = num / 5;
				den = den / 5;
				continue;
			}
			else if ((num % 6 == 0) && (den % 6 == 0))
			{
				num = num / 6;
				den = den / 6;
				continue;
			}
			else if ((num % 7 == 0) && (den % 7 == 0))
			{
				num = num / 7;
				den = den / 7;
				continue;
			}
			else if ((num % 8 == 0) && (den % 8 == 0))
			{
				num = num / 8;
				den = den / 8;
				continue;
			}
			else if ((num % 9 == 0) && (den % 9 == 0))
			{
				num = num / 9;
				den = den / 9;
				continue;
			}
			else
			{
				quit = true;
			}
		}
		numerator = num;
		denominator = den;
	}
	const double Fraction<>::ToDouble()
	{
		return (double(numerator) / double(denominator));
	}
}