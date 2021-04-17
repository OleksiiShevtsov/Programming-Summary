using System;

namespace tasc_2
{
	class Program
	{
		public static void Main(string[] args)
		{
			
			
			
			Console.ReadKey(true);
		}
	}
	// - struct - не может быть явного 
	//конструктора по умолчанию
	//все поля должны быть инициилизированны
	//в конструкторе
	public struct Student{
		private int age;
		private string name;
		
		public Student(int age){
			//хитрость 
			this = new Student();
			this.age = age;
		}
		
		public void Grow(){
			Grow(1);
		}
		public void Grow(int years){
			age += years;
		}
		public int GetAge(){
			return age;
		}
		public int Age{//автомат{get;set;}
			get{return age;}
			set{if(age <= 0){throw new Exception("error");}
			age = value;}
		}
	}
}