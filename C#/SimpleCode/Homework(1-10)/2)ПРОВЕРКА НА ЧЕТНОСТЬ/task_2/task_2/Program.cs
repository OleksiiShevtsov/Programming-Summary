using System;

namespace task_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter n:");
            int n = Convert.ToInt32(Console.ReadLine());

            if(n % 2 == 0)
            {
                Console.WriteLine("n четное");
            }
            else
            {
                Console.WriteLine("n не четное");
            }

            Console.ReadKey();
        }
    }
}
