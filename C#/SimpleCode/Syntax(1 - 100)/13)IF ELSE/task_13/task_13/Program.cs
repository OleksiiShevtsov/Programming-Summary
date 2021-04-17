using System;

namespace task_13
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter x: ");
            int x = Convert.ToInt32(Console.ReadLine());

            if(x < 0)
            {
                Console.WriteLine("x < 0");
            }
            else if(x > 0)
            {
                Console.WriteLine("x < 0");
            }
            else
            {
                Console.WriteLine("x == 0");
            }


            Console.ReadKey();
        }
    }
}
