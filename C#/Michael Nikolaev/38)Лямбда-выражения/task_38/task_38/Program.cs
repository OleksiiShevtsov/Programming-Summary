using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task_38
{
    class Program
    {
        public String login = null;
        public String password_1 = null;
        public String password_2 = null;

        //делегат
        delegate int LengthOfLogin(String str);
        delegate bool BooleanPassword(String s1, String s2);

        public void typeLogin()
        {
            Console.Write("your login: ");
            login = Console.ReadLine();

            //лямда выражение
            //присваивает обьекту ll выражение ss.Length
            LengthOfLogin ll = ss => ss.Length;   

            //lenghtLogin присваиваем ll(login)
            int lenghtLogin = ll(login);


            if (lenghtLogin <= 3)
            {
                Console.WriteLine("your logs are small!");
                typeLogin();
            }
        }
        public void typePassword()
        {
            Console.Write("your password: ");
            password_1 = Console.ReadLine();

            if (password_1.Length <= 5)
            {
                Console.WriteLine("your password are small!");
                typePassword();
            }

            //hw
            BooleanPassword bp = (s11, s22) => s11 != s22;

            Console.Write("сonfirm password: ");
            password_2 = Console.ReadLine();

            bool pasbool = bp(password_1, password_2);

            while (pasbool)
            {
                Console.WriteLine("repeat password correctly");

                Console.Write("сonfirm password: ");
                password_2 = Console.ReadLine();

                pasbool = bp(password_1, password_2);
            }

        }

        static void Main(string[] args)
        {
            Program mainProgram = new Program();
            mainProgram.typeLogin();
            Console.WriteLine("your logs are correct! "+ mainProgram.login);
            mainProgram.typePassword();
            Console.WriteLine("your password are correct! " + mainProgram.password_1);

            Console.ReadKey();
        }
    }
}
