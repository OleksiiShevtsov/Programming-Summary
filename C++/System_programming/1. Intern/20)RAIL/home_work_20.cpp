#include <iostream>
#include <string>
using namespace std;

template <typename  T>
class SmartPointer{
	public:
		SmartPointer(T* ptr){
			this->ptr = ptr;
		}
		~SmartPointer(){
			delete ptr;
		}
		T& operator*(){
			cout << "operator *" << endl;
			return *ptr;
		}
		T* operator->(){
			cout << "operator ->" << endl;
			return ptr;
		}
	private:
		T* ptr;	
};

class Nmae {
	public:
		Nmae(char* funcName) {
			m_funcName = funcName;
		}
		
		~Nmae() {}
		
		char* getNmae() {
			return m_funcName;
		}
	private:
		char* m_funcName;
};

int main() {

	SmartPointer<Nmae> ptrNmae(new Nmae("Alex"));
	
	cout << (*ptrNmae).getNmae() << endl;
	cout << ptrNmae->getNmae() << endl;
	
	return 0;
}
