using System;
using System.Collections.Generic;

namespace task_9
{
	class Program
	{
		public static void Main(string[] args)
		{
			/*int length = 5;
			int[] array = new int[length];
			string[] array2 = {"Alex"};
			int[,] array3 = new int[2,2]{{11, 12}, {21, 22}};*/
			
			Console.Write("x: ");
			int x = Convert.ToInt32(Console.ReadLine());
			Console.Write("y: ");
			int y = Convert.ToInt32(Console.ReadLine());
		
			int[,] array = new int[x, y];
			for(int i = 0; i < array.Length; i++){
				for(int j = 0; j < array.Length; j++){
					Console.Write("array["+i+j+"]: ");
					array[i, j] = Convert.ToInt32(Console.ReadLine());
				}
			}
			for(int i = 0; i < array.Length; i++){
				for(int j = 0; j < array.Length; j++){
					Console.Write(array[i, j]+" ");
				}
				Console.Write("\n");
			}
			
			//List 
			List<int> array2 = new List<int>();
			array2.Add(10);//добавляет
			array2.Add(20);
			array2.Add(30);
			array2.RemoveAt(0);//удаляет элемент по индексу
			array2.Remove(20);//удаляет элемент по значению
			for(int i = 0; i < array2.Count; i++){
				Console.Write(array2[i]+", ");
			}
		
			Console.ReadKey(true);
		}
	}
}