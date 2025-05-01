#pragma once
#include "Game.h"
#include "Survival.h"
#include "RPG.h"
#include <vector>

class Database
{
public:
	vector<Game*> objects;
	~Database() { for (Game* obj : objects) { delete obj; } }
	void Create(eType type);
	Game* Create(int type);
	void DisplayAll();
	void Display(const string& name);
	void Display(eType type);
	void Load(const string& filename);
	void Save(const string& filename);

};