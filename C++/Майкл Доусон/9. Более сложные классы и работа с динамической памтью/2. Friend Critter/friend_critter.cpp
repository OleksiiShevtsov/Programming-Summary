// ��������������� ������������� ������������� �������
// � ���������� ����������
#include <iostream>
#include <string>
using namespace std;
class Critter{
	// ���������. ��� ��������� ���������� ������� ��������
	// �������������� �� ��������� � ������ Critter
	friend void Peek(const Critter& aCritter);
	friend ostream& operator<<(ostream& os, const Critter& aCritter);
	public:
		Critter(const string& name = "");
	private:
		string m_Name;
};
Critter::Critter(const string& name):	
	m_Name(name){}
void Peek(const Critter& aCritter);
ostream& operator << (ostream& os, const Critter& aCritter);
int main(){
	Critter crit("Poochie");
	cout <<"Calling Peek() to access crit's private data member, n_Name: \n";
	Peek(crit);
	cout <<"\nSending crit object to cout with the <<opertator:\n";
	cout << crit;
	return 0;
}
// ���������� ������������� �������, ������� ����� ��������
// ������ �� ���� ������ ������� ������ Critter
void Peek(const Critter& aCritter){
	cout << aCritter.m_Name << endl;
}
// ���������� ������������� �������, ������� ����� ��������
// ������ �� ���� ������ ������� ������ Critter
// ������������� ��������<<, ����������� ��������� ������ ���� Critter
// � ����� cout
ostream& operator << (ostream& os, const Critter& aCritter){
	os <<"Critter object - ";
	os <<"m_Name: "<< aCritter.m_Name;
	return os;
}
