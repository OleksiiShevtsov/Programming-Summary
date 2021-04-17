#include <iostream>
#include <string>
using namespace std;

//������� ����� ����� ���� ��������
class Character{
	public:
		Character(){
			cout <<"Character constructor"<< endl;
		}
		
		//�� ������������ ��� 
		//����������� �������������
		int HP;
};

//����������� ������������
//������ ���������� �� ���� ����������� �����
class Orc : public virtual Character{
	public:
		Orc(){
			cout <<"Orc constructor"<< endl;
		}
};

//����������� ������������
//������ ���������� �� ���� ����������� �����
class Warrior : public virtual Character{
	public:
		Warrior(){
			cout <<"Warrior constructor"<< endl;
		}
};

class OrcWarrior: public Orc, public Warrior{
	public:
		OrcWarrior(){
			cout <<"OrcWarrior constructor"<< endl;
		}
};

int main(){

	OrcWarrior orcWarrior;

	cout << endl;

	return 0;
}
