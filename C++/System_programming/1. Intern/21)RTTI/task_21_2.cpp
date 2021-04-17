#include <iostream>

using namespace std;

template <typename  T>
class SharedPointer{
	public:
		SharedPointer(const SharedPointer& sp){
			
			copySharedPointer(sp);
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
		SharedPointer& operator=(const SharedPointer& sp){
			
			copySharedPointer(sp);
			cout << "operator= " <<*refCount<< endl;
			
			return *this;
		}
	private:
		
		void copySharedPointer(const SharedPointer& sp){
			
			if(this->ptr != sp.ptr){
				
				this->ptr = sp.ptr;
				this->refCount = sp.refCount;
				*(this->refCount) = *(this->refCount) + 1;
			}
		}
		
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
		
		~Name() {}
		
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
	
	ptrName2 = ptrName1;
	
	foo(ptrName1);
	
	return 0;
}
