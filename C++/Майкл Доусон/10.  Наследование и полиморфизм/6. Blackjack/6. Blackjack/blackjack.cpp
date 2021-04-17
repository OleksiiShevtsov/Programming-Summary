//Играет упрощенную версию игры Blackjack : от одного до семи игроков
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

//класс Card, представляющий отдельную игральную карту.
class Card{
	public:
		enum rank {ACE = 1, TWO, THRE, FOUR, FIVE, SIX, SEVEN, EIGTH, NINE, TEN, JACK, QUEEN, KING};
		enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
		//перегружаем оператор <<, чтобы можно было отправить обьект
		//типа Card в стандартный поток вывода
		friend ostream& operator<<(ostream& os, const Card& aCard);
		Card(rank r = ACE, suit s = SPADES, bool ifu = true);
		//возвращает значение кары, от 1 до 11
		int GetValue() const;
		//переварачивает карту: карта, лежащие лицом вверх,
		//переварачиваются лицом вниз и наоборот
		void Flip();
	private:
		rank m_Rank;
		suit m_Suit;
		bool m_IsFaceUp;
};
Card::Card(rank r, suit s, bool ifu):m_Rank(r),	m_Suit(s), m_IsFaceUp(ifu)
{}
int Card::GetValue() const {
	//если карта перевернута лицом вниз, ее значение равно 0
	int value = 0;
	if (m_IsFaceUp) {
		//value - число указанное на карте
		value = m_Rank;
		//value равно 10 для открытых карт
		if (value > 10) {
			value = 10;
		}
	}
	return value;
}
void Card::Flip() {
	m_IsFaceUp = !(m_IsFaceUp);
}

//класс Hand, представляет собой коллекцию карт.
class Hand {
	public:
		Hand();
		virtual ~Hand();
		//добавляем карту в руку 
		void Add(Card* pCard);
		//очищяем руку от карт
		void Clear();
		//получает сумму очков карт в руке, присваивая тузу 
		//значение 1 или 11 в зависимости от ситуации
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
	//проходит по вектору, освобождая всю память в куче
	vector<Card*>::iterator iter = m_Cards.begin();
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter) {
		delete *iter;
		*iter = 0;
	}
	//очищение ктора указатяля
	m_Cards.clear();
}
int Hand::GetTotal() const{
	//если карт в руке нет, возвращяем значение 0
	if(m_Cards.empty()){
		return 0;
	}
	// если первая карта имеет значение 0, то она лежит рубашкой вверх;
	// вернуть значение 0
	if (m_Cards[0]->GetValue() == 0){
		return 0;
	}
	//находит сумму всех карт, каждый туз дает 1 очко
	int total = 0;
	vector<Card*>::const_iterator iter;
	for (iter = m_Cards.begin(); iter != m_Cards.end(); iter++) {
		total += (*iter)->GetValue();
	}
	//определяет, держит ли рука туз 
	bool containsAce = false;
	for (iter = m_Cards.begin(); iter != m_Cards.end(); iter++){
		if ((*iter)->GetValue() == Card::ACE) {
			containsAce = true;
		}
	}
	// если рука держит туз и сумма довольно маленькая, туз дает 11 очков
	if (containsAce && total <= 11) {
		//добавляет только 10 очков, поскольку мі уже добавили 
		//за каждый туз по одному очку 
		total += 10;
	}
	return total;
}

