#include <iostream>
#include <vector>
#include <list>
#include <deque>
//библиотека для очереди
#include <queue>

//queue ограничивает контейнер свойствами очереди
//queue - очередь
//priority_queue - очередь с приоритетом

//queue не работает с vector
//priority_queue работает с vector, но не list

using namespace std;
int main() {

	//очередь
	queue<int, list<int>> q;
	q.push(10);
	q.push(20);
	q.push(30);

	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;

	cout << endl;
	//очередь с приоритетом
	priority_queue<int, vector<int>> qVector;

	qVector.push(10);
	qVector.push(20);
	qVector.push(30);

	cout << qVector.top() << endl;
	qVector.pop();
	cout << qVector.top() << endl;

	int exit; cin >> exit; return 0;
}