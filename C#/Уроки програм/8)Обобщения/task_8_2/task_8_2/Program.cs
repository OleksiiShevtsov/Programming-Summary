using System;

namespace task_8_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Race race = new Orc();
            //инвариант
            ISword<Race> sword = new Sword<Race>();

            //работает только с out - ковариант
            ISword<Race> sword2 = new Sword<Orc>();

            //работает только с in - контрвариант
            ISword<Race> sword3 = new Sword<Orc>();
        }
    }
    public class Race
    {
        
    }
    public class Orc : Race
    {
        
    }
    public class Elf : Race
    {
       
    }

    //out позволяет приводить типы класов нследников(ковариант)
    public interface ISword<out T>
    {
        //только к делегатам и интерфейсам 

        //ковариант накладывает ограничение:
        //в интерфейсе не может быть метода с 
        //входным типом T
        //void Set(T value); - будет ошбка

        //контрвариант накладывает ограничение:
        //в интерфейсе не может быть метода с 
        //выходным типом T
        //T Set(int value); - будет ошбка
    }
    public class Sword<T> : ISword<T>
    {

    }
}
