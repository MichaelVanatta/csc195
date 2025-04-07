#include <iostream>
#include "MadLibDeclaration.h"
using namespace std;

void Madlib::getMadLib(string noun,string adjective,string animal)
{
	madLib = "\n---------------------------------------------------------------------\n";
	madLib += "One day, a " + noun + " decided to explore the " + adjective + " desert.";
	madLib += " Along the way, it encountered a " + animal + ", ";
	madLib += "which made the adventure \neven more exciting!";
	madLib += "\n--------------------------------------------------------------------\n";
}