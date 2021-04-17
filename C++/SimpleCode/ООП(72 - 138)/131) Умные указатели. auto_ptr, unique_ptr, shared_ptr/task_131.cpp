#include <iostream>
#include <string>
#include <memory>
using namespace std;

//auto_ptr - (����������) ��������� ������� 
//��� ����������� � ����� ������, ������ ������ 
//��������

//unique_ptr - ���������� ��������� 
//������ �� ��������� �� ����� �� ������,
//� �� ����������� � ������ ������.
//���������� ����� ������� move()/up.swap(),
//�� ��������� ��� � ��������� auto_ptr

//shared_ptr - �����, ��������� ���������� 
//����� ��������� �� ���� ������� � ������
//��� ���� �� ����� ������ � ������������

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
	
	//������� up1.get() ���������� ���������
	int* p = up1.get();
	cout << p << endl;
	
	//�������� ������ ��� ����� ��������� 
	up1.release();
	
	//shared_ptr<int> sp1(new int (5));
	//shared_ptr<int> sp2(sp1);
	
	return 0;
}
