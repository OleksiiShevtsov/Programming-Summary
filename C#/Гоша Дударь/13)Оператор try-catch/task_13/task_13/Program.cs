using System;

namespace task_13{
	class Program{
		public static void Main(string[] args){
			
			try{
				Console.Write("Enter num1: ");
				int num1 = Convert.ToInt32(Console.ReadLine());
				Console.Write("Enter num2: ");
				int num2 = Convert.ToInt32(Console.ReadLine());
				
				Console.WriteLine(num1 / num2);
			}
			catch(FormatException){
				Console.WriteLine("FormatException");
			}
			catch(DivideByZeroException){
				Console.WriteLine("DivideByZeroException");
			}finally{
				//точно сработает
				Console.WriteLine("finally");
			}
			
			
			Console.ReadKey(true);
		}
		
		public static int foo(int value){
			if(value < 0){
				//throw value;
			}
			return value;
		}
	}
}