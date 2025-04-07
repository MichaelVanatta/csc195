#include <iostream>
#include "MadLibDeclaration.h"
using namespace std;

void Madlib::getDesertMadLib(string noun,string verb,string animal)
{
	madLib = "One day, a " + noun + " decided to explore the " + verb + " River. Along the way, it encountered a " + animal + ", " + 
		"who helped it find the river.";
}

void Madlib::getHickoryMadLib(string noun, string verb, string animal)
{
	madLib = "Hickory dickory dock. The " + animal + " " + verb + " up the " + noun + ". The " + noun + " struck 1, the " + animal + " " + verb + 
		" down. Hickory dickory dock.";
}

void Madlib::getChickenMadLib(string noun, string verb, string animal)
{
	madLib = "Why did the " + animal + " " + verb + " the " + noun + "? To get to the other side.";
}