using System;
namespace task_3{
	class Program2{
		public static void Main(string[] args){
			
			Student student = new Student();
			
			student.Move(5);
			student.Moving = Show;
			student.Move(6);
			
			Console.ReadKey(true);
		}
		
		static void Show(string text){
			Console.WriteLine(text);
		}
	}
	//обобщенные delegate
	//Action<T1, T2 ... , Tn>; Action - не возвращяет значение 
	//Func<T1, T2 ... , Tn, out>; Func - возвращяет значение -> out
	
	//public delegate void DelTest(string text);
		
	class Student{
		public void Move(int distance){
			for(int i = 0; i < distance; i++){
				if(Moving != null){
					Moving(string.Format("Шаг {0}", i/*i запишеться в {0}*/));
				}
			}
		}
		public Action<string> Moving{get; set;}
	}
}
