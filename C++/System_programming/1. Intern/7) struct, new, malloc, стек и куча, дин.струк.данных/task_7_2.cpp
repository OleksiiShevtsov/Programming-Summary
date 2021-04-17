#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int* foo(){
	int x1 = 2;
	return &x1;
}
/*
stek - ����������� ������
heap - ������������ ������
*/
int main(){

	//����***
	
	int* x = foo();
	//�������� ���� ����� ���� ��� � ������ ������ ����� ������
	cout << *x << endl;
	
	//����: malloc*****
	
	struct Worked{
		string name;
	};
	
	int* i = static_cast<int*>(malloc(sizeof(int)));//��������� ������ � ����
	*i = 100;
	free(i);//�������� ������
	
	//����: new*****
	
	Worked* work = new Worked;
	work->name = "Alex";
	cout << work->name << endl;
	(*work).name = "Alex2";
	cout << (*work).name << endl;
	delete work;
	work = NULL;
	//cout << (*work).name << endl;//�����
	
	//����: ����*****
	cout << endl;
	
	struct List{
		string name;
		List* next = 0;
	};
	List* list_1 = new List;
	List* list_2 = new List;
	List* list_3 = new List;
	
	list_1 -> name = "list_1";
	list_2 -> name = "list_2";
	list_3 -> name = "list_3";
	
	list_1->next = list_2;
	list_2->next = list_3;
	
	for(List* list = list_1; list != 0; list = list -> next){
		cout << list->name << endl;
	}
	
	return false;
}
