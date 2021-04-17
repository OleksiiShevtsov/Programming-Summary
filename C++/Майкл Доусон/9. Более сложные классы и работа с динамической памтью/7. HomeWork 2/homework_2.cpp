/*�������-���� Lobby::AddPlayer() �� ��������� Game Lobby ������������, 
��������� ��� �������� �� ���� �������, ����� �������� ������ ������ � ����� �������.
�������� ����� ���� ������ program m_pTail, ������� �������� ���������� �� 
���������� ������ � �������, � ����������� ���, ����� �������� ������������� 
���������� ������� � �������.*/
#include <iostream>
#include <string>
using namespace std;

//����� �����
class Player{
	public:
		Player(const string& name = "");
		string GetName() const;
		Player* GetNext() const;
		void SetNext(Player* next);
	private:
		string m_Name;
		Player* m_pNext; //��������� �� ���������� ������ � ������	
};
Player::Player(const string& name):
	m_Name(name),
	m_pNext(){
}
string Player::GetName() const{
	return m_Name;
}
Player* Player::GetNext() const{
	return m_pNext;
}
void Player::SetNext(Player* next){
	m_pNext = next;
}

//����� �����
class Lobby{
	friend ostream& operator<<(ostream& os, const Lobby& aLobby);
	public:
		Lobby();
		~Lobby();
		void AddPlayer();
		void RemovePlayer();
		void Clear();
	private:
		Player* m_pHead; //������ ����� � �������
		Player* m_pTail; //��������� ����� � �������
};
Lobby::Lobby():
	m_pHead(0),
	m_pTail(0){
}
Lobby::~Lobby(){
	Clear();
}
void Lobby::AddPlayer(){
	//������� ������ ������
	cout << "Please enter the name of the new player: ";
	string name;
	cin >> name;

	Player* pNewPlayer = new Player(name);

	if (m_pHead == 0) {
		m_pHead = pNewPlayer;
		m_pTail = pNewPlayer;
	}
	else {
		m_pTail->SetNext(pNewPlayer);
		m_pTail = pNewPlayer;
	}
}
void Lobby::RemovePlayer(){
	if(m_pHead == 0){
		cout <<"The game lobby is empty. No one to remove!\n";
	}
	else{
		Player* pTemp = m_pHead;
		m_pHead = m_pHead->GetNext();
		delete pTemp;
	}
}
void Lobby::Clear(){
	while(m_pHead != 0){
		RemovePlayer();
	}
}
ostream& operator<<(ostream& os, const Lobby& aLobby){
	Player* plter = aLobby.m_pHead;
	os <<"\nHere's who's in the game lobby:\n"; 
	if (plter == 0) { 
		os <<"The lobby is empty.\n";
	}
	else{ 
		while (plter != 0) { 
			os << plter->GetName() << endl; 
			plter = plter->GetNext();
		}
	}
	return os; 
}
int main(){
	Lobby myLobby;
	
	myLobby.AddPlayer();
	myLobby.AddPlayer();
	myLobby.AddPlayer();
	
	cout << myLobby;
	
	myLobby.RemovePlayer();
	
	return 0;
}