//класс GenericPlayer, обобщенно представляющий игрока в Blackjack. 
//Он представляет не полноценного игрока, а общие елементы игрока-человека
//и игрока компьютера
class GenericPlayer : public Hand{
	friend ostream& operator << (ostream& os, const GenericPlayer& aGenericPlayer);
	public:
		GenericPlayer(const string& name = "");
		virtual ~GenericPlayer();
		//показывает, хочет ли игрокпродолжать брать карты
		virtual bool IsHitting() const = 0;
		//возвращяет значение, если игрок имеет перебор - сумму очков, большую 21
		bool IsBusted() const;
		//обьявляет, что игрок имеет перебор
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

//Класс Player представляет игрока-человека
class Player : public GenericPlayer {
	public:
		Player(const string& name = "");
		virtual ~Player();
		//показывает. хочет ли игрок продолжать брать карты
		virtual bool IsHitting() const;
		//объявляет. что игрок победил 
		void Win() const;
		//объявляет. что игрок проиграл 
		void Lose() const;
		//объявляет ничью 
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

//Класс House представляет дилера.
class House : public GenericPlayer{
	public:
		House(const string& name = "House");
		virtual ~House();
		//показывает, хочет ли игрок продолжать брать карты
		virtual bool IsHitting() const;
		//переварачивает первую карту
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

//Класс Deck представляет колоду карт.
class Deck : public Hand {
	public:
		Deck();
		virtual ~Deck();
		//создает стандартную колоду из 52 карт 
		void Populate();
		//тасует карты
		void Shuffle();
		//раздает одну карту в руки 
		void Deal(Hand& aHend);
		//дает дополнительные карты игроку 
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
	//создает стандартную колоду
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
	// продолжает раздавать карты до тех пор. пока у игрока не случается
	// перебор или пока он хочет взять еще одну карту
	while (!(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting()){
		Deal(aGenericPlayer);
		cout << aGenericPlayer << endl;
		if (aGenericPlayer.IsBusted()){
			aGenericPlayer.Bust();
		}
	}
}

//Класс Game представляет игру Blackjack
class Game{
	public:
		Game(const vector<string>& names);
		~Game();
		//приводит игру в Blackjack
		void Play();
	private:
		Deck m_Deck;
		House m_House;
		vector<Player>m_Players;
};
Game::Game(const vector<string>& names) {
	//создает вектор игроков из вектора с именами
	vector<string>::const_iterator pName;
	for (pName = names.begin(); pName != names.end(); ++pName) {
		m_Players.push_back(Player(*pName));
	}
	// засевает генератор случайных чисел
	srand(static_cast<unsigned int>(time(0)));
	m_Deck.Populate();
	m_Deck.Shuffle();
}
Game::~Game() {
}
void Game::Play() {
	//раздает каждому по две стартовые карты 
	vector<Player>::iterator pPlayer;
	for (int i = 0; i < 2; ++i) {
		for (pPlayer = m_Players.begin();pPlayer != m_Players.end(); ++pPlayer) {
			m_Deck.Deal(*pPlayer);
		}
		m_Deck.Deal(m_House);
	}
	//прячет первую карту дилера 
	m_House.FlipFirstCard();
	// открывает руки всех игроков
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer){
		cout << *pPlayer << endl;
	}
	cout << m_House << endl;
	//раздает игрокам дополнительные карты
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) {
		m_Deck.AdditionalCard(*pPlayer);
	}
	//показывает первую карту дилера 
	m_House.FlipFirstCard();
	cout << endl << m_House;
	//раздает дилеру дополнительные карты
	m_Deck.AdditionalCard(m_House);
	if (m_House.IsBusted()) {
		//все. кто остался в игре. побеждают
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer){
			if (!(pPlayer->IsBusted())) {
				pPlayer->Win();
			}
		}
	}
	else {
		// сравнивает суммы очков всех оставшихся игроков с суммой очков дилера
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
	// очищает руки всех игроков
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
	//игровой цыкл
	Game aGame(names);
	char again = 'y';
	while (again != 'n' && again != 'N'){
		aGame.Play();
		cout << "\nDo you want to play again? (Y/N): ";
		cin >> again;
	}
	return 0;
}

// перегружает оператор«, чтобы получить возможность отправить
// объект типа Card в поток cout
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

//перегружает оператор«, чтобы получить возможность отправить
// объект типа GenericPlayer в поток cout
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