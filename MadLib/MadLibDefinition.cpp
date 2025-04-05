#include <iostream>
#include "MadLibDeclaration.h"
using namespace std;

void Madlib::getMadLib(string noun,string adjective,string animal)
{
	madLib = "One day, a " + noun + " decided to explore the " + adjective + " desert.";
	madLib += " Along the way, it encountered a " + animal + ", ";
	madLib += "which made the adventure even more exciting!";
}