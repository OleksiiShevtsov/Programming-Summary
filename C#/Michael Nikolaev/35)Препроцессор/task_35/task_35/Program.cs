#define RELEASE1 //Деректива define
#define RELEASE2 //Деректива define
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task_35
{
    class Program
    {
        static void Main(string[] args)
        {
            #if RELEASE1
            Console.WriteLine("true 1");
            #elif RELEASE2
            Console.WriteLine("true 2");
            #else
            Console.WriteLine("false");
            #endif

            Console.ReadKey();
        }
    }
}
