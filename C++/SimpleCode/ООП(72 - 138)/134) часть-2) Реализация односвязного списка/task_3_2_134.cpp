#include <iostream>
#include <string>
using namespace std;

/*-Очищение*/

template<typename T>
class List{
	public:
		List<T>();
		~List<T>();
		//удалить первый элемент списка
		void pop_front();
		//добавить последний элемент списка
		void push_back(T data);
		//очистить все элемент списка
		void clear();
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
	clear();
}
template<typename T>
void List<T>::push_back(T data){
	if(head == NULL){
		head = new Node<T>(data);
	}else{
		Node<T> *current = this->head;
		//поиск последнего элемента в списке
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
	int sizeList;
	cout <<"size: ";
	cin >> sizeList;
	
	for(int i = 0; i < sizeList; i++){
		list.push_back(i + 1);
	}
	
	for(int i = 0; i < list.GetSize(); i++){
		cout <<i+1<<": "<< list[i] << endl;
	}
	
	list.clear(); cout << endl;
	cout << list.GetSize(); 
	
	return 0;
}
