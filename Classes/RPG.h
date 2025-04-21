#pragma once
#include "Game.h"

class RPG : public Game
{
public:
	void Read(ostream& ostream, istream& istream) override;
	void Write(ostream& ostream) override;
	eType GetType() override;
protected:
	int mods;
};