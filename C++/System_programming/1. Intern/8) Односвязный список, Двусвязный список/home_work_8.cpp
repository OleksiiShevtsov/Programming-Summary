#include <iostream>

using namespace std;

struct Node {
	Node* pNext = 0;
	Node* pPrev = 0;
	int data = 0;
};
struct List {

	void AddNode(int data);//добавляет в конец списка элемент в конец
	void DeleteNode(const Node* node);//удаляет элемент списка
	void ShowList();//выводит все элементы в списке через запятую

	const Node* FindNode(int data);//*
	void AddNodeAfter(const Node* node, int data);//*

	Node* head = 0;

	int size = 0;
};

void List::AddNode(int data) {
	Node* node = new Node;
	if (head == 0) {
		head = node;
	}
	else {
		Node *current = this->head;
		
		while (current->pNext != 0) {

			current = current->pNext;
		}
		
		current->pNext = node;
		node->pPrev = current;
	}
	
	node->data = data;
	size++;
}
void List::DeleteNode(const Node* node){
	for (Node *current = this->head; current; current = current->pNext) {
		if(current == node){
			if(current == head){
				if(head->pNext == 0){
					head = 0;
				}
				else{
					current->pNext->pPrev = 0;
				}
			}
			else if(current->pNext == 0){
				current->pPrev->pNext = 0;
				
			}else{
				current->pPrev->pNext = current->pNext;
				current->pNext->pPrev = current->pPrev;
			}
			size--;
			delete current;
			break;
		}
	}
}
void List::ShowList() {
	cout << "ShowList: ";
	for (Node *current = this->head; current; current = current->pNext) {
		cout << current->data <<", ";
	}
	cout <<" size: "<< this->size<< endl;
}
const Node* List::FindNode(int data){
	for (Node *current = this->head; current; current = current->pNext) {
		if(current->data == data){
			return current;
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}
void List::AddNodeAfter(const Node* node, int data){
	for (Node *current = this->head; current; current = current->pNext) {
		if(current == node){
			Node* newNode = new Node;
			if(current->pNext == 0){
				
				newNode->pNext = 0;
				current->pNext = newNode;
				newNode->pPrev = current;
				
				
			}else{
				
				newNode->pPrev = current;
				newNode->pNext = current->pNext;
				
				current->pNext->pPrev = newNode;
				current->pNext = newNode;
				
			}
			newNode->data = data;
			size++;
			break;
		}
	}
}

int main() {

	List* listNew = new List;
	
	listNew->AddNode(10);
	listNew->AddNode(20);
	listNew->AddNode(30);
	listNew->ShowList();
	
	//cout <<"FindNode: "<< listNew->FindNode(40)->data << endl;
	
	listNew->DeleteNode(listNew->head->pNext);
	listNew->ShowList();
	listNew->DeleteNode(listNew->FindNode(30));
	listNew->ShowList();
	listNew->AddNodeAfter(listNew->head, 12);
	listNew->ShowList();
	listNew->AddNodeAfter(listNew->head, 11);
	listNew->ShowList();


	return 0;
}
