using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task_30
{
    class Program
    {
        delegate void myDel(int x);

        static void Main(string[] args)
        {
            myDel md = new myDel(start);

            md += stop;

            md(10);

            Console.ReadKey();
        }

        static void start(int x)
        {
            x = 10;
            Console.WriteLine("Start " + x);
        }
        static void stop(int x)
        {
            x = 0;
            Console.WriteLine("Stop " + x);
        }
    }
}
