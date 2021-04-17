#include <iostream>
#include <vector>

using namespace std;

void printVectorInt(const vector<int> myVector);
void inputVectorInt(vector<int> &myVector);
void reversePrintVectorInt(vector<int> myVector);

int main(){
	
	vector<int> myVector(10);
	inputVectorInt(myVector);
	printVectorInt(myVector);
	reversePrintVectorInt(myVector);
	//итератор
	vector<int>::iterator it = myVector.begin();
	*it = 10;
	cout << myVector[0] << endl;
	
	vector<int>::const_iterator it_const;
	it_const = myVector.begin();
	//*it_const = 5; - бужет ошибка!
	
	//итератор переместиться на n место в векторе
	advance(it, 5);
	cout << *it << endl;
	
	//добавление значение в вектор через итератор
	myVector.insert(myVector.begin(), 100);
	cout << *(myVector.begin()) << endl;
	
	//удаляет елемент по итератору
	myVector.erase(myVector.begin(), myVector.begin() + 4);
	printVectorInt(myVector);
	
	return 0;
}

//вывод
void printVectorInt(const vector<int> myVector){
	cout <<"amount of elements: "<< myVector.size() << endl;
	
	//cbegin(), cend() - возвращяют константные итераторы (не работает в Дев с++)
	for(vector<int>::const_iterator iter = myVector.begin(); iter != myVector.end(); iter++){
		cout <<"myVector = "<< *iter << endl;
	} 
	cout << endl;
}

//вывод реверс
void reversePrintVectorInt(vector<int> myVector){
	cout <<"amount of elements: "<< myVector.size() << endl;
	
	for(vector<int>::reverse_iterator iter = myVector.rbegin(); iter != myVector.rend(); iter++){
		cout <<"myVector = "<< *iter << endl;
	} 
	cout << endl;
}

//ввод
void inputVectorInt(vector<int> &myVector){	
	bool ind = true;
	for(vector<int>::iterator iter = myVector.begin(); iter != myVector.end(); iter++){
		if(ind){
			*iter = 1;
			ind = false;
		}else{
			*iter = *(iter - 1) + 1;
		}
	} 
}
