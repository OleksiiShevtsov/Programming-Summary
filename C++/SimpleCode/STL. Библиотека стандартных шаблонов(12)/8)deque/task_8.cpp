#include <iostream>
#include <deque>

//deque - ����� ������������� ������ � ������������� ������

using namespace std;
int main(){
	
	//������ ����� �� ��� � vector � list
	deque<int> dq;
	dq.push_back(12);
	cout << dq[0] << endl;
	
	return 0;
} 
