//������ ���������� ������ ���� Blackjack : �� ������ �� ���� �������
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

//����� Card, �������������� ��������� ��������� �����.
class Card{
	public:
		enum rank {ACE = 1, TWO, THRE, FOUR, FIVE, SIX, SEVEN, EIGTH, NINE, TEN, JACK, QUEEN, KING};
		enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
		//����������� �������� <<, ����� ����� ���� ��������� ������
		//���� Card � ����������� ����� ������
		friend ostream& operator<<(ostream& os, const Card& aCard);
		Card(rank r = ACE, suit s = SPADES, bool ifu = true);
		//���������� �������� ����, �� 1 �� 11
		int GetValue() const;
		//�������������� �����: �����, ������� ����� �����,
		//���������������� ����� ���� � ��������
		void Flip();
	private:
		rank m_Rank;
		suit m_Suit;
		bool m_IsFaceUp;
};
Card::Card(rank r, suit s, bool ifu):m_Rank(r),	m_Suit(s), m_IsFaceUp(ifu)
{}
int Card::GetValue() const {
	//���� ����� ����������� ����� ����, �� �������� ����� 0
	int value = 0;
	if (m_IsFaceUp) {
		//value - ����� ��������� �� �����
		value = m_Rank;
		//value ����� 10 ��� �������� ����
		if (value > 10) {
			value = 10;
		}
	}
	return value;
}
void Card::Flip() {
	m_IsFaceUp = !(m_IsFaceUp);
}

//����� Hand, ������������ ����� ��������� ����.
class Hand {
	public:
		Hand();
		virtual ~Hand();
		//��������� ����� � ���� 
		void Add(Card* pCard);
		//������� ���� �� ����
		void Clear();
		//�������� ����� ����� ���� � ����, ���������� ���� 
		//�������� 1 ��� 11 � ����������� �� ��������
		int GetTotal() const;
	protected:
		vector<Card*> m_Cards;
};
Hand::Hand() {
	m_Cards.reserve(7);
}
Hand::~Hand() {
	Clear();
}
void Hand::Add(Card* pCard){
	m_Cards.push_back(pCard);
}
void Hand::Clear() {
	//�������� �� �������, ���������� ��� ������ � ����
	vector<Card*>::iterator iter = m_Cards.begin();
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter) {
		delete *iter;
		*iter = 0;
	}
	//�������� ����� ���������
	m_Cards.clear();
}
int Hand::GetTotal() const{
	//���� ���� � ���� ���, ���������� �������� 0
	if(m_Cards.empty()){
		return 0;
	}
	// ���� ������ ����� ����� �������� 0, �� ��� ����� �������� �����;
	// ������� �������� 0
	if (m_Cards[0]->GetValue() == 0){
		return 0;
	}
	//������� ����� ���� ����, ������ ��� ���� 1 ����
	int total = 0;
	vector<Card*>::const_iterator iter;
	for (iter = m_Cards.begin(); iter != m_Cards.end(); iter++) {
		total += (*iter)->GetValue();
	}
	//����������, ������ �� ���� ��� 
	bool containsAce = false;
	for (iter = m_Cards.begin(); iter != m_Cards.end(); iter++){
		if ((*iter)->GetValue() == Card::ACE) {
			containsAce = true;
		}
	}
	// ���� ���� ������ ��� � ����� �������� ���������, ��� ���� 11 �����
	if (containsAce && total <= 11) {
		//��������� ������ 10 �����, ��������� � ��� �������� 
		//�� ������ ��� �� ������ ���� 
		total += 10;
	}
	return total;
}

