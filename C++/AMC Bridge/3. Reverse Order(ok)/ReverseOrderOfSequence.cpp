#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> array;

	int c;
	for (int i = 0; ; i++) {
		cin >> c;
		if (c == -1) { 	
			break;
		}
		
		array.push_back(c);
	}

	for(int i = (array.size() - 1); i >= 0; i--){
		cout << array[i] <<" ";
	}
	cout << c;
	
	return 0;
}
