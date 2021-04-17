using System;

namespace task_11
{
    class Program
    {
        static void Main(string[] args)
        {
            //ИНКРЕМЕНТ И ДЕКРЕМЕНТ - унарные операторы
            int i = 0;
            i++;
            Console.WriteLine(i);

            int i1 = 0, i2 = 0;
            Console.WriteLine("post: " + i1++);//0
            Console.WriteLine("pref: " + ++i2);//1

            i = 1;
            i = i++ * i;
            Console.WriteLine("i: " + i);//2


            Console.ReadLine();
        }
    }
}
