using System;
//для работы с файлами
using System.IO;

namespace task_25
{
    class Program
    {
        static void Main(string[] args)
        {
            string filePath = Console.ReadLine();
            string fileIn = "Hello Alex!";

            //ReadAllText - записывает в файла(путь, контент)
            File.WriteAllText(filePath, fileIn);

            //ReadAllText - читает из файла(путь)
            Console.WriteLine(File.ReadAllText(filePath));

            Console.ReadKey();
        }
    }
}
