using System;

namespace task_14{
	class Program{
		public static void Main(string[] args){
			
			Point A = new Point(10, 20, 30);
			Point B = new Point();
			
			A.L1 = 2;
			Console.WriteLine(A.L1);
			A.L2 = 4;
			Console.WriteLine(A.L2);
			
			Console.ReadKey(true);
		}
	}
	class Point{
		public static int stat = 0;
		private int x;
		private int y;
		private int z;
		
		private int l;
		
		//Геттеры и сеттеры
		public int L1{
			get{
				return l;}
			set{
				l = value;/*value - значение которе пердаем в set*/}
		}
		//Автоматические свойства
		public int L2{get; set;}
		
		public Point(int x, int y, int z){
			this.x = x;
			this.y = y;
			this.z = z;
			stat++;
			Console.WriteLine("STATIC: "+stat);
			Print();
		}
		public Point(){
			x = y = z = 0;
			stat++;
			Console.WriteLine("STATIC: "+stat);
			Print();
		}
		public void Print(){
			Console.WriteLine("x: "+x+", y: "+y+", z: "+z);
		}
	}
}