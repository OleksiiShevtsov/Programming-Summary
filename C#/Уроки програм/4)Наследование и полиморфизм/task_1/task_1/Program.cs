using System;

namespace task_1{
	class Program{
		public static void Main(string[] args){

			BaseShip ship = new TransportShip(10);
			
			ship.Move(10);
			Console.WriteLine(ship.Move(10));
			
			Console.ReadKey(true);
		}
	}
	class BaseShip{
		/*base - явный вызов родительского класса*/
		public BaseShip(int value){
			counter = value;
			Console.WriteLine("constructor BaseShip");
		}
		protected int counter;
		
		protected int speed;
		
		virtual public string Move(int distance){
			counter++;
			string result = string.Format("passed kilometers: {0}", distance);
			return result;
		}
	}
	class TransportShip : BaseShip {
		public TransportShip(int value):base(value){
			Console.WriteLine("constructor TransportShip");
		}
		override public string Move(int distance){
			counter++;
			string result = base.Move(distance);
			result += string.Format("\nthe transport ship passed kilometers: {0}", distance);
            Console.WriteLine(counter);
            return result;
		}
	}
}