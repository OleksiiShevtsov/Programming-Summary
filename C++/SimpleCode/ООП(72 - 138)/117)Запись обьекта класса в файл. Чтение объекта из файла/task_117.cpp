#include <iostream>
#include <string>
#include <fstream>
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
		void Print(){
			cout <<"x: "<< x <<", y: "<< y <<", z: "<< z << endl;
		}
	private:
		int x;
		int y;
		int z;
};

int main(){
	
	Point point(10, 113, 145);
	point.Print();
	
	//Запись
	/*
	ofstream fout;
	fout.open("task_117.txt", ofstream::app);
	
	if(!fout.is_open()){
		cout <<"the file did not open"<< endl;
	} else {
		cout <<"file is open"<< endl;
		fout.write((char*)&point, sizeof(Point));
	}
	
	fout.close();
	*/
	
	//считывание
	ifstream fin;
	fin.open("task_117.txt");
	
	if(!fin.is_open()){
		cout <<"the file did not open"<< endl;
	} else {
		cout <<"file is open"<< endl;
		
		Point pnt;
		while(fin.read((char*)&pnt, sizeof(Point))){
			pnt.Print();	
		}
	}
	
	fin.close();
	
	
	return 0;
}
