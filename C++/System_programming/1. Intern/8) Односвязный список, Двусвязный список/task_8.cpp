#include <iostream>
#include <string>
using namespace std;
struct Worker {
    std::string name;
    std::string position;
    int salary;   
};

struct Node {
    Worker worker;
    Node* next = 0;
    Node* prev = 0;
};

int main(int argc, char* argv[]) {
    const char* positions[] = {"SEO", "Manager", "Developer", "QA"};
    const char* names[] = { "Dennis", "Anna", "Anton", "Artem" };
    const int personsCount = sizeof(names) / sizeof(names[0]);

    Node* firstNode = 0;
    Node* curNode = 0;
    Node* lastNode = 0;
    for (int i = 0; i < personsCount; ++i) {
    	
        Node* node = new Node;
		node->worker.name = names[i];
		node->worker.position = positions[i];
		node->worker.salary = 500;
		
        if (i == 0) {
            firstNode = node;
            curNode = node;
        }
		else if(i == personsCount - 1){
        	curNode->next = node;
        	lastNode = node;
        	lastNode->prev = curNode;
        }
        else {
            curNode->next = node;
            node->prev = curNode;
            curNode = node;
        }
    }
    
    Node* node = new Node;
	node->worker.name = "Bill";
	node->worker.position = "QA";
	node->worker.salary = 500;
	lastNode->next = node;
	node->prev = lastNode;
	lastNode = node;
	
	for(Node* curNode = lastNode; curNode; curNode = curNode->prev){
    	const Worker* worker = &(curNode->worker);
    	cout <<"Name: "<< worker->name <<"; Position: "<< worker->position <<"; salary: "<<worker->salary<<endl;
	}
	
	
}

