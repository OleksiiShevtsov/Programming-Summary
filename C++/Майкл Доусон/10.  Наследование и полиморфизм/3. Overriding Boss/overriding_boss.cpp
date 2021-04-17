//Демонстрация вызова и переопределения функций-членов базового класса  
#include <iostream>
using namespace std;

class Enemy{
	public:
		Enemy(int damage = 10);
		//функция создается как виртуальная для последующего переопределения
		void virtual Taunt() const;
		//функция создается как виртуальная для последующего переопределения
		void virtual Attack() const;
	private:	
		int m_Damage;
};
Enemy::Enemy(int damage):
	m_Damage(damage)
{cout <<"---costructor Enemy---"<< endl;}
void Enemy::Taunt() const{
	cout <<"The enemy says he will fight you.\n";
}
void Enemy::Attack() const{
	cout <<"Attack! Inflicts "<< m_Damage <<" damage points.";
}

class Boss : public Enemy{//наследование
	public:
		Boss(int damage = 30);
		//использование ключевого слова virtual опционально  
		void virtual Taunt() const;
		//использование ключевого слова virtual опционально
		void virtual Attack() const;
};
Boss::Boss(int damage):
	Enemy(damage)// вызов конструктора базового класса с аргументом 
{cout <<"---costructor Boss---"<< endl;}

// переопределение функции-члена базового класса
void Boss::Taunt() const{
	cout <<"The boss says he will end your pitiful existence.\n";
}

// переопределение функции-члена базового класса
void Boss::Attack() const{
	Enemy::Attack();// вызов функции-члена базового класса
	cout <<" And laughs heartily at you.\n";
}
int main(){
	cout <<"Enemy object:\n";
	
	Enemy anEnemy;
	anEnemy.Taunt();
	anEnemy.Attack();
	
	cout <<"\n\nEnemy object:\n";
	
	Boss aBoss;
	aBoss.Taunt();
	aBoss.Attack();
	return 0;
}
