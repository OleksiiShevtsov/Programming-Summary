#include <iostream>
using namespace std;

class Point {
	public:
		Point(int x, int y){
			this->x = x;
			this->y = y;
			point++;
			id = point;
			print();
		}
		void print(){
			cout <<"object id ("<< id <<"): ";
			cout <<"x - "<< x <<", y - "<< y << endl;
		}
		int GetId(){
			return id;
		}
		
		//статический метод для работы
		//с статическими членами данных
		static int GetPoint(){
			//статический метод привязан к классу 
			//но не к конкретному обекту, потому
			//нельзя в нем работать с нестатическими
			//членами данных
			return point;
		}
		
		//если нужно в статическом методе
		//работать с нестатическими членоми данных
		//то нужно их передать по ссылке или указателю
		static void SetPoint(Point& A, int X, int Y){
			A.x = X;
			A.y = Y;
		}
	private:
		int x;
		int y;
		int id;
		
		//статическая переменная должны быть закрытой 
		//во избежание к ней доступа из вне 
		//иначе моем поламать ид генератор
		static int point;
};

int Point::point = 0;

int main(){
	
	Point A(11, 21);
	Point B(12, 22);
	Point C(13, 23);
	
	cout << endl;
	
	/*cout << A.GetId() << endl;
	cout << B.GetId() << endl;
	cout << C.GetId() << endl;*/
	
	//Вызов метода статик
	cout <<"\namount of points: "<< Point::GetPoint() << endl << endl;
	
	//вызов метода статик с нестатическими членами данных
	Point::SetPoint(A, 1, 1);
	A.print();
	//или так
	Point::SetPoint(B, 2, 2);
	B.print();
	
	return 0;
}
