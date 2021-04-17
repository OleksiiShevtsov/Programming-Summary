#include <iostream>
#include <stdint.h>

int main(){
	
	bool b; // 1 byte (8 bit)
	int i; // 4 byte
	char c; // 1 byte
	short s; // 2,4 byte
	long l; // 4 - 8 byte
	long long ll;// 8 byt
	
	std::cout << "sizeof(b)  = " << sizeof(b) << std::endl;
	std::cout << "sizeof(i)  = " << sizeof(i) << std::endl;
	std::cout << "sizeof(c)  = " << sizeof(c) << std::endl;
	std::cout << "sizeof(s)  = " << sizeof(s) << std::endl;
	std::cout << "sizeof(l)  = " << sizeof(l) << std::endl;
	std::cout << "sizeof(ll)  = " << sizeof(ll) << std::endl;
	
	//размерность переменной
	int8_t i8;
	int16_t i16;
	int32_t i32;
	int64_t i64;
	
	std::cout << "sizeof(i8)  = " << sizeof(i8) << std::endl;
	std::cout << "sizeof(i16)  = " << sizeof(i16) << std::endl;
	std::cout << "sizeof(i32)  = " << sizeof(i32) << std::endl;
	std::cout << "sizeof(i64)  = " << sizeof(i64) << std::endl;
	
	std::cout << std::endl;
	
	//unsigned char c2 = 127;
	//std::cout << c2 += 1 << std::endl;
	
	//цыклы------------------------
	std::cout << "cikl" << std::endl;
	
	for(int i; i < 10; i++){
		std::cout <<"Hello Alex!"<< std::endl;
	}
	
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
			std::cout <<"i = " << i <<" j = "<< j  << std::endl;
		}
	}
	
	//область видисости-------------
	std::cout << "obl vidim" << std::endl;
	
	int a = 4;
	
	std::cout << a << std::endl;
	
	
	return 0;
}
