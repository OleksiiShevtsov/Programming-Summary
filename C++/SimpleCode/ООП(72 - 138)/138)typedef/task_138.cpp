#include <iostream>
#include <string>
#include <vector>

//псевдоним для сокращения
typedef std::vector<int> vector_int;
typedef std::vector<float> vector_float;

int main(){

	vector_int myVector1(3);
	vector_float myVector2(5);

	std::cout << myVector1.size() << std::endl;
	std::cout << myVector2.size() << std::endl;
	
	return 0;
}
