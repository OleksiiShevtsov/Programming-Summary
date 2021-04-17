#include <iostream>
#include <string>
using namespace std;

template <typename  T>
class SharedPointer{
	public:
		SharedPointer(const SharedPointer& sp){
			this->ptr = sp.ptr;
			this->refCount = sp.refCount;
			*(this->refCount) = *(this->refCount) + 1;
			
			cout << "cons cop: " <<*refCount<< endl;
		}
		SharedPointer(T* ptr){
			this->ptr = ptr;
			refCount = new int(0);
			cout << "cons start: " <<*refCount<< endl;
		}
		~SharedPointer(){
			
			cout << "dest: " <<*refCount<< endl;
			if(*refCount == 0){
				cout << "!!!: " <<*refCount<< endl;
				delete refCount;
				delete ptr;
			}else{
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
		Name(char* funcName) {
			m_funcName = funcName;
		}
		
		~Name() {}
		
		char* getNmae() {
			return m_funcName;
		}
	private:
		char* m_funcName;
};

template <typename  T>
void foo(SharedPointer<T> sp){
	
}

int main() {

	SharedPointer<Name> ptrNmae(new Name("Alex"));
	
	foo(ptrNmae);
	
	return 0;
}
