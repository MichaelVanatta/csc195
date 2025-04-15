#pragma once

class Animal
{
public:
	//Animal() {}	//default constructor
	Animal() {		//constructor w/o parameters
		m_limbs = 0;
		m_ptr = new int(25);
	}
	Animal(int limb) {
		m_limbs = limb;
	}

	~Animal() {		//destructor - garbage collector
		delete m_ptr;
	}

	virtual void Travel();
	int GetLimbs() { return m_limbs; }
	void SetLimbs(int limbs) { m_limbs = limbs; }

protected:
	int m_limbs;
	int* m_ptr = nullptr;
};
