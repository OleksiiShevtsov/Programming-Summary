using System;
using System.Threading.Tasks;

namespace task_9
{
    class Program
    {
        static void Main(string[] args)
        {
            //если приоритет равной то выполнение 
            //происходит последовательно

            int res = (2 + 2 - 3) * 2;
            Console.WriteLine(res);//8

            Console.ReadKey();
        }
    }
}
