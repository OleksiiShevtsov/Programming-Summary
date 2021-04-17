#include <iostream>
#include <vector>
#include <list>

using namespace std;

//List - ���������� ������

template <typename T>
void printListInt(const list<T> &myList){
	cout <<"amount of elements: "<< myList.size() << endl;
	
	for(list<int>::const_iterator iter = myList.begin(); iter != myList.end(); iter++){
		cout <<"myList = "<< *iter << endl;
	} 
	cout << endl;
}

int main(){
	
	list<int> myList(1);
	
	//���������� � ����� �����
	myList.push_back(10);
	myList.push_back(10);
	myList.push_back(10);
	myList.push_back(5);
	//���������� � ������ ����� 
	myList.push_front(20);
	//pop_... - �������
	
	printListInt(myList);
	
	//����������� �� �����������
	myList.sort();
	
	//������� ���������������� ���������
	myList.unique();
	
	//������� ��������
	myList.reverse();
	
	list<int>::iterator it = myList.begin();
	
	//�������� ������������� �� n ����� � �����
	//(���� �� ������������ ��������������)
	advance(it, 2);
	
	//���������� �� ���������
	myList.insert(it, 100);
	
	printListInt(myList);
	
	//������� �� ���������
	myList.erase(it);
		
	//������� �� ��������
	myList.remove(5);
	
	//�������� ����
	myList.clear();
	
	//��������� ��������� �������� ������� ������(����������, �������)
	//(����������� ������ ����� � ������(�������� ������, �������� �����))
	myList.assign(3, 123);
	
	printListInt(myList);
	
	return 0;
}
