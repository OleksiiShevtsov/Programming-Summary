using System;

namespace task_25
{
	class Program
	{
		public static void Main(string[] args)
		{
			//структура не выделяет память
			Point A;
			
			
			Console.ReadKey(true);
		}
	}
	//занимает меньше памяти
	struct Point{
		private int x;
		private int y;
		private int z;
		public Point(int x, int y, int z){
			this.x = x;
			this.y = y;
			this.z = z;
		}
	}
}