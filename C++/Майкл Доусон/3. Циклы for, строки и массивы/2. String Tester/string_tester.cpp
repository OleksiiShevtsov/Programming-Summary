#include <iostream>
#include <string>
using namespace std;
int main(){
	string word1 = "Game";
	string word2("Over");
	string word3(3,'!');
	string phrase = word1 +" "+ word2 + word3;
	cout <<"The phrase is: "<<phrase<<"\n\n";
	cout <<"The phrase has "<<phrase.size()/*возвращает беззнаковое целочисленное значение, 
		соответствующее размеру объекта string*/<<" characters in it.\n\n";
	cout <<"The characters at position 0 is: "<<phrase[0]<<"\n\n";
	cout <<"Character the characters at position 0.\n";
	phrase[0] = 'L';
	cout <<"The phrase is now: "<<phrase<<"\n\n";
	for(unsigned int i = 0;i < phrase.size();++i){
		cout <<"Character at position "<<i<<" is: "<<phrase[i]<<endl;
	}
	cout <<"\nThe sequence 'Over' begins atlocation ";
	cout <<phrase.find("Over")<<endl;/*ищет в вызвавшем ее объекте string ту строку, которая
										была указана в качестве аргумента данной функции.*/						
	if(phrase.find("eqqplant") == string::npos){
		cout<<"'eqqplant' is not in the phrase.\n\n";
	}
	phrase.erase(4,5);//удаляет указанную подстроку из объекта string
	cout <<"The phrase is now: "<<phrase<<endl;
	phrase.erase(4);
	cout <<"The phrase is now: "<<phrase<<endl;
	phrase.erase();
	cout <<"The phrase is now: "<<phrase<<endl;
	if(phrase.empty())/*возвращает значение типа bool*/{
		cout <<"\nThe phrase is no more.\n";
	}
	return 0;
}