//����� GenericPlayer, ��������� �������������� ������ � Blackjack. 
//�� ������������ �� ������������ ������, � ����� �������� ������-��������
//� ������ ����������
class GenericPlayer : public Hand{
	friend ostream& operator << (ostream& os, const GenericPlayer& aGenericPlayer);
	public:
		GenericPlayer(const string& name = "");
		virtual ~GenericPlayer();
		//����������, ����� �� ��������������� ����� �����
		virtual bool IsHitting() const = 0;
		//���������� ��������, ���� ����� ����� ������� - ����� �����, ������� 21
		bool IsBusted() const;
		//���������, ��� ����� ����� �������
		void Bust() const;
	protected:
		string m_Name;
};
GenericPlayer::GenericPlayer(const string& name):
	m_Name(name){
}
GenericPlayer::~GenericPlayer(){
}
bool GenericPlayer::IsBusted() const{
	return (GetTotal() > 21);
}
void GenericPlayer::Bust() const {
	cout << m_Name << " busts.\n";
}

//����� Player ������������ ������-��������
class Player : public GenericPlayer {
	public:
		Player(const string& name = "");
		virtual ~Player();
		//����������. ����� �� ����� ���������� ����� �����
		virtual bool IsHitting() const;
		//���������. ��� ����� ������� 
		void Win() const;
		//���������. ��� ����� �������� 
		void Lose() const;
		//��������� ����� 
		void Push() const;
};
Player::Player(const string& name) :
	GenericPlayer(name) {
}
Player::~Player() {
}
bool Player::IsHitting() const {
	cout << m_Name << ". do you want a hit (Y/N): ";
	char response;
	cin >> response;
	return (response == 'y' || response == 'Y');
}
void Player::Win() const{
	cout << m_Name << "wins.\n";
}
void Player::Lose() const {
	cout << m_Name << "loses.\n";
}
void Player::Push() const {
	cout << m_Name << "pushes.\n";
}

//����� House ������������ ������.
class House : public GenericPlayer{
	public:
		House(const string& name = "House");
		virtual ~House();
		//����������, ����� �� ����� ���������� ����� �����
		virtual bool IsHitting() const;
		//�������������� ������ �����
		void FlipFirstCard();
};
House::House(const string& name) :
	GenericPlayer(name) {
}
House::~House() {
}
bool House::IsHitting() const {
	return (GetTotal() <= 16);
}
void House::FlipFirstCard() {
	if (!(m_Cards.empty())) {
		m_Cards[0]->Flip();
	}
	else
	{
		cout << "No card to flio!\n";
	}
}

