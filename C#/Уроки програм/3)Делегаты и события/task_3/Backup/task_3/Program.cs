using System;
namespace task_3{
	class Program{
		public static void Main(string[] args){
			DelegFoo del1 = foo1;
			DelegFoo del2 = foo2;
			string testString = "test";
			
			Console.WriteLine("TestDelegat1: "+TestDelegat(del1, testString));
			Console.WriteLine("TestDelegat2: "+TestDelegat(del2, testString));
			
			Console.ReadKey(true);
		}
		//нужны для выстравивания более высоких уровней абстракции
		//может передавать по ссылке какой либо метод
		public delegate int DelegFoo(string name);
		
		//delegate - передаеться по ссылке 
		static int TestDelegat(DelegFoo method, string testString){
			return method(testString);
		}
		
		
		static int foo1(string name){
			return 1;
		}
		static int foo2(string name){
			return 2;
		}
	}
}