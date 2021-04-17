#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	int x=111,y=222,z=333, t;
	vector<int> myVector;
	cout <<"x: "<<x<<endl;
	cout <<"y: "<<y<<endl;
	cout <<"z: "<<z<<endl;
	myVector.push_back(x);
	myVector.push_back(y);
	myVector.push_back(z);
	for(int i = 0; i < myVector.size(); i++){
		cout <<myVector[i]<<endl;
	}
	cout <<endl;
	//итераторы
	vector<int>::iterator myIterator;
	cout <<"t(1 - 3): = ";
	cin >> t;
	myIterator = (myVector.begin() + t - 1);
	cout <<*myIterator<<endl;
	//перечисление через итератор 
	vector<int>::const_iterator constIterator; 
	for(constIterator = myVector.begin(); constIterator < myVector.end(); constIterator++){
		cout <<": "<<*constIterator<<endl;
	}
	cout <<endl;
	//операции
	vector<int>::iterator iter1 = (myVector.begin() + 0);
	vector<int>::iterator iter2 = (myVector.begin() + 2);
	vector<int>::iterator iter4 = myVector.end();
	*iter4 = *iter1 + *iter2;
	cout <<"iter1 + iter2 = "<<*iter4<<endl<<endl;
	//строки
	vector<string> strVector;
	strVector.push_back("text1");
	vector<string>::iterator strIterator = strVector.begin();
	cout <<*strIterator<<": "<<strIterator -> size()<<endl;
	*strIterator = "text2";
	cout <<*strIterator<<": "<<(*strIterator).size()<<endl;
	//добовление новых обьектов
	strVector.insert(strVector.begin(), "text0");
	cout <<strVector[0]<<endl;
	vector<string>:: const_iterator strIter;
	for(strIter = strVector.begin(); strIter < strVector.end(); ++strIter){
		cout <<": "<<*strIter<<endl;
	}
	//удаление элемента
	cout <<endl; 
	strVector.erase(strVector.begin());
	for(strIter = strVector.begin(); strIter < strVector.end(); ++strIter){
		cout <<": "<<*strIter<<endl;
	}
	strIterator = strVector.begin();//обязательно присвоить по новой(иначе будет ошибка)
	cout <<*strIterator<<": "<<strIterator -> size()<<endl;
	return 0;
}
