#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

class Point{
	public:
		Point(){
			x = y = z = 0;
		}
		Point(int x, int y, int z){
			this->x = x;
			this->y = y;
			this->z = z;
		}	
	private:
		int x;
		int y;
		int z;
	friend ostream& operator<<(ostream& os, const Point& point);
	friend istream& operator>> (istream& is, Point& point);
};

//перегрузка вывода	
ostream& operator<<(ostream& os, const Point& point){
	os << point.x <<" "<< point.y <<" "<< point.z << endl;
	return os;
}

//перегрузка ввода
istream& operator>> (istream& is, Point& point){
	is >> point.x >> point.y >> point.z;
	return is;
}

int main(){
	
	fstream fs;
	fs.open("task_119.txt", fstream::in | fstream::out | fstream::app);
	
	if(!fs.is_open()){
		cout <<"the file did not open"<< endl;	
	} else {
		cout <<"file is open"<< endl;
		//перегрузка ввода	
		//fs << point << "\n";
		
		//Point a(10, 25, 50);
		//fs << a;
		
		 while(true){
		 	Point a;
		 	fs >> a;
		 	
		 	if(fs.eof()){
		 		break;
		 	}
		 	
		 	cout << a << endl;
		 }
	}
	
	fs.close();
	
	return 0;
}
