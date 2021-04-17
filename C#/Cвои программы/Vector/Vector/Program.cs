using System;

namespace Vector{
    class Program{
        static void Main(string[] args){
            int m = 20;
            Vector g = new Vector(0, 9.81);
            Vector R = new Vector();
            Vector P = new Vector(20);

            R = g * m / 2 + P;

            R.Print();
            Console.ReadKey();
        }
    }
    class Vector{
        protected const double PI = 3.141592653589793;
        protected double x { get; set; }
        protected double y { get; set; }
        protected double z { get; set; }
        public Vector(){
            x = y = z = 0;
        }
        public Vector(double x){
            this.x = x;
            y = 0;
            z = 0;
        }
        public Vector(double x, double y) : this(x){
            this.y = y;
            z = 0;
        }
        public Vector(double x, double y, double z) : this(x, y){
            this.z = z;
        }
        public double length(){
            return Math.Sqrt(x * x + y * y + z * z);
        }
        public void coordinates(int x1, int y1, int z1, int x2, int y2, int z2){
            //Enter the coordinates of the origin point of the vector, then the end
            x = x2 - x1;
            y = y2 - y1;
            z = z2 - z1;
        }
        public static Vector operator +(Vector v1, Vector v2){
            return new Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
        }
        public static Vector operator *(Vector vector, double k){
            return new Vector(vector.x * k, vector.y * k, vector.z * k); ;
        }
        public static Vector operator *(double k, Vector vector){
            return new Vector(vector.x * k, vector.y * k, vector.z * k); ;
        }
        public static Vector operator /(Vector vector, double k){
            return new Vector(vector.x / k, vector.y / k, vector.z / k);
        }
        public static Vector operator /(double k, Vector vector){
            return new Vector(vector.x / k, vector.y / k, vector.z / k);
        }
        public static Vector operator *(Vector v1, Vector v2){
            Vector vector = new Vector();
            vector.x = v1.y * v2.z - v1.z * v2.y;
            vector.y = v1.x * v2.z - v1.z * v2.x;
            vector.z = v1.x * v2.y - v1.y * v2.x;
            return vector;
        }
        public double projectionXZ(){
            return Math.Sqrt(x * x + z * z);
        }
        public double projectionXY(){
            return Math.Sqrt(x * x + y * y);
        }
        public double projectionYZ(){
            return Math.Sqrt(y * y + z * z);
        }
        public static double mixed(Vector v1, Vector v2, Vector v3){
            return v1.x * v2.y * v3.z + v1.y * v2.z * v3.x + v1.z * v2.x * v3.y - v1.x * v2.z * v3.y - v1.y * v2.x * v3.z - v1.z * v2.y * v3.x;
        }
        public static double scalar(Vector v1, Vector v2, double a){
            return v1.length() * v2.length() * Math.Cos(a * PI / 180);
        }
        public static double vector(Vector v1, Vector v2, double a){
            return v1.length() * v2.length() * Math.Sin(a * PI / 180);
        }
        public void Print(){
            Console.WriteLine(x + "x " + y + "y " + z + "z");
        }//Удалить
    }
    class Vector2 : Vector{
        //???
        public Vector2() : base(){
        }
        public Vector2(double vector){
            x = vector;
            y = 0;
            z = 0;
        }
        public Vector2(double vector, double A){//???
            x = vector * Math.Cos(A * PI / 180);
            y = vector * Math.Sin(A * PI / 180);
            z = 0;
        }
        public Vector2(double vector, double A, double B){//???
            x = vector * Math.Cos(B * PI / 180) * Math.Cos(A * PI / 180);
            y = vector * Math.Cos(B * PI / 180) * Math.Sin(A * PI / 180);
            z = Math.Sin(B * PI / 180);
        }
    }
}
