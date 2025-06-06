#pragma once
#include <iostream>

class Animal
{
public:
	//Animal() {}	//default constructor
	Animal() {		//constructor w/o parameters
		m_limbs = 0;
		m_ptr = new int(25);
		std::cout << "*animal constructor*\n" << std::endl;
	}
	Animal(int limb) {
		m_limbs = limb;
	}

	~Animal() {		//destructor - garbage collector
		std::cout << "*animal destructor*\n" << std::endl;
		delete m_ptr;
	}

	virtual void Travel();
	virtual void Speak() = 0;	// pure virtual function   // abstract method
	int GetLimbs() { return m_limbs; }
	void SetLimbs(int limbs) { m_limbs = limbs; }

protected:
	int m_limbs;
	int* m_ptr = nullptr;
};
