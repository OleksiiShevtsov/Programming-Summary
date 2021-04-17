using System;

namespace task_18
{
	class Program
	{
		public static void Main(string[] args)
		{
			BossMonster bossMons = new BossMonster("ALEX", 12, 40);
			bossMons.specialattack();
			bossMons.PrintMonster();
			
			Console.ReadKey(true);
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
		public void attack(){
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
		public void specialattack(){
			Console.WriteLine("attack: "+damage * 8);
		}
	}
}