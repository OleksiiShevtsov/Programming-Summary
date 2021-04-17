using System;

namespace task_10{
	class Program{
		public static void Main(string[] args){
			
			int[,] array = new int[2,2];
			array[0,0] = 1;
			array[0,1] = 2;
			array[1,0] = 3;
			array[1,1] = 4;
			
            foreach (int s in array) 
            {
                Console.Write(s + " ");
            }
			
			Console.WriteLine();
			Console.ReadKey(true);
		}
	}
}