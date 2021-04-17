#pragma once

using namespace std;

class Soldier : Unit{
	public:
		Soldier(int&damage, int&health) : Unit(health){
			this->damage = damage;
		}
		int GetDamage(); // повреждения которые наносит солдат
		void Attck(Archer archer); // атакует лучника, при этом уровень жизни у атакованного лучника должен уменьшаться
		void Attck(Soldier soldier); // атакует солдата, при этом уровень жизни у атакованного солдата должен уменьшаться

	private:
		int damage;
};

