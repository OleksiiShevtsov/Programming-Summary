using System;

namespace еtask_3_4
{
	class Program
	{
		public static void Main(string[] args)
		{
			ClassCounter Counter = new ClassCounter();
            Handler_I Handler1 = new Handler_I();
            Handler_II Handler2 = new Handler_II();
            
            Counter.onCount += Handler1.Message;
            Counter.onCount += Handler2.Message;
			
            //Запустили счетчик
            Counter.Count();
            
			Console.ReadKey(true);
		}
	}
	class ClassCounter  /*Это класс - в котором производится счет.*/{
        public delegate void MethodContainer();

        //Событие OnCount c типом делегата MethodContainer.
        public event MethodContainer onCount;

        public void Count(){
            for (int i = 0; i < 100; i++){
                if (i == 71){
        			if(onCount != null)
        				onCount();
                }
            }
        }
    }
	//Это класс, реагирующий на событие (счет равен 71) записью строки в консоли.
	class Handler_I{
        public void Message(){
            //Не забудьте using System 
            //для вывода в консольном приложении
            Console.WriteLine("Пора действовать, ведь уже 71!"); 
        }                                                        
    }
	class Handler_II{
        public void Message(){
            Console.WriteLine("Точно, уже 71!");
        }    
    }
}