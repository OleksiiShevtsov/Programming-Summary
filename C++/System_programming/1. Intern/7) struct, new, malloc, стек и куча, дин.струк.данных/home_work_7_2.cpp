#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Worker{
	string name;
	string position;
	int salary;
};

struct Node {//узел
   Worker worker;
   Node* next = 0;
};

int main(){
	
	char* position[] = {"SEO", "Manage", "Developer"};
	char* name[] = {"Alex", "Tarkus", "Avitus"};
	const int personsCount = sizeof(name)/sizeof(name[0]);
	
	Node* firstNode = 0;
	Node* curNode = 0;
	
	//заполнение
	for(int i = 0; i < personsCount; ++i){
		//Worker* worker = new Worker({{name[i], position[i], rand()%1000 + 500}, 0});
		Node* node = new Node;
		node->worker.name = name[i];
		node->worker.position = position[i];
		node->worker.salary = rand() % 1000 + 500;
		if(i == 0){
			firstNode = node;
			curNode = node;
		}
		else{
			curNode->next = node;
			curNode = node;
		}
	}
	
	//вывод
	int avarageSalary = 0;
	for(Node* curNode = firstNode; curNode; curNode = curNode->next){
		const Worcer* worcer = &(curNode->worker);
		
		cout <<"Name: "<< worker->name <<"; Position: "<< worker->position <<"; salary: "<<worker->salary<<endl;
		
		avarageSalary = avarageSalary + worker->salary;
	}
	cout <<"avarage salary: "<< avarageSalary/3 << endl;
	
	return 0;
}
