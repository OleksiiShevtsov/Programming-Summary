using System;

namespace task_37
{
    class Program
    {
        static void Main(string[] args)
        {
            String img = Texture.grass;
            Texture.drawImage(img);

            Console.ReadKey();
        }
    }
    
    class Texture
    {
        public static String grass = "Grass";
        public static String wall = "Wall";

        public static void drawImage(String texture)
        {
            Console.WriteLine(texture);
        }
    }
}
