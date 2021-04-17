using System;

namespace task_6{
	class Program{
		public static void Main(string[] args){

            Warrior Alex = new Warrior();
            Wizard Din = new Wizard();
            IClass warrior = (IClass)Alex;//можно так

            Alex.Hit();
            Din.Hit();
            warrior.Hit();


            Console.ReadKey(true);
		}
	}
	interface IClass{
		//не возможна реализация
		void Hit();
        void WhichClass();
		int Damage(int damage);
	}
	class Warrior : IClass{
        public void Hit(){
            Console.WriteLine("I beat the sword");
        }
        public void WhichClass(){
			Console.WriteLine("I am a warrior");
		}
        public int Damage(int damage){
			return damage * 4;
		}
	}
	class Wizard : IClass{
        public void Hit(){
			Console.WriteLine("I am beating with magic");
		}
        public void WhichClass(){
			Console.WriteLine("I am a wizard");
		}
        public int Damage(int damage){
			return damage * 3;
		}
	}
}