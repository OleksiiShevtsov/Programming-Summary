#include <iostream>
#include <string>
#include <memory>
using namespace std;

//auto_ptr - (устаревший) указатель который 
//при копировании в новый обьект, старые данные 
//затирает

//unique_ptr - уникальный указатель 
//только он указывает на какой то обьект,
//и не копируетьс€ в другой обьект.
//»сключение через функцию move()/up.swap(),
//но результат как в указателе auto_ptr

//shared_ptr - общий, несколько указателей 
//могут указывать на одну область в пам€ти
//при этом не будет ошибки с уничтожением

template<typename T>
class SmartPointer{
	public:
		SmartPointer(T* ptr){
			cout << "Construktor" << endl;
			this->ptr = ptr;
		}
		~SmartPointer(){
			cout << "Destruktor" << endl;
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
	
	auto_ptr<int> up1(new int(5));
	
	//функци€ up1.get() возвращ€ет указатель
	int* p = up1.get();
	cout << p << endl;
	
	//затерает пам€ть дл€ Їтого указател€ 
	up1.release();
	
	//shared_ptr<int> sp1(new int (5));
	//shared_ptr<int> sp2(sp1);
	
	return 0;
}