//����� Deck ������������ ������ ����.
class Deck : public Hand {
	public:
		Deck();
		virtual ~Deck();
		//������� ����������� ������ �� 52 ���� 
		void Populate();
		//������ �����
		void Shuffle();
		//������� ���� ����� � ���� 
		void Deal(Hand& aHend);
		//���� �������������� ����� ������ 
		void AdditionalCard(GenericPlayer& aGenericPlayer);
};
Deck::Deck() {
	m_Cards.reserve(52);
	Populate();
}
Deck::~Deck() {
}
void Deck::Populate() {
	Clear();
	//������� ����������� ������
	for (int s = Card::CLUBS; s <= Card::SPADES; ++s) {
		for (int r = Card::ACE; r <= Card::KING; r++) {
			Add(new Card(static_cast<Card::rank>(r), static_cast<Card::suit>(s)));
		}
	}
}
void Deck::Shuffle() {
	random_shuffle(m_Cards.begin(), m_Cards.end());
}
void Deck::Deal(Hand& aHand) {
	if (!m_Cards.empty()) {
		aHand.Add(m_Cards.back());
		m_Cards.pop_back();
	}
	else{
		cout << "Out of card. Unable to deal.";
	}
}
void Deck::AdditionalCard(GenericPlayer& aGenericPlayer) {
	cout << endl;
	// ���������� ��������� ����� �� ��� ���. ���� � ������ �� ���������
	// ������� ��� ���� �� ����� ����� ��� ���� �����
	while (!(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting()){
		Deal(aGenericPlayer);
		cout << aGenericPlayer << endl;
		if (aGenericPlayer.IsBusted()){
			aGenericPlayer.Bust();
		}
	}
}

//����� Game ������������ ���� Blackjack
class Game{
	public:
		Game(const vector<string>& names);
		~Game();
		//�������� ���� � Blackjack
		void Play();
	private:
		Deck m_Deck;
		House m_House;
		vector<Player>m_Players;
};
Game::Game(const vector<string>& names) {
	//������� ������ ������� �� ������� � �������
	vector<string>::const_iterator pName;
	for (pName = names.begin(); pName != names.end(); ++pName) {
		m_Players.push_back(Player(*pName));
	}
	// �������� ��������� ��������� �����
	srand(static_cast<unsigned int>(time(0)));
	m_Deck.Populate();
	m_Deck.Shuffle();
}
Game::~Game() {
}
void Game::Play() {
	//������� ������� �� ��� ��������� ����� 
	vector<Player>::iterator pPlayer;
	for (int i = 0; i < 2; ++i) {
		for (pPlayer = m_Players.begin();pPlayer != m_Players.end(); ++pPlayer) {
			m_Deck.Deal(*pPlayer);
		}
		m_Deck.Deal(m_House);
	}
	//������ ������ ����� ������ 
	m_House.FlipFirstCard();
	// ��������� ���� ���� �������
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer){
		cout << *pPlayer << endl;
	}
	cout << m_House << endl;
	//������� ������� �������������� �����
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) {
		m_Deck.AdditionalCard(*pPlayer);
	}
	//���������� ������ ����� ������ 
	m_House.FlipFirstCard();
	cout << endl << m_House;
	//������� ������ �������������� �����
	m_Deck.AdditionalCard(m_House);
	if (m_House.IsBusted()) {
		//���. ��� ������� � ����. ���������
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer){
			if (!(pPlayer->IsBusted())) {
				pPlayer->Win();
			}
		}
	}
	else {
		// ���������� ����� ����� ���� ���������� ������� � ������ ����� ������
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) {
			if (!(pPlayer->IsBusted())) {
				if (pPlayer->GetTotal() > m_House.GetTotal()) {
					pPlayer->Win();
				}
				else if (pPlayer->GetTotal() < m_House.GetTotal()) {
					pPlayer->Lose();
				}
				else {
					pPlayer->Push();
				}
			}
		}
	}	
	// ������� ���� ���� �������
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) {
		pPlayer->Clear();
	}
	m_House.Clear();
}

ostream& operator<<(ostream& os, const Card& aCard);
ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);

int main() {
	cout << "\t\tWelcome to Blackjack\n\n";
	int numPlayers = 0;
	while (numPlayers < 1 || numPlayers > 7) {
		cout << "How many players? (1 - 7)";
		cin >> numPlayers;
	}
	vector<string> names;
	string name;
	for (int i = 0; i < numPlayers; ++i) {
		cout << "Enter player name: ";
		cin >> name;
		names.push_back(name);
	}
	cout << endl;
	//������� ����
	Game aGame(names);
	char again = 'y';
	while (again != 'n' && again != 'N'){
		aGame.Play();
		cout << "\nDo you want to play again? (Y/N): ";
		cin >> again;
	}
	return 0;
}

// ����������� ��������, ����� �������� ����������� ���������
// ������ ���� Card � ����� cout
ostream& operator<<(ostream& os, const Card& aCard) {
	const string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	const string SUITS[] = { "c", "d", "h", "s" };
	if (aCard.m_IsFaceUp){
		os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
	}
	else{
		os << "XX";
	}
	return os;
}

//����������� ��������, ����� �������� ����������� ���������
// ������ ���� GenericPlayer � ����� cout
ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer) {
	os << aGenericPlayer.m_Name << ":\t";
	vector<Card*>::const_iterator pCard;
	if (!aGenericPlayer.m_Cards.empty()) {
		for (pCard = aGenericPlayer.m_Cards.begin(); pCard != aGenericPlayer.m_Cards.end(); ++pCard){
			os << *(*pCard) << "\t";
		}
		if (aGenericPlayer.GetTotal() != 0) {
			cout << "(" << aGenericPlayer.GetTotal() << ")";
		}
	}
	else {
		os << "<empty>";
	}
	return os;
}