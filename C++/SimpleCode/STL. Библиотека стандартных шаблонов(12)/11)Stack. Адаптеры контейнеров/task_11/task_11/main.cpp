#include <iostream>
#include <vector>
#include <list>
#include <deque>
//����������� ���������� ����
#include <stack>

//stack - �������
//stack �� ��������������� ��������� � ������� ��� ����������
//��������� ��������������� ������������ stack!!!

//������� ����������: ��������� �����, ������ �����

//��������� �������� � stack ������!!!

using namespace std;

int main() {

	//���������� - stack
	stack<int, vector<int>> st;

	//������� ����� � ������������
	st.push(20);
	st.push(30);
	st.push(40);
	//������� ����� ��� ������������
	st.emplace(50);
	//pop - ��������� ��������� ������� 
	st.pop();//(� ������ ������ 50)
	//top() - ���������� ������ �� ��������� ������� � �������
	cout << st.top() << endl;

	//������� ��������� � �����������
	/*
	while (!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}
	*/

	//_Get_container() - ���������� ��������� � ����� ����
	//�� ��������� ��� - deque
	auto a = st._Get_container();

	int exit; cin >> exit; return 0;
}