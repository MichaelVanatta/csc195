#include <iostream>
#include "Declaration.h"

//typedef double salary;     --Traditional C++ way
using salary = double;            //Modern C++ way

int main()
{
    salary wage_reception = 14.4;
    salary wage_analyst = 18.5;
    salary wage_engineer = 32.4;

    std::cout << "User Data Types\n";

    Sandwhich pastrami;
    pastrami.meat = Pastrami;
    pastrami.heatSandwhich();
    //pastrami.isHot = true;
    pastrami.weight = 1.0f;

    std::cout << "Size of Sandwhich: " << sizeof(Sandwhich) << std::endl;

}