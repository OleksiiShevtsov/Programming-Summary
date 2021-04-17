#include <iostream>

int main(){
	
	int roofHeight;
	int wallHeight;
	int numberOfHouses;
	
	std::cout << "Enter roof height: ";
	std::cin >> roofHeight;
	std::cout << "Enter wall height: ";
	std::cin >> wallHeight;
	std::cout << "Enter number of houses: ";
	std::cin >> numberOfHouses;
	
	std::cout << std::endl;
	
		
	for(int i = 0; i < numberOfHouses; i++){
		for(int i = 0; i < roofHeight; i++){
			if(roofHeight > 2 && roofHeight == i + 2){
				for(int j = roofHeight - i; j >= 0; j--){
					std::cout<< " ";
				}
				std::cout << "/";
				for(int j = 0; j < roofHeight + i - 2; j++){
					std::cout << "-";
				}
				std::cout << "\\";
				std::cout << std::endl;
			}
			else if(roofHeight >= 4 && roofHeight == i + 1 && wallHeight > 0){
				for(int j = roofHeight - i; j >= 0; j--){
					std::cout<< " ";
				}
				std::cout << "/ |";
				for(int j = 0; j < i - 2; j++){
					std::cout << "  ";
				}
				std::cout << "| \\";
				std::cout << std::endl;
			}
			else{
				for(int j = roofHeight - i; j >= 0; j--){
					std::cout<< " ";
				}
				std::cout << "/";
				for(int j = 0; j < i; j++){
					std::cout << "  ";
				}
				std::cout << "\\";
				std::cout << std::endl;
			}
		}
		for(int i = 0; i < wallHeight - 1; i++){
			
			std::cout << "    |";
			
			for(int j = 0; j < roofHeight * 2 - 6; j++){
				std::cout << " ";
			}
			
			std::cout << "|";
			
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
	
	return 0;
}
