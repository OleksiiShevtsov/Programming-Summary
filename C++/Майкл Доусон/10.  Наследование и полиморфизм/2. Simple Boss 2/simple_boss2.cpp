//Демонстрация управления доступом при работе с наследованием
#include <iostream>
using namespace std;

class Enemy{
	public:
		Enemy();
		void Attack() const;
	protected:	
		int m_Damage;
};
Enemy::Enemy():
	m_Damage(10)
{cout <<"---costruc Enemy---"<< endl;}
void Enemy::Attack() const{
	cout <<"Attack inflicts "<< m_Damage <<" damage points!\n";
}

class Boss : public Enemy{//наследование
	public:
		Boss();
		void SpecalAttack() const;
	private:
		int m_DamageMultiplier;
};
Boss::Boss():
	m_DamageMultiplier(3)
{cout <<"---costruc Boss---"<< endl;}
void Boss::SpecalAttack() const{
	cout <<"Special Attack inflicts "<< (m_DamageMultiplier * m_Damage);
	cout <<" damage points\n";
}
int main(){
	cout <<"Creating an enemy.\n";
	
	Enemy enemy1;
	enemy1.Attack();
	
	cout <<"\nCreating a boss.\n";
	
	Boss boss1;
	boss1.Attack();
	boss1.SpecalAttack();
	return 0;
}
