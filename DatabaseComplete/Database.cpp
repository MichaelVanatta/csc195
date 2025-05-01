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
	cin >> *obj;
	objects.push_back(obj);
}

Game* Database::Create(int type)
{
	Game* obj = nullptr;
	switch (eType(type)) {
	case eType::SURVIVAL:
		obj = new Survival();
		break;
	case eType::RPG:
		obj = new RPG();
		break;
	}
	return obj;
}

void Database::DisplayAll()
{
	for (Game* obj : objects) {
		cout << *obj;
		cout << "-------------------" << endl;
	}
}

void Database::Display(const string& name)
{
	for (Game* obj : objects) {
		if (obj->GetName() == name) {
			cout << *obj;
			cout << "-------------------" << endl;
		}
	}
}

void Database::Display(eType type)
{
	for (Game* obj : objects) {
		if (obj->GetType() == type) {
			cout << *obj;
			cout << "-------------------" << endl;
		}
	}
}

void Database::Load(const string& filename)
{
	ifstream input(filename);
	if (input.is_open())
	{
		objects.clear();
		while (!input.eof())
		{
			int type;
			input >> type;
			Game* game = Create(type);
			input >> *game;
			objects.push_back(game);
		}
	}
}

void Database::Save(const string& filename)
{
	ofstream output(filename);
	if (output.is_open())
	{
		for (Game* obj : objects)
		{
			output << int(obj->GetType()) << endl;
			output << *obj;
		}
	}
}