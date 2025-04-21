#include "Database.h"

void Database::Create(eType type)
{
	Game* obj = nullptr;
	switch (type) {
	case eType::SURVIVAL:
		obj = new Survival();
		break;
	case eType::RPG:
		obj = new RPG();
		break;
	}
	obj->Read(std::cout, std::cin);
	objects.push_back(obj);
}

void Database::DisplayAll()
{
	for (Game* obj : objects) {
		obj->Write(cout);
		cout << "-------------------" << endl;
	}
}

void Database::Display(const string& name)
{
	for (Game* obj : objects) {
		if (obj->GetName() == name) {
			obj->Write(cout);
			cout << "-------------------" << endl;
		}
	}
}

void Database::Display(eType type)
{
	for (Game* obj : objects) {
		if (obj->GetType() == type) {
			obj->Write(cout);
			cout << "-------------------" << endl;
		}
	}
}