#include <iostream>

int main()
{
    std::cout << "Data Types Program\n";
    
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of boolean: " << sizeof(bool) << std::endl;

    // Data Type Conversion
    
    // Implicit conversion - target data type has the capacity to store the original value
    int i = 5;
    float iflt = i;
    double idbl = iflt;

    // Explicit conversion - explicitly inform the compiler that "I want to do this converion"
    double jdbl = 32.269138570150174981;
    float jflt = (float)jdbl;   //Traditional C++ way
    jflt = static_cast<float>(jdbl);   //Modern C++ way