#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	int x=1, y=2, z=3, t=4;
	vector<int> myVector(1);
	cout <<"x: "<<x<<endl;
	cout <<"y: "<<y<<endl;
	cout <<"z: "<<z<<endl;
	myVector.push_back(x);//2
	myVector.push_back(y);//4
	myVector.push_back(z);//4
	cout <<"myVector("<<myVector.capacity()<<");"<<endl;
	myVector.push_back(t);//8
	cout <<"myVector("<<myVector.capacity()<<");"<<endl;
	myVector.reserve(10);
	cout <<"myVector("<<myVector.capacity()<<");"<<endl;
	return 0;
}
