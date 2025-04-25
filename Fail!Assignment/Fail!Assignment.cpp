#include <iostream>
#include <vector>
#include <typeinfo>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main() {
	vector<Shape*> shapes;
	shapes.push_back(new Circle(3.0f));
	shapes.push_back(new Rectangle(4.0f,4.0f));
	for (Shape* shape : shapes)
	{
		cout << "Area: " << shape->Area() << endl;
		
		if (static_cast<Circle*>(shape))
		{
			Circle* c = dynamic_cast<Circle*>(shape);
			cout << "Radius: " << c->GetRadius() << endl;
		}
	}
	
	for (Shape* shape : shapes)
	{
		delete shape;
	}

	shapes.clear();

	return 0;
}