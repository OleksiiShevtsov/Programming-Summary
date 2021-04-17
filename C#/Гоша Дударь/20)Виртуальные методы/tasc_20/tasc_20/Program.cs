using System;

namespace task_18
{
	class Program
	{
		public static void Main(string[] args)
		{
			BossMonster bossMons = new BossMonster("ALEX", 20, 20);
			Monster mons = new Monster("ALEX2", 10, 10);
			bossMons.attack();
			mons.attack();
		
			Console.ReadLine();
		}
	}
	class Monster{
		public Monster(string name, int damage, int health){
			this.name = name;
			this.damage = damage;
			this.health = health;
		}
		protected string name;
		protected int damage;
		protected int health;
		//виртуальная функция 
		public virtual void attack(){
			Console.WriteLine("attack: "+damage * 3);
		}
		public void PrintMonster(){
			Console.WriteLine("Name: "+name);
			Console.WriteLine("Health: "+health);
			Console.WriteLine("Damage: "+damage);
		}
	}
	class BossMonster : Monster{
		public BossMonster(string name, int damage, int health):
			//Вызов конструктора базового класса из конструктора класса-наследника. 
			base(name, damage, health){}
		//переопределенная функция 
		public override void attack(){
			//виртуальная функция 
			base.attack();
			Console.WriteLine("attack: "+damage * 8);
		}
	}
}