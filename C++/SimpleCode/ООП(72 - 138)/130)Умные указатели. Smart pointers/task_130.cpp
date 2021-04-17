#include <iostream>
#include <string>
using namespace std;

template<typename T>
class SmartPointer{
	public:
		SmartPointer(T* ptr){
			cout << "Construktor" << endl;
			this->ptr = ptr;
		}
		~SmartPointer(){
			cout << "Destruktor" << endl;
			//динамическая память освобождаться 
			//автомаичски
			delete ptr;
		}
		T& operator*(){
			cout << "operator *" << endl;
			return *ptr;
		}
	private:
		T* ptr;	
};

int main(){
	
	SmartPointer<int> ptr = new int(5);
	cout << *ptr << endl;
	*ptr = 10;
	cout << *ptr << endl;
	

	return 0;
}
