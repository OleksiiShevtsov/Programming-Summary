using System;

namespace task_8
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 2;
            int b = 4;
            int res1 = a / b;  
            Console.WriteLine("res1: " + res1);
            //Приведение типов
            double res2 = (double) a / b;
            Console.WriteLine("res2: " + res2);

            Console.ReadKey();
        }
    }
}
