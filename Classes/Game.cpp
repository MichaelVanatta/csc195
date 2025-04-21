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