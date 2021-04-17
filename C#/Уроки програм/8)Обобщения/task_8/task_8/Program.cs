using System;
using System.Collections.Generic;

namespace task_8{

    //Обобщение - это переменный тип данных.
    //которым манипулирует класс или метод

    //Обобщение можно использывать в интерфейсе, класе, методе...

    class Program
    {
		public static void Main(string[] args){

            

            Console.ReadKey(true);
		}
	}
    public class Race<T>
        //ограничение на Orc
        //T принемает только тип Orc или его наследников
        //new() ограничение на создание класса(не обстрактный, контруктор по умолчанию)
        where T : Orc, new()
    {
        public void OrcName(T orcName)
        {
            orcName.OrcVoid();
        }

        //создание класса Orc
        public T GetNewOrc()
        {
            T orc = new T();
            return orc;
        }
    }
    public class Orc : Race<Orc>
    {
        private int damage;
        public int health;

        public Orc()
        {
            Console.WriteLine("For Horde!");
        }

        public void OrcVoid()
        {
            Console.WriteLine("I em Orc!");
        }
    }
}