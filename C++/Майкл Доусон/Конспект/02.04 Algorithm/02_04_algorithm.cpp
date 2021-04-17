#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	int x=111,y=222,z=333, t = 444;
	vector<int> myVector;
	cout <<"x: "<<x<<endl;
	cout <<"y: "<<y<<endl;
	cout <<"z: "<<z<<endl;
	myVector.push_back(x);
	myVector.push_back(y);
	myVector.push_back(z);
	//второй вектор
	vector<int> myVector2;
	myVector2.push_back(t);
	for(int i = 0; i < myVector.size(); i++){
		cout <<myVector[i]<<endl;
	}
	//функция поиск
	cout <<endl;
	vector<int>::const_iterator constIter;
	constIter = find(myVector2.begin(), myVector.end(), x + y);
	cout <<"find(): "<<*constIter<<endl;
	//функция рандома
	cout <<endl;
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(myVector.begin(), myVector.end());
	for(int i = 0; i < myVector.size(); i++){
		cout <<myVector[i]<<endl;
	}
	//функция упоряд.
	cout <<endl;
	sort(myVector.begin(), myVector.end());
	for(int i = 0; i < myVector.size(); i++){
		cout <<myVector[i]<<endl;
	}
	return 0;
}
