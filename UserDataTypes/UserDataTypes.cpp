#include <iostream>
#include "Declaration.h"

int main()
{
    std::cout << "User Data Types\n";

    Sandwhich pastrami;
    pastrami.meat = Pastrami;
    pastrami.heatSandwhich();
    //pastrami.isHot = true;
    pastrami.weight = 1.0f;

    std::cout << sizeof(Sandwhich) << std::endl;
}