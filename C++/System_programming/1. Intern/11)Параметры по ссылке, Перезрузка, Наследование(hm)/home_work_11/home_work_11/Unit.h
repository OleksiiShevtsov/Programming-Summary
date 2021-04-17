#pragma once
#include "Soldier.h"
#include "Archer.h"

class Unit : Team{
	public:
		Unit(int& health);
		int GetHealth();  // уровень здоровья
		//Team GetTeam();   // Team - это команда за которую участвует юнит. Своих юнитов нельзя бить
		int GetId(); // идентификатор юнита
	private:
		int health;
		int Id;
		//Team team;
};

