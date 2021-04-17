using System;

namespace AMC
{
	class Program
	{
		public static void Main(string[] args)
		{

			
          	int i = 5;
			object b = i;
			i++;
			int c = ((int)b);
			c++;
			Console.WriteLine(i.ToString());
          	
          	Console.ReadLine();
		}
			static void Update(Num y){
				y.i = 20;
			}
	}
	class Num{
     public int i;
	}
}