#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat() {
		m_limbs = 4;
		likes_biting = true;
		std::cout << "*cat constructor*\n";
	}
	~Cat() {
		std::cout << "*cat destructor*\n" << std::endl;
	}
	void Travel() override;
	void Speak() override;
protected:
	bool likes_biting;
};
