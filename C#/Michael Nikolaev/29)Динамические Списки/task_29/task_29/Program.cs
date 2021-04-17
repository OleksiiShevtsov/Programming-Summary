using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task_29
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] dinArray = new int[] {11, 12, 13};
            List<int> listArray= new List<int>();

            //добавляет элемент в конец списка 
            listArray.Add(10);

            //добавляет массив
            listArray.AddRange(dinArray);

            OutputFoo(listArray);

            //удаляет элемент по значению
            listArray.Remove(13);
            //удаляет элемент по индексу
            listArray.RemoveAt(0);

            OutputFoo(listArray);

            //преобразует в статический массив
            listArray.ToArray();

            Console.ReadLine();
        }
        static void OutputFoo(List<int> list)
        {
            foreach (int i in list)
            {
                Console.WriteLine(i);
            }
        }
    }
}