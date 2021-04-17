using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task_31
{
    class Program
    {
        static void Main(string[] args)
        {
            ClassNum classNum = new ClassNum();
            classNum.Num = 20;
            Console.WriteLine(classNum.Num);

            Console.ReadKey();
        }
    }
}
