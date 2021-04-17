#pragma once

using namespace std;

class Soldier : Unit{
	public:
		Soldier(int&damage, int&health) : Unit(health){
			this->damage = damage;
		}
		int GetDamage(); // ����������� ������� ������� ������
		void Attck(Archer archer); // ������� �������, ��� ���� ������� ����� � ������������ ������� ������ �����������
		void Attck(Soldier soldier); // ������� �������, ��� ���� ������� ����� � ������������ ������� ������ �����������

	private:
		int damage;
};

