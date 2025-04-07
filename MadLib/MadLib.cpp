#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MadLibDeclaration.h"
using namespace std;

int main()
{
    Madlib newMadLib;

    cout << "Enter a noun: ";
    cin >> newMadLib.noun;

    cout << "Enter a verb: ";
    cin >> newMadLib.verb;

    cout << "Enter an animal: ";
    cin >> newMadLib.animal;

    srand(time(0));
    int randNum = rand() % 3 + 1;

    if (randNum == 1)
    {
        newMadLib.getDesertMadLib(newMadLib.noun, newMadLib.verb, newMadLib.animal);
    } else if (randNum == 2)
    {
        newMadLib.getHickoryMadLib(newMadLib.noun, newMadLib.verb, newMadLib.animal);
    } else
    {
        newMadLib.getChickenMadLib(newMadLib.noun, newMadLib.verb, newMadLib.animal);
    }

    cout << "\n------------------------------------------------------------\n";
    cout << newMadLib.madLib;
    cout << "\n------------------------------------------------------------\n";
}