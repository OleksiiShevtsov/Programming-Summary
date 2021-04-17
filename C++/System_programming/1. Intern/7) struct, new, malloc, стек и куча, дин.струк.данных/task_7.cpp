#include <iostream>

using namespace std;

int main(){

	struct Coordinate{
		int x;
		int y;
	};
	
	Coordinate first;
	Coordinate second;
	first.x = 4;
	cout <<"x = "<< first.x <<", y = "<< first.y << endl;
	cout << sizeof(Coordinate) << endl;//(int = 4)(char = 1) %4! 
	
	//char arr[] = {01, 02, 00, 00, 00};
	//Coordinate* first = reinterpret_cast<Coordinate*>(arr);
	//cout <<"arr: "<< sizeof(arr) << endl;
	//cout <<"first: "<< sizeof(first) << endl;
	//https://docs.microsoft.com/ru-ru/cpp/preprocessor/pack?view=vs-2019

	//вложенные структуры
	struct Line{
		Coordinate coordinate_1;
		Coordinate coordinate_2;
	};
	
	Line line = {{1, 2}, {3, 4}};
	
	
	return 0;
}
