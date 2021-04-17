#include <iostream>
#include <string>
using namespace std;

/*
-push_frount(T data)-��������� ������� � ������ ������
-pop_back()-������� ������� � �����
-insert(T value, int index)-��������� ������� �� �������
-removeAt(int index)-������� ������� �� �������
*/

template<typename T>
class List{
	public:
		List<T>();
		~List<T>();
		//������� ������ ������� ������
		void pop_front();
		//�������� ��������� ������� ������
		void push_back(T data);
		//�������� ��� ������� ������
		void clear();
		//---------------------
		//��������� ������� � ������ ������
		void push_frount(T data);
		//��������� ������� �� �������
		void insert(T value, int index);
		//������� ������� �� �������
		void removeAt(int index);
		//������� ������� � �����
		void pop_back();
		
		int GetSize(){ return size; }
		T& operator[](const int index);
	private:
		
		template<typename TN>
		class Node{
			public:
				Node *pNext;
				T data;
				Node(TN data = TN(), Node *pNext = NULL){
					this->data = data;
					this->pNext = pNext;	
				}		
		};
		Node<T>* head;
		int size;
};
template<typename T>
List<T>::List(){
	size = 0;
	head = NULL;
}
template<typename T>
List<T>::~List(){
	
}
template<typename T>
void List<T>::push_back(T data){
	if(head == NULL){
		head = new Node<T>(data);
	}else{
		Node<T> *current = this->head;
		//����� ���������� �������� � ������
		while(current-> pNext != NULL){
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	size++;
}
template<typename T>
void List<T>::pop_front(){
	Node<T> *temp = head;
	head = head->pNext;
	delete temp;
	size--;
}
template<typename T>
void List<T>::clear(){
	while(head != NULL)/*(Size)*/{
		pop_front();
	}
}
template<typename T>
void List<T>::push_frount(T data){
	head = new Node<T>(data, head/*����� head ������� ��������� �� ��� ������ �������*/);
	size++;
}
template<typename T>
void List<T>::insert(T value, int index){
	if(index == 0){
		push_frount(value);
	}else{
		Node<T> *previous = this->head;
		
		for(int i = 0; i < index - 1; i++){
			previous = previous->pNext;
		}
		
		Node<T>* newNode = new Node<T>(value, previous->pNext);
		previous->pNext = newNode;
		
		size++;
	}
}
template<typename T>
void List<T>::removeAt(int index){
	if(index == 0){
		pop_front();
	}else{
		Node<T> *previous = this->head;
		
		for(int i = 0; i < index - 1; i++){
			previous = previous->pNext;
		}
		
		Node<T> *toDelete = previous->pNext;
		previous->pNext = toDelete->pNext;
		delete toDelete;
		
		size--;
	}
}
template<typename T>
void List<T>::pop_back(){
	removeAt(size - 1);
}
template<typename T>
T& List<T>::operator[](const int index){
	int counter = 0;
	Node<T> *current = this->head;
	while(current != NULL){
		if(counter == index){
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

int main(){
	
	List<int> list;
	
	list.push_back(20);
	list.push_frount(10);
	list.push_back(30);
	list.push_back(40);

	for(int i = 0; i < list.GetSize(); i++){
		cout <<i+1<<": "<< list[i] << endl;
	} 
	
	list.removeAt(2);cout << endl;
	list.insert(200, 3); cout << endl;
	
	for(int i = 0; i < list.GetSize(); i++){
		cout <<i+1<<": "<< list[i] << endl;
	} 
	
	list.pop_back(); cout << endl;
	
	for(int i = 0; i < list.GetSize(); i++){
		cout <<i+1<<": "<< list[i] << endl;
	} 
	
	return 0;
}
