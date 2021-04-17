#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	int score;
	cin >> score;
	
	vector<int>array;
	int c;
	
	for(int i = 0; i < score; i++){
		
		cin >> c;
		array.push_back(c);
	
	}
	
	sort(array.begin(), array.end());
	
	cout << score <<" ";
	
	for(int i = 0; ; i++){
		
		if(i == score - 1){
			cout << array[i];
			break;
		}
		
		cout << array[i] << " ";
	}
	
	return 0;
}
