#pragma once
#include "Animal.h"

class Snake : public Animal
{
public:
	Snake(){}
	Snake(bool venom, int limbs) : Animal(limbs) {
		//m_limbs = 0;
		has_venom = venom;
		std::cout << "*snake constructor*\n";
	}
	~Snake() {
		std::cout << "*snake destructor*\n" << std::endl;
	}
	void Travel() override;
	void Speak() override;
protected:
	bool has_venom;
};