#include "Game.h"

void Game::Read(ostream& ostream, istream& istream)
{
	ostream << "Enter the name of the game: ";
	istream >> gameName;

	ostream << "Enter the price of the game: ";
	istream >> gamePrice;
}

void Game::Write(ostream& ostream)
{
	ostream << "Name: " << gameName << endl;
	ostream << "Price: " << gamePrice << endl;
}

ostream& operator<<(ostream& ostream, Game& game)
{
	game.Write(ostream);
	return ostream;
}

istream& operator>>(istream& istream, Game& game)
{
	game.Read(cout, istream);
	return istream;
}

void Game::Read(ifstream& istream)
{
	istream >> gameName;
	istream >> gamePrice;
}

void Game::Write(ofstream& ostream)
{
	ostream << gameName << endl;
	ostream << gamePrice << endl;
}

ofstream& operator<<(ofstream& ostream, Game& game)
{
	game.Write(ostream);
	return ostream;
}

ifstream& operator>>(ifstream& istream, Game& game)
{
	game.Read(istream);
	return istream;
}