#pragma once
#include "Soldier.h"
#include "Archer.h"

class Unit : Team{
	public:
		Unit(int& health);
		int GetHealth();  // ������� ��������
		//Team GetTeam();   // Team - ��� ������� �� ������� ��������� ����. ����� ������ ������ ����
		int GetId(); // ������������� �����
	private:
		int health;
		int Id;
		//Team team;
};

