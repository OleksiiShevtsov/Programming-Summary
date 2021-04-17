#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
	int score_1, score_2, score_3, average;
	cout<<"Enter score 1: ";
	cin >> score_1;
	cout<<"Enter score 2: ";
	cin >> score_2;
	cout<<"Enter score 3: ";
	cin >> score_3;
	average = (score_1 + score_2 + score_3) / 3;
	cout <<"average: "<<average;
	return 0;
}
