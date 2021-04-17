using System;

namespace task_21{
	class Program{
		public static void Main(string[] args){
			Orc orc = new Orc("Tral");
			orc.PrintName();
			
			Elf elf = new Elf("Ella");
			elf.PrintName();
			
			
			Console.ReadKey(true);
		}
	}
	abstract class Race{
		//можно сделать абстрактными свойства
		//а в классе наследнике сделать реализацию 
		//свойств {get; set;}
		protected string name{get; set;}
		public Race(string name){
			this.name = name;
		}
		//в классе наследнике абязательно 
		//должна быть реализация и нельзя 
		//использывать - base
		public abstract void PrintName();
	}
	class Orc : Race{
		public Orc(string name):base(name){}
		public override void PrintName(){
			Console.WriteLine("Ork name: "+name);
		}
	}
	class Elf : Race{
		public Elf(string name):base(name){}
		public override void PrintName(){
			Console.WriteLine("Elf name: "+name);
		}
	}
}