using System;
namespace task_6_3{
    class Program{
        static void Main(string[] args){
            Print print = new Print();

            print.PrintConsole();

            IPrint1 print1 = print;
            print1.PrintConsole();

            IPrint2 print2 = print;
            print2.PrintConsole();

            Console.ReadKey();
        }
    }
    interface IPrint1{
        void PrintConsole();
    }
    interface IPrint2{
        void PrintConsole();
    }
    class Print : IPrint1, IPrint2 {
        //без этого метода работать явная реализация не будет!!!
        //лучше так не делать!!!
        public void PrintConsole(){
            Console.WriteLine("Print this");
        }

        //Яная реализация интерфейса
        void IPrint1.PrintConsole(){
            Console.WriteLine("Print IPrint111");
        }
        void IPrint2.PrintConsole(){
            Console.WriteLine("Print IPrint222");
        }
    }
}
