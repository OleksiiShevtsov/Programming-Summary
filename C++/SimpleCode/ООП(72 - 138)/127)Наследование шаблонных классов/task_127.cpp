#include <iostream>
#include <string>
#include <typeinfo>
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
};

template<class T>
class TypeSize{
	public:
		TypeSize(T value){
			this->value = value;
		}
		void DataTypeSize(){
			cout <<"value: "<< sizeof(value) << endl;
		}
	protected:
		T value;
};

template<class T>
//Шаблон при наследовании 
class TypeInfo : public TypeSize <T>{
	public:
		TypeInfo(T value): TypeSize<T>(value){
		}
		void ShowTypeName(){
			cout <<"type name:"<< typeid(TypeSize<T>::value).name() << endl;
		}	
};

int main(){

	int a = 1;
	double c = 3.4;
	Point b(1, 2, 3);

	TypeInfo<Point> info(b);
	info.DataTypeSize();
	info.ShowTypeName();
	return 0;
}
