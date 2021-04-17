using System;
using System.Globalization;

namespace task_6
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, y;

            Console.Write("enter first number: ");
            x = Convert.ToInt32(Console.ReadLine());
            Console.Write("enter first number: ");
            y = Convert.ToInt32(Console.ReadLine());

            int res = x + y;
            Console.WriteLine("result: " + res);
            ///////////////////////////////
            string str = "1.9";

            NumberFormatInfo numberFormatInfo = new NumberFormatInfo()
            {
                NumberDecimalSeparator = ".",
            };

            double d = Convert.ToDouble(str);

            Console.ReadKey();
        }
    }
}
