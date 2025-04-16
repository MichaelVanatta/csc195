//#include <iostream>
//#include "Animal.h"	// child classes automatically include the parent class
#include "Cat.h"
#include "Snake.h"
#include <vector>

using namespace std;

int main()
{
	//Animal animal(4);	//allocated memory on stack - no 'new' keyword
	//animal.Travel();

	//Animal* ptrAnimal = new Animal;
	//(*ptrAnimal).Travel();
	//ptrAnimal->Travel();	// this does the same thing

	//Animal* ptrCat = new Cat;
	//ptrCat->Travel();


	//cout << animal.GetLimbs() << endl;

	//{
	//	Animal* ptrAnim = new Animal;
	//}

	Cat cat;
	cat.Travel();
	cat.Speak();

	cout << "---------------" << endl;

	Snake python(false,0);
	python.Travel();
	python.Speak();


	// containers to store class instances
	vector<Animal*> animals;
	animals.push_back(new Cat);
	animals.push_back(new Cat);
	animals.push_back(new Snake);
	
	cout << "---------------" << endl;
	// iterate to implement methods
	for (Animal* ani : animals) {
		ani->Travel();
		ani->Speak();
	}

	for (Animal* ani : animals) {
		delete ani;	//deallocating heap memory for each instance
	}

	animals.clear();	//eliminating pointers in vector that are no longer pointing to anything

}