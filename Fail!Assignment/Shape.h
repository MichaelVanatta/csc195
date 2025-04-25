#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Shape {
public:
	Shape() {}
	~Shape() {}
	virtual float Area() = 0;
};
