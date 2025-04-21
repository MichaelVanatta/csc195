#pragma once
#include "Enum.h"
#include <string>
#include <iostream>
using namespace std;

class Game 
{
public:
	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);
	virtual eType GetType() = 0;
	string GetName() { return gameName; }
	int GetPrice() { return gamePrice; }
protected:
	string gameName;
	int gamePrice;
};