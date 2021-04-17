using System;

namespace task_12{
	class Program{
		public static void Main(string[] args){
			
			string str = "Hello World!";
			//длина строки
			Console.WriteLine(str.Length);
			//пустая ли строка
			Console.WriteLine(String.IsNullOrEmpty(str));
			//сравнение строк
			Console.WriteLine(String.Compare("Alex1" , str));
			//перевод в верхний регистр или нижний
			Console.WriteLine(str.ToLower()+"\n"+str.ToUpper());
			//роверка на наличии подстроки
			Console.WriteLine(str.Contains("Hello"));
			//начинаеться/заканч. ли строка на такую букву 
			Console.WriteLine(str.StartsWith("Hell"));
			Console.WriteLine(str.EndsWith("d!"));
			//вставляет элемент в строку
			Console.WriteLine(str.Insert(12, "!!"));
			//обрезает строку с элемента
			Console.WriteLine(str.Remove(11));
			//заменяет часть строки
			Console.WriteLine(str.Replace("Hello", "Bay"));
			
			//преобразовует строку в масив символов
			char[] syn  = str.ToCharArray();
		
			//разбивает строку на масив подстрок
			string array1 = "Alex1,Alex2,Alex3";
			string[] alex = array1.Split(',');
			Console.WriteLine(alex[0]);
			Console.WriteLine(alex[1]);
			Console.WriteLine(alex[2]);
			
			Console.ReadKey(true);
		}
	}
}