#include "RPG.h"

void RPG::Read(ostream& ostream, istream& istream)
{
	Game::Read(ostream, istream);
	ostream << "Enter mods installed: ";
	istream >> mods;
}

void RPG::Write(ostream& ostream)
{
	Game::Write(ostream);
	ostream << "Mods: " << mods << endl;
}

eType RPG::GetType()
{
	return eType::RPG;
}