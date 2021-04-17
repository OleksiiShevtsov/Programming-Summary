// Демонстрация поведения объекта, имеющего член данных,
// память для которого выделяется динамически
#include <iostream>
#include <string>
using namespace std;

class Critter{
	public:
		Critter(const string& name = "", int age = 0);//прототип конструктора
		~Critter();//прототип деструктор
		
		//прототип конструктора копирования
		Critter(const Critter& c);
		
		//прототип перегруженной операции присваевания
		Critter& operator=(const Critter& c);            //---?!!!---
		void Greet() const;
		
	private:
		string* m_pName;
		int m_Age;
};

//определение конструктора
Critter::Critter(const string& name, int age){
	cout <<"Constructor called\n";
	m_pName = new string(name);
	m_Age = age;
}

//определение деструктор
Critter::~Critter(){
	cout <<"Destructor called\n";//!
	delete m_pName;
}

//определение конструктора копирования
Critter::Critter(const Critter& c){
	cout <<"Copy Constructor called\n";
	m_pName = new string(*(c.m_pName));
	m_Age = c.m_Age;
}

//определение перегруженной операции присваевания
Critter& Critter::operator=(const Critter& c){
	cout <<"Overloaded Assignment Operator called\n";
	if(this != &c){
		delete m_pName;
		m_pName = new string(*(c.m_pName));
		m_Age = c.m_Age;
	}
	return *this;
}
void Critter::Greet () const{
	cout <<"I'm "<< *m_pName <<" and I'm "<< m_Age <<" years old. "; 
	cout <<"&m_pName: "<< &m_pName << endl;
}
void testDestructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();
int main(){
	testDestructor();
	cout << endl;
	
	Critter crit("Poochie", 5);
	crit.Greet();
	testCopyConstructor(crit);//создасться новый обьект через конс. копирования
	crit.Greet();
	cout << endl;
	
	testAssignmentOp();
	return 0;
}
void testDestructor(){
	Critter toDestroy("Rover", 3);
	toDestroy.Greet();
}
void testCopyConstructor(Critter aCopy){
	aCopy.Greet();
}
void testAssignmentOp(){
	Critter crit1("cryt1", 7);
	Critter crit2("cryt2", 9);
	crit1 = crit2;
	crit1.Greet();
	crit2.Greet();
	
	cout << endl;
	Critter cryt3("cryt3", 11);
	cryt3 = cryt3;
	cryt3.Greet();
}

