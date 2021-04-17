using System;
using System.Threading.Tasks;

namespace task_1
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, num3;
            // task 1
            num1 = Convert.ToInt32(Console.ReadLine());
            num2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("task 1:  res  = " + (num1 + num2));

            // task 2
            num1 = Convert.ToInt32(Console.ReadLine());
            num2 = Convert.ToInt32(Console.ReadLine());
            num3 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("task 2:  res = " + (num1 + num2 + num3) + ", mult = " + (num1 * num2 * num3));

            // task 3
            num1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("task 3:  dol = " + (num1 / 28) + ", rub = " + ((double)num1 * 2.5));

            Console.ReadKey();
        }
    }
}