#include <iostream>
#include <string>
using namespace std;

//��������� � ���������� - �������������� 
//������ ������ � ������

//��������� - ������������� ���������� ������ 
//� ������ ������

//���������� - ������������� ���������� ����� 
//������ ��� ���� �������� ������

//*��������� - ������*

class Cap/*�����*/{
	public:
		string GetColor(){
			return color;
		}
	private:
		string color = "red";
};

class Model/*�������*/{
	public:
		void InspectModelCap(){
			cout <<"cap is "<< cap.GetColor() << endl;
		}
	private:
		Cap cap;
};

class Human/*�������*/{
	public:
		void Think()/*��������*/{
			brain.Think();
		}
		
		void InspectTheCap(){
			cout <<"my cap is "<< cap.GetColor() << endl;
		}
	private:
		
		//*���������� - ������*
		
		class Brain/*����*/{
			public:
				void Think()/*��������*/{
					cout <<"I think"<< endl;
				}
		};
	
		Cap cap;
 		Brain brain;
};

int main(){

	//*���������� - ������*
	Human human;
	//������ �� ������� � ����
	//������ ���������������� - �������������
	human.Think();
	
	//*��������� - ������*
	human.InspectTheCap();
	
	cout << endl;
	Model model;
	model.InspectModelCap();
	
	return 0;
}
