using System;
//sealed class - запечатанный класс, не может 
//быть наследован, то же как методам
//схожие с struct

//static class - могут хранить экземпляры помеченне
//как статик, не поддерживает наследование
namespace task_5{
	class Program{
		public static void Main(string[] args){
			Point point = new Point();
			Student student = new Student();
			point.InstValue = 10;
			Point.StatValue = 20;
			
			Console.WriteLine(Point.StatValue+"\n"+point.InstValue);
			
			Console.ReadKey(true);
		}
	}
	class Point{
		public static int StatValue;
		public int InstValue;
	}
	static class Student{
		static Student(){
			//-при унаследовани вызываеться сразу
			//-статический конструтор вызываеться при 
			//создании первого обьекта
			Console.WriteLine("static construktor");
		}
	}
}