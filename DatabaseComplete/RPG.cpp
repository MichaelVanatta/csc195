#include "RPG.h"

void RPG::Read(ostream& ostream, istream& istream)
{
	Game::Read(ostream, istream);
	ostream << "Enter hours played: ";
	istream >> hours;
}

void RPG::Write(ostream& ostream)
{
	Game::Write(ostream);
	ostream << "Hours: " << hours << endl;
}

eType RPG::GetType()
{
	return eType::RPG;
}

void RPG::Read(ifstream& istream)
{
	Game::Read(istream);
	istream >> hours;
}

void RPG::Write(ofstream& ostream)
{
	Game::Write(ostream);
	ostream << hours << endl;
}