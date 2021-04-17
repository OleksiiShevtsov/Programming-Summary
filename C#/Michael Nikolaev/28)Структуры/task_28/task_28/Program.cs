using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task_28
{
    class Program
    {
        static void Main(string[] args)
        {
            Point a = new Point();

            a.x = 10; a.y = 20; a.z = 30;

            a.Print();

            Console.ReadKey();
        }
    }

    //цель: хранить небольшие данные 
    public struct Point
    {
        public int x;
        public int y;
        public int z;

        public void Print()
        {
            Console.WriteLine("x: {0}, y: {1}, z: {2}", x, y, z);
        }
    }
}
