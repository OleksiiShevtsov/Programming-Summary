using System;
namespace task_3{
	class Program2{
		public static void Main(string[] args){
			
			Student student = new Student();
			
			student.Moving += student_Moving;
			student.Move(5);
			
			Console.ReadKey(true);
		}
		
		static void student_Moving(string text){
			Console.WriteLine(text);
		}
	}

	class Student{
		public void Move(int distance){
			for(int i = 1; i <= distance; i++){
				if(Moving != null){
					Moving(string.Format("Шаг {0}", i/*i запишеться в {0}*/));
				}
			}
		}
		public event Action<string> Moving;
	}
}
