#include <iostream>
#include <string>

using namespace std;

//������������ ����
//����� �������� ���!
namespace firstNs{
	void func(){
		cout <<"func firstNs_1"<< endl;
	}
}

namespace secondNs{
	void func(){
		cout <<"func secondNs_2"<< endl;
	}
}

namespace secondNs{
	void func2(){
		cout <<"func secondNs_3"<< endl;
	}
}

//using - ������������ ���
using namespace secondNs;

int main(){
	
	//�� ������������ ���� secondNs
	//��� �� ����� ��������� ����
	func();
	
	//��� ����� ��������� ����
	//��������� ���� - using
	firstNs::func();
	
	return 0;
}
