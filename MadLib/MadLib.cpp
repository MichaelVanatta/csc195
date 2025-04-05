#include <iostream>
#include "MadLibDeclaration.h"
using namespace std;

int main()
{
    Madlib newMadLib;

    cout << "Enter a noun: ";
    cin >> newMadLib.noun;

    cout << "Enter an adjective: ";
    cin >> newMadLib.adjective;

    cout << "Enter an animal: ";
    cin >> newMadLib.animal;

    newMadLib.getMadLib(newMadLib.noun, newMadLib.adjective, newMadLib.animal);

    cout << newMadLib.madLib;
}