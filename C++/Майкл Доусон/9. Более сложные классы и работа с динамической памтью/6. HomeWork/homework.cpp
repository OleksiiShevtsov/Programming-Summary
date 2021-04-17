/*Улучшите класс Lobby программы Game Lobby, написав функцию, дружественную 
классу Pl ayer, которая позволяет отправить объект класса Pl ayer в поток cout. 
Далее обновите функцию, которая позволяет отправить объект класса Lobby в 
поток cout, используя при этом функцию отправки в поток cout объекта класса Player,
 которую вы только что написали.*/
#include <iostream>
#include <string>
using namespace std;

//класс лобби
class Player{
	public:
		Player(const string& name = "");
		string GetName() const;
		Player* GetNext() const;
		void SetNext(Player* next);
	private:
		string m_Name;
		Player* m_pNext; //Указатель на следующего игрока в списке
	  	friend ostream& operator<<(ostream& os, const Player& aPlayer);
};
Player::Player(const string& name):
	m_Name(name),
	m_pNext(0)
{}
string Player::GetName() const{
	return m_Name;
}
Player* Player::GetNext() const{
	return m_pNext;
}
void Player::SetNext(Player* next){
	m_pNext = next;
}
ostream& operator<<(ostream& os, const Player& aPlayer){//поток для класса Player
	if (aPlayer.GetName() == "") { 
		os <<"The Player is empty.\n";
	}
	else{ 
		os << aPlayer.GetName(); 
	}
	return os; 	
}

//класс лобби
class Lobby{
	friend ostream& operator<<(ostream& os, const Lobby& aLobby);
	public:
		Lobby();
		~Lobby();
		void AddPlayer();
		void RemovePlayer();
		void Clear();
	private:
		Player* m_pHead;//первый игрок в очереди
};
Lobby::Lobby():
	m_pHead(0)
{}
Lobby::~Lobby(){
	Clear();
}
void Lobby::AddPlayer(){
	//создать нового игрока
	cout <<"Please enter the name of the new player: ";
	string name;
	cin >> name;
	Player* pNewPlayer = new Player(name);
	//если список пуст. поставить в его начало нового игрока
	if(m_pHead == 0){
		m_pHead = pNewPlayer;
	}
	//в противном случае найти конец списка и добавить игрока туда
	else{
		Player* pIter = m_pHead;
		while (pIter -> GetNext() != 0){
			pIter = pIter->GetNext();
		}	
		pIter->SetNext(pNewPlayer);
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
			os << *plter << endl;// Сразу передается указатель класса Player в поток 
			plter = plter->GetNext();
		}
	}
	return os; 
}
int main(){
	Lobby myLobby;
	int choice;
	do{
		cout << myLobby;
		cout <<"\nGAME LOBBY\n";
		cout <<"0 - Exit the program.\n";
		cout <<"1 - Add a payer to the lobby\n";
		cout <<"2 - Remove a player from the lobby\n";
		cout <<"3 - Clear the lobby\n";
		cout << endl <<"Enter choice: ";
		cin >> choice;
		switch(choice){
			case 0: cout <<"Good-bye.\n";break;
			case 1:	myLobby.AddPlayer();break;
			case 2:	myLobby.RemovePlayer();break;
			case 3:	myLobby.Clear();break;
			default: cout <<"That was not a valid choice\n";
		}
	}while(choice != 0);
	return 0;
}
