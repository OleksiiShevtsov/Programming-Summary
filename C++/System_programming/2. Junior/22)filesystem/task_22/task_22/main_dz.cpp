#include <iostream>
#include <stdlib.h>
#include <filesystem>
#include <string>
#include <fstream>

//и=псевдоним
namespace fs = std::filesystem;

int main() {

	try {

		std::string str;
		std::cout << "enter: ";
		std::cin >> str;
		//str = str + ".txt";

		fs::path path("E://programming//C++//System programming//Junior//22)//new22");

		for (auto& p : fs::recursive_directory_iterator(path)) {

			std::ifstream fin;
			std::string content;
			fin.open(p.path());
			fin >> content;
			
			if (content.find(str) != -1) {
				std::cout << p.path().filename() << std::endl;
			}

			fin.close();
		}

	}catch(const fs::filesystem_error& err){
		std::cout << err.what();
	}

	int exit; std::cout << "exit: "; std::cin >> exit;
}