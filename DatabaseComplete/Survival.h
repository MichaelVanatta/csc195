#pragma once
#include "Game.h"

class Survival : public Game
{
public:
	void Read(ostream& ostream, istream& istream) override;
	void Write(ostream& ostream) override;
	eType GetType() override;
	void Read(ifstream& istream) override;
	void Write(ofstream& ostream) override;
protected:
	int days;
};
