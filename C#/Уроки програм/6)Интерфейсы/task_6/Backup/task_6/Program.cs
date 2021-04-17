using System;

namespace task_6{
	class Program{
		public static void Main(string[] args){
			
			
			
			Console.ReadKey(true);
		}
	}
	interface IClass{
		//не возможна реализация
		void Hit();
		Void whichClass();
		int Damage(int damage);
	}
	class Warrior : IClass{
		void Hit(){
			Console.WriteLine("I beat the sword");
		}
		Void whichClass(){
			Console.WriteLine("I am a warrior");
		}
		int Damage(int damage){
			return damage * 4;
		}
	}
	class Wizard : IClass{
		void Hit(){
			Console.WriteLine("I am beating with magic");
		}
		Void whichClass(){
			Console.WriteLine("I am a wizard");
		}
		int Damage(int damage){
			return damage * 3;
		}
	}
}