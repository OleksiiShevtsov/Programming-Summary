﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task_33
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("x: ");
            int x = int.Parse(Console.ReadLine());

            Console.Write("y: ");
            int y = int.Parse(Console.ReadLine());

            string str;

            str = (x == y) ? str = "true" : str = "false";
            Console.WriteLine(str);

            Console.ReadKey();
        }
    }
}
