using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task_24
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                int x = int.Parse(Console.ReadLine());
                Console.WriteLine(100 / x);
            }
            catch(Exception e)
            {
                Console.WriteLine(e.Message);
            }
            //срабатывает в любом случае
            finally
            {
                Console.WriteLine("End");
            }
            Console.ReadKey();
        }
    }
}
