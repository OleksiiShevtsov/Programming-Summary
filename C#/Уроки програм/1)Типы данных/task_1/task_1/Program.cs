using System;

namespace task_1
{
    class Program
    {
        public static void Main(string[] args)
        {
            Student student = new Student();
            student._age = 10;
            Cal(student);
            Console.WriteLine(student._age);

            Console.ReadKey(true);
        }
        //struct - передаеться по значению
        //class - передаеться по ссылке
        static void Cal(Student student)
        {
            student._age += 1;
        }
    }
    public class Student
    {
        public int _age;
    }
}