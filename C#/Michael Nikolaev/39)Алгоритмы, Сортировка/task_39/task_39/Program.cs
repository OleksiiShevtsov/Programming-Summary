using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task_39
{
    class Program
    {
        int[] a = new int[10];

        public void generateArray(int[] array)
        {
            Random r = new Random();

            for(int i = 0; i < array.Length; i++)
            {
                array[i] = (int)(r.NextDouble() * 30);
            }
        }
        
        public void printArray(int[] array)
        {
            for (int i = 0; i < array.Length; i++)
            {
                Console.WriteLine("array[" + i + "] = " + array[i]);
            }
        }

        public void bubbleSort(int[] array)
        {
            for(int i = 0; i < array.Length; i++)
            {
                for(int j = i; j < array.Length; j++)
                {
                    if(array[i] > array[j])
                    {
                        int temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;
                    }
                }
            }
        }

        static void Main(string[] args)
        {
            Program sort = new Program();
            sort.generateArray(sort.a);
            sort.printArray(sort.a);

            Console.WriteLine("Sort!");
            sort.bubbleSort(sort.a);
            sort.printArray(sort.a);

            Console.ReadKey();
        }
    }
}