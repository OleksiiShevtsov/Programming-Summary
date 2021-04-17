#include <iostream>
#include <string>
using namespace std;
int example(int num);
string example(string text = "example");
int main(){
	int num;
	string text;
	cin >>num;
	cout <<example(num)<<"\n";
	cin >>text;
	if(text == "-"){
		text = example();
	}
	else{
		text = example(text);
	}
	cout <<text;
	return 0;
}
int example(int num){
	return num;
}
string example(string text){
	return text;
}
