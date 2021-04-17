#include <iostream>
using namespace std;

//class Enemy
class Enemy{
	public:
		int m_Damage;
		Enemy(int damage):
			m_Damage(damage)
		{}
		void SetEnemy(){
			cout <<"m_Damage: "<< m_Damage <<" - "<< this << endl;
		}
		Enemy& operator=(const Enemy& eEnemy){
			this->m_Damage = eEnemy.m_Damage;
			return *this;
		}
		
};

//class Boss
class Boss : public Enemy{
	public:
		Boss(int damage):
			Enemy(damage)
		{}
		Boss& operator=(const Boss& eBoss){
			Enemy::operator=(eBoss)
			return *this;
		}
		//??????????????????
};

int main(){


	return 0;
}
