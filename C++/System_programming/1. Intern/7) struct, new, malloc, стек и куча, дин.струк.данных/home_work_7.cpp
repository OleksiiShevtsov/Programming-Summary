#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Worker{
	string name;
	string position;
	int salary;
	Worker* next = 0;
};

struct Pointer {
   Worker* next = 0;
   Worker* prev = 0;
};

int main(){
	
	char* position[] = {"SEO", "Manage", "Developer"};
	char* name[] = {"Alex", "Tarkus", "Avitus"};
	const int personsCount = sizeof(name)/sizeof(name[0]);
	
	Worker* firstWorker = 0;
	Worker* curWorker = 0;
	
	//заполнение
	for(int i = 0; i < personsCount; ++i){
		//Worker* worker = new Worker({name[i],position[i],rand()%1000 + 500});
		Worker* worker = new Worker;
		worker->name = name[i];
		worker->position = position[i];
		worker->salary = rand() % 1000 + 500;
		if(i == 0){
			firstWorker = worker;
			curWorker = worker;
		}
		else{
			curWorker->next = worker;
			curWorker = worker;
		}
	}
	
	//вывод
	int avarageSalary = 0;
	for(Worker* curWorker = firstWorker; curWorker; curWorker = curWorker->next){
		cout <<"Name: "<< curWorker->name <<"; Position: "<< curWorker->position <<"; salary: "<<curWorker->salary<<endl;
		avarageSalary = avarageSalary + curWorker->salary;
	}
	cout <<"avarage salary: "<< avarageSalary/3 << endl;
	
	return 0;
}
