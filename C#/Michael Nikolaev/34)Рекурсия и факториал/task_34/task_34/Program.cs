using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task_34
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("n: ");
            int n = int.Parse(Console.ReadLine());

            Console.WriteLine("factorial(" + n + ") = " + fact(n));

            Console.ReadKey();
        }
        static int fact(int n)
        {
            int result = n;
            if(n == 1)
            {
                return 1;
            }
            if (n == 0)
            {
                return 0;
            }
            result = fact(n - 1) * n;
            return result;
        }
    }
}