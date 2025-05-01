#include "Survival.h"

void Survival::Read(ostream& ostream, istream& istream)
{
	Game::Read(ostream, istream);
	ostream << "Enter days survived: ";
	istream >> days;
}

void Survival::Write(ostream& ostream)
{
	Game::Write(ostream);
	ostream << "Days: " << days << endl;
}

eType Survival::GetType()
{
	return eType::SURVIVAL;
}

void Survival::Read(ifstream& istream)
{
	Game::Read(istream);
	istream >> days;
}

void Survival::Write(ofstream& ostream)
{
	Game::Write(ostream);
	ostream << days << endl;
}