// Демонстрирует динамический вызов функций-членов
#include <iostream>
using namespace std;

class Enemy{
	public:
		Enemy(int damage = 10);
		virtual ~Enemy();
		void virtual Attack() const;
	protected:
		int* m_pDamage;  
};

Enemy::Enemy(int damage){
	m_pDamage = new int(damage);
}
Enemy::~Enemy(){
	cout <<"An Enemy destructor. deleting m_pDamage\n";
	delete m_pDamage;
	m_pDamage = 0;
}
void Enemy::Attack() const{
	cout <<"An enemy attack and inflicts "<< *m_pDamage <<" damage points.";
}

class Boss : public Enemy{
	public:
		Boss(int multiplier = 30);
		virtual ~Boss();
		void virtual Attack() const;
	protected:
		int* m_pMtiplier;
};
Boss::Boss(int multiplier){
	m_pMtiplier = new int(multiplier);
}
Boss::~Boss(){
	cout <<"An Boss destructor. deleting m_pMtiplier\n";
	delete m_pMtiplier;
	m_pMtiplier = 0;
}
void Boss::Attack() const{
	cout <<"An boss attack and inflicts "<< (*m_pDamage) * (*m_pMtiplier) <<" damage points.";
}
int main(){
	cout <<"Calling Attack() on boss object through pointer to Enemy:\n";
	Enemy* pBadGuy = new Boss();
	pBadGuy->Attack();
	cout <<"\n\nDeleting pointer to Enemy:\n";
	//при динамическом выдилении памяти для обекта нужно очищать память вручную
	//вручную вызывать деструктары
	delete pBadGuy;
	pBadGuy = 0;
	return 0;
}
