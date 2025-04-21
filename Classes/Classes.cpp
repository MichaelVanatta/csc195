#include <iostream>
#include "Survival.h"
#include "RPG.h"
#include "Database.h"

int main()
{
    Database database;

    bool quit = false;
    while (!quit)
    {
        int choice;
        cout << "1: Create\n2: Display All\n3: Display by Name\n4: Display by Type\n5: Quit\n";
        cin >> choice;
        cout << "-------------------" << endl;

        switch (choice)
        {
            case 1:
            {
                int e;
                cout << "Enter the type of game (0 for Survival, 1 for RPG): ";
                cin >> e;

                switch (e)
                {
                    case 0:
                        database.Create(eType::SURVIVAL);
                        break;
                    case 1:
                        database.Create(eType::RPG);
                        break;
                }
                cout << "-------------------" << endl;
                break;
            }
            case 2:
            {
                database.DisplayAll();
                break;
            }
            case 3:
            {
                string findGameName = "";
                cout << "Enter the name of the game you wish to find: ";
                cin >> findGameName;
                database.Display(findGameName);
                break;
            }
            case 4:
            {
                int t;
                cout << "Enter type (0 for Survival, 1 for RPG): ";
                cin >> t;
                database.Display(static_cast<eType>(t));
                break;
            }
            case 5:
            {
                quit = true;
                break;
            }
        }
    }
}