#include "Point.h"
using namespace ost;

// operator overloads outside a class requires the right and left sides of the symbol as parameters. Left side is the instance that we are in
//Point& operator + (Point& p1, Point& p2) 
//{
//	Point point;
//	point.x = p1.x += p2.x;
//	point.y = p1.y += p2.y;
//	return point;
//}

//void operator << (ostream& ostream,Point p)
//{
//	ostream << p.x << " : " << p.y << endl;
//}

int main()
{
	Point point1(10,14);
	point1.Write(cout);

	Point point2(5,8);
	//point1.Add(point2);	---   Instead of a method call
	Point point3 = (point1 + point2) * 3.0f;		// syntactical sugar(looks better), gives operators user-defined meaning

	//point3.Write(cout);
	cout << point3 << point2;
}