using System;

namespace task_22{
	class Program{
		public static void Main(string[] args){
			Orc orc = new Orc("Tral");
			orc.PrintName();
			orc.PrintGreeting();
			orc.PrintAbility();
			
			Elf elf = new Elf("Ella");
			elf.PrintName();
			elf.PrintGreeting();
			elf.PrintAbility();
			
			
			Console.ReadKey(true);
		}
	}
	interface IRace{
		//наследник может унаследоваться только 
		//от нескольких интерфейсов (в отличае с++)
		//-Нельзя реализовать члены данных но можно 
		//реализовывать их свойства
		//-Наследник должен реализовать все 
		//все методы интерфейса 
		//-Не имеет конструктора
		//-Не имеет модификаторов доступа у методов
		void PrintName();
		void PrintGreeting();
	}
	interface IRaceAbility{
		void PrintAbility();
	}
	class Orc : IRace, IRaceAbility{
		private string nameOrc;
		public Orc(string nameOrc){
			this.nameOrc = nameOrc;
		}
		public void PrintName(){
			Console.WriteLine("Ork name: "+nameOrc);
		}
		public void PrintGreeting(){
			Console.WriteLine("Hello I am orc!");
		}
		public void PrintAbility(){
			Console.WriteLine("I am strong");
		}
	}
	class Elf : IRace, IRaceAbility{
		private string nameElf;
		public Elf(string nameElf){
			this.nameElf = nameElf;
		}
		public void PrintName(){
			Console.WriteLine("Elf name: "+nameElf);
		}
		public void PrintGreeting(){
			Console.WriteLine("Hello I am elf!");
		}
		public void PrintAbility(){
			Console.WriteLine("I'm nimble");
		}
	}
}