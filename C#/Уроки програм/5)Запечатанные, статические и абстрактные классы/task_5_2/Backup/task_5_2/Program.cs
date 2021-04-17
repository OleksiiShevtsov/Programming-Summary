using System;
namespace task_5_2{
	class Program{
		public static void Main(string[] args){
			
			Race Tral = new Orc();
			Race Era = new Elf();
			
			Console.WriteLine(Tral.Damage(10));
			Console.WriteLine(Era.Damage(10));
		
			Console.ReadKey(true);
		}
	}
	public abstract class Race{
		public virtual string Move(){
			string result = "I belong to the race.";
			return result;
		}
		public abstract int Damage(int damage);
		public abstract int Dexterity(int dexterity);
		//-virtual - не обязательно реальзовывать
		//в дочерних классах
		//-abstract - бязательно реальзовывать
		//в дочерних классах
	}
	public class Orc : Race{
		public override string Move(){
			string result = "I'm an Orc.";
			return result;
		}
		public override int Damage(int damage){
			return damage * 8;
		}
		public override int Dexterity(int dexterity){
			return dexterity * 2;
		}
	}
	public class Elf : Race{
		public override string Move(){
			string result = "I'm an Elf.";
			return result;
		}
		public override int Damage(int damage){
			return damage * 3;
		}
		public override int Dexterity(int dexterity){
			return dexterity * 7;
		}
	}
}