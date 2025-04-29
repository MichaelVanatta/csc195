#include "Fraction.h"
using namespace mathlib;

int main()
{
    Fraction<> fract1{ 15,5 };
    cout << fract1 << endl;
    
    Fraction<> fract2{ 15,6 };
    fract2.Simplify();
    cout << fract2 << endl;
    
    cout << fract1 << " == " << fract2 << " result: " << (fract1 == fract2) << endl;
    cout << fract1 << " > " << fract2 << " result: " << (fract1 > fract2) << endl;

    cout << fract1 << " + " << fract2 << " result: " << (fract1 + fract2) << endl;
    cout << fract1 << " * " << fract2 << " result: " << (fract1 * fract2) << endl;

    Fraction<> fraction3;
    cout << "input fraction (numerator denominator): \n";
    cin >> fraction3;
    cout << fraction3 << endl;
    cout << fraction3.ToDouble() << endl;
}