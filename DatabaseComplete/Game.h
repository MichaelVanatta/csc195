#pragma once
#include "Enum.h"
#include <string>
#include <iostream>
#include <fstream>
#include <memory>
using namespace std;

class Game
{
public:
	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);
	virtual eType GetType() = 0;
	string GetName() { return gameName; }
	int GetPrice() { return gamePrice; }
	virtual void Read(ifstream& istream);
	virtual void Write(ofstream& ostream);
	friend istream& operator >> (istream& istream, Game& game);
	friend ostream& operator << (ostream& ostream, Game& game);
	friend ifstream& operator >> (ifstream& istream, Game& game);
	friend ofstream& operator << (ofstream& ostream, Game& game);
protected:
	string gameName;
	int gamePrice;
};