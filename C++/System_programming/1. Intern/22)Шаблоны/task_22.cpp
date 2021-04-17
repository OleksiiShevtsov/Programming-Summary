#include <iostream>
#include <string>

using namespace std;

template <typename  T>
class SharedPointer{
	public:
		explicit SharedPointer(){}
		explicit SharedPointer(T* ptr){//explicit-нельзя неявно преобразовать
			if(!ptr){
				throw "Bed value";
			}
			this->ptr = ptr;
			refCount = new int(0);
			cout <<"start: "<< *refCount << endl;
		}
		SharedPointer(const SharedPointer& sp){
			this->ptr = ptr;
			this->refCount = sp.refCount;
			(*refCount)++;
			cout <<"copy: "<< *refCount << endl;
		}
		~SharedPointer(){

			if(*refCount == 0){
				cout <<"!!!: "<< *refCount << endl;
				delete refCount;
				delete ptr;
				ptr = 0;
				refCount = 0;
			}else{
				cout <<"des: "<< *refCount << endl;
				(*refCount)--;
			}
		}
		T& operator*(){
			return *ptr;
		}
		T* operator->(){
			return ptr;
		}
	private:
		T* ptr;
		int *refCount;
};

class Name {
	public:
		
		Name() {
			m_funcName = "";
		}
		
		Name(char* funcName) {
			m_funcName = funcName;
		}
		
		~Name() {m_funcName = 0;}
		
		char* getName() {
			return m_funcName;
		}
	private:
		char* m_funcName;
};

template <typename  T>
void foo(SharedPointer<T> sp){
	
}

int main() {

	SharedPointer<Name> ptrName1(new Name("Alex"));
	SharedPointer<Name> ptrName2();
	
	foo(ptrName1);
	
	return 0;
}
