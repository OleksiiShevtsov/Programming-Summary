using System;
using System.IO;

namespace task_26
{
    class Program
    {
        static void Main(string[] args)
        {
            string filePuth = "task_26.txt";

            string text = Console.ReadLine();

            //поток записи
            StreamWriter sw = new StreamWriter(filePuth);
            sw.Write(text);
            //закрытие потока
            sw.Close();

            //пток считывание, 
            StreamReader sr = new StreamReader(filePuth);
            Console.WriteLine(sr.ReadToEnd());
            //закрытие потока
            sr.Close();

            Console.ReadKey();
        }
    }
}
