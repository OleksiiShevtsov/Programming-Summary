using System;

namespace Apple
{
    class OS
    {
        public void start()
        {
            Console.WriteLine("start Apple");
        }
    }
}
namespace Microsoft
{
    class OS
    {
        public void start()
        {
            Console.WriteLine("start Microsoft");
        }
    }
}
class Program
{
    static void Main(string[] args)
    {
        Apple.OS os_a = new Apple.OS();
        Microsoft.OS os_m = new Microsoft.OS();

        os_a.start();
        os_m.start();

        Console.ReadKey();
    }
}