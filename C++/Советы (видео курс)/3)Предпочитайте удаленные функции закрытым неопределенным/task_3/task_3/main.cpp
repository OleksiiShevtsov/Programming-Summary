#include <iostream>
using namespace std;

struct sData
{
	sData() {

	}
	//������ ����������
	//��� ������ � ������ private
	sData(sData&) = delete;
	sData &operator =(sData&) = delete;

	int x;
	int y;
};

void f(int) {
	cout << "int" << endl;
}
//����� ������ ���� ����������
void f(char) = delete;

int main() {

	{
		sData s1;// ���
		//sData s2 = s1;//��
		//s1 = s2;//�������� ������������
	}

	//f('a');//��������� ���������
	f(10);

	int exit; cin >> exit; return 0;
}