using System;
using System.Globalization;

namespace task_7
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = "5";
            //преобразование строки в любой другойтип  данных
            int i = int.Parse(str);
            Console.WriteLine("i: " + i);

            /////////////////////////////////

            string strd = "10.5";
            NumberFormatInfo number = new NumberFormatInfo()
            {
                NumberDecimalSeparator = ".",
            };
            double d = double.Parse(strd, number);
            Console.WriteLine("d: " + d);

            //////////////////////////

            Console.WriteLine("main 2:");
            Main2();
            
            Console.ReadKey();
        }

        static void Main2()
        {
            string str = "10";
            try
            {
                //Pars, Convert бросают исключения в случае неудачной конвертации
                int i = Convert.ToInt32(str);
                Console.WriteLine("i Успешная конертация: " + i);
            }
            catch (Exception)
            {
                Console.WriteLine("i Ошибка при конвертации");
            }
            /////////////////////////
            int i2;
            //TryParse так же конвертирует
            //TryParse не бросает исключение
            //и в случае неудачи значение остаеться прежним
            //TryParse возвращает bool
            bool res = int.TryParse(str, out i2);
            if (res)
            {
                Console.WriteLine("i2 Успешная конертация: " + i2);
            }
            else
            {
                Console.WriteLine("i2 Ошибка при конвертации");
            }
        }
    }
}
