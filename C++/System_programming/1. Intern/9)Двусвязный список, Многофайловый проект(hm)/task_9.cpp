#include <iostream>
#include <string>
using namespace std;

struct Node {
	Node* pNext = 0;
	Node* pPrev = 0;
	int data;
};
struct List {

	void AddNode(int data);//добавляет в конец списка элемент в конец
	void DeleteNode(const Node* node);//удаляет элемент списка
	void ShowList();//выводит все элементы в списке через запятую

	const Node* FindNode(int data);//*
	void AddNodeAfter(const Node* node, int data);//*

	Node* head = 0;
	Node* tail = 0;

	int size = 0;
};
void List::ShowList() {
	for (Node *current = this->head; current; current = current->pNext) {
		cout << current->data <<", ";
	}
	cout << endl;
}
void List::AddNode(int data){
	Node* node = new Node;
	if(this->head == 0){
		this->head = node;
	}else{
		this->tail->pNext = node;
		node->pPrev = this->tail;
	}
	this->tail = node;
	this->size++;
	node->data = data;
}
void List::DeleteNode(const Node* node){
	for (Node *current = this->head; current; current = current->pNext) {
		if(current == node){
			current->pPrev->pNext = current->pNext;
			current->pNext->pPrev = current->pPrev;
			size--;
			delete current;
			break;
		}
	}
}

int main() {
    
    List* newList = new List;
    
    newList->AddNode(10);
    newList->AddNode(20);
    newList->AddNode(30);
    newList->ShowList();
    newList->DeleteNode(newList->head->pNext);
    newList->ShowList();
    
	return 0;
}

