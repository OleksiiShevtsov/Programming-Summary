#include <iostream>
#include <vector>
#include <list>
#include <deque>
//���������� ��� �������
#include <queue>

//queue ������������ ��������� ���������� �������
//queue - �������
//priority_queue - ������� � �����������

//queue �� �������� � vector
//priority_queue �������� � vector, �� �� list

using namespace std;
int main() {

	//�������
	queue<int, list<int>> q;
	q.push(10);
	q.push(20);
	q.push(30);

	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;

	cout << endl;
	//������� � �����������
	priority_queue<int, vector<int>> qVector;

	qVector.push(10);
	qVector.push(20);
	qVector.push(30);

	cout << qVector.top() << endl;
	qVector.pop();
	cout << qVector.top() << endl;

	int exit; cin >> exit; return 0;
}