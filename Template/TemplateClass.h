#pragma once
#include <iostream>
#include <string>
using namespace std;

template<typename T = int>
class TemplateClass
{
private:
	T x, y;
public:
	TemplateClass() : x{0}, y{0} {}
	TemplateClass(T x, T y) : x{x}, y{y} {}

};

template<typename T, unsigned int Size>
class Array
{
private:
	T m_elements[Size];
public:
	T& operator [] (int position) { return m_elements[position]; }
};
