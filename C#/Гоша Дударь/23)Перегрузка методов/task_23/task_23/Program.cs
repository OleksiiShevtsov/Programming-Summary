using System;

namespace task_23
{
	class Program
	{
		public static void Main(string[] args)
		{
			Point A = new Point();
			A.Print(4, 6);
			A.Print(4, 6, 7);
			
			Console.ReadKey(true);
		}
	}
	class Point{
		private int x;
		private int y;
		private int z;
		public Point(){
			x = y = z = 0;
		}
		public void Print(int x, int y){
			this.x = x; this.y = y;
			Console.WriteLine(Math.Sqrt(this.x*this.x + this.y*this.y));
		}
		public void Print(int x, int y, int z){
			this.x = x; this.y = y; this.z = z;
			Console.WriteLine(Math.Sqrt(this.x*this.x + this.y*this.y + this.z*this.z));
		}
	}
}