#include <iostream>
using namespace std;

class MyClass{
	
	int* data;//динам. память(пример для очищения)
	
	public:
		MyClass(int size){
			data = new int[size];//динам. масив
			for(int i = 0; i < size; i++){
				data[i] = i;
			}
			cout <<"size: "<< size <<" - the constructor called"<< endl;
		}
		~MyClass(){//деструктор(он не принемает параметров!, в клссае может быть один деструктор)
			//тут уже удалены данные
			cout <<"data: "<< data <<" - called destructor"<< endl;
			delete[] data;
		}
};

int main(){	
	
	{
		MyClass my1(1);
		MyClass my2(2);
	}//деструктор выполняется в конце вложеной области видимости
	
	cout <<"\ntext\n"<< endl;
	
	return 0;	
}
