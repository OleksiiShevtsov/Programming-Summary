#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	
	unsigned int roofHeight;
	unsigned int wallHeight;
	unsigned int numberOfHouses;
	
	cout << "Enter roof height: ";
	cin >> roofHeight;
	cout << "Enter wall height: ";
	cin >> wallHeight;
	cout << "Enter number of houses: ";
	cin >> numberOfHouses;
	
	cout << endl;
		
	for(int i = 0; i < roofHeight; i++){
		for(int j = 0; j < numberOfHouses; j++){
			if(roofHeight > 2 && roofHeight == i + 2){
				for(int k = roofHeight - i; k >= 0; k--){
					cout<< " ";
				}
				std::cout << "/";
				for(int k = 0; k < roofHeight + i - 2; k++){
					cout << "-";
				}
				cout << "\\";
				for(int k = roofHeight - i; k > 0; k--){
					cout <<" ";
				}	
			}
			else if(roofHeight >= 4 && roofHeight == i + 1 && wallHeight > 0){
				for(int k = roofHeight - i; k >= 0; k--){
					cout<< " ";
				}
				cout << "/ |";
				for(int k = 0; k < i - 2; k++){
					cout << "  ";
				}
				cout << "| \\";
				for(int k = roofHeight - i; k > 0; k--){
					cout <<" ";
				}	
			}
			else{
				for(int k = roofHeight - i; k >= 0; k--){
					cout <<" ";
				}
				cout <<"/";
				for(int k = 0; k < i; k++){
					cout << "  ";
				}
				cout <<"\\";
				for(int k = roofHeight - i; k > 0; k--){
					cout <<" ";
				}	
			}
		}
		cout << endl;		
	}
	
	if(roofHeight > 2){
		for(int i = 0; i < wallHeight  - 1; i++){
			for(int i = 0; i < numberOfHouses; i++){
				std::cout << "    |";
				
				for(int j = 0; j < roofHeight * 2 - 6; j++){
					std::cout << " ";
				}
				
				std::cout << "|   ";		
			}
		cout << endl;
	}
		if(roofHeight <= 3){
			for(int i = 0; i < numberOfHouses; i++){
				std::cout << "    |";
				
				for(int j = 0; j < roofHeight * 2 - 6; j++){
					std::cout << " ";
				}
				
				std::cout << "|   ";		
			}
		}
	}
	
	return 0;
}
