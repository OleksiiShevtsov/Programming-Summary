using System;

namespace task_24
{
	class Program
	{
		public static void Main(string[] args)
		{
			Mechanism mech = new Mechanism(Parts.REDUCTION,12,14);
			mech.Print();
			
			Console.ReadKey(true);
		}
	}
	class Mechanism{
		private int moment;
		private int frequency;
		private Parts parts;
		public Mechanism(Parts parts, int moment, int frequency){
			this.parts = parts;
			this.moment = moment;
			this.frequency = frequency;
		}
		public void Print(){
			Console.WriteLine("mechanism: "+parts);
			Console.WriteLine("moment: "+moment);
			Console.WriteLine("frequency: "+frequency);
		}
	}
	enum Parts{EXECUTIVE, ENGINE, REDUCTION}
}