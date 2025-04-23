#pragma once
#include <iostream>
#include <string>
using namespace std;
// it's possible class name is similar to built-in classes
// use namespace wrappers to identify customized classes

namespace ost
{
	class Point
	{
	public:
		float x, y;

	public:
		//Point() { x = 0; y = 0; }	// Traditional way
		Point() : x{0}, y{0} {}		// Modern way
		Point(float x, float y) : x{x}, y{y} {}

		void Write(ostream& ostream);

		void Add(Point& point);
		Point& operator + (Point& point);
		Point operator * (float s);
	};
}

