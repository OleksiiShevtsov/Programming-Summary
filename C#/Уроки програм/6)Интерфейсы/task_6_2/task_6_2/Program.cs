using System;

namespace task_6_2{
    class Program{
        static void Main(string[] args){
            Student student1 = new Student() { Name = "Alex", Age = 21 };
            Student student2 = new Student() { Name = "Devid", Age = 20 };

            Student[] students = new Student[] { student1, student2 };

            //сравнивает через интерфейс IComparable
            Array.Sort(students);
            Console.ReadKey();
        }
    }
    public struct Student : IComparable{
        public string Name { get; set; }
        public int Age { get; set; }
        public int CompareTo(object obj){
            Student student = (Student)obj;
            if (this.Age > student.Age) return 1;
            if (this.Age < student.Age) return -1;
            return 0;
        }
    }
}
