#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
using namespace std;

void arrayPractice()
{
    // Creates an array for the days of the week. Goes through a loop which counts the day and adds the day to a string to be printed out.
    string daysOfWeek[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
    int numDays = 0;
    string days;
    for (string dayOfWeek : daysOfWeek)
    {
        numDays += 1;
        days = days + ", " + dayOfWeek;
    }
    cout << "Number of Days: " + to_string(numDays) << endl;
    cout << "Days: " + days << endl;
}

void vectorPractice()
{
    // Creates a vector containing numbers. Adds 6 and 7 then removes 7. Iterates through the vector, printing each element.
    vector<int> myVector = { 1,2,3,4,5 };
    myVector.push_back(6);
    myVector.push_back(7);
    myVector.pop_back();
    for (int vector : myVector)
    {
        cout << vector << endl;
    }
}

void listPractice()
{

    // Creates a list containing fruit. Adds to more fruit and removes one that was already there. Iterates through the list, printing each element.
    list<string> fruits = { "Peach","Mango","Tangerine" };
    fruits.push_front("Durian");
    fruits.push_back("Jackfruit");
    fruits.remove("Peach");
    for (string fruit : fruits)
    {
        cout << fruit << endl;
    }
}

void mapPractice()
{
    // Creates a map containing grocery items and the amounts. Changes one of the amounts. Iterates through the map, printing the key and value.
    map<string, int> groceries = { {"Sugar",3},{"Celery",10},{"Coffee",12} };
    groceries["Coffee"] = 390;
    for (auto pair : groceries) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main()
{
    arrayPractice();

    cout << "---------------------------------------------" << endl;

    vectorPractice();

    cout << "---------------------------------------------" << endl;

    listPractice();

    cout << "---------------------------------------------" << endl;

    mapPractice();
}