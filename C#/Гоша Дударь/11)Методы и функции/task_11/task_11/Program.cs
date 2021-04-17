using System;


namespace task_11
{
	class Program
	{
		public static void Main(string[] args)
		{
			int[] array = new int[4];
			array[1] = 1;
			mas(array);
			
			Console.ReadKey(true);
		}
		
		public static double vec(int x, int y){
			return Math.Sqrt(x*x + y*y);
		}
		public static double vec(int x, int y, int z){
			return Math.Sqrt(x*x + y*y + z*z);
		}
		
		public static void mas(int[] m){
			for(int i = 0; i < m.Length; i++){
				Console.WriteLine("m["+i+"]: "+m[i]);
			}
		}
	}
}