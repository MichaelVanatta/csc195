#include <iostream>
//#include "Animal.h"	// child classes automatically include the parent class
#include "Cat.h"

using namespace std;

int main()
{
	Animal animal(4);	//allocated memory on stack - no 'new' keyword
	animal.Travel();

	Cat cat;
	cat.Travel();

	Animal* ptrAnimal = new Animal;
	(*ptrAnimal).Travel();
	ptrAnimal->Travel();	// this does the same thing

	Animal* ptrCat = new Cat;
	ptrCat->Travel();


	cout << animal.GetLimbs() << endl;

	{
		Animal* ptrAnim = new Animal;
	}
}