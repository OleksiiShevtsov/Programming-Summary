/*#include <iostream>
#include <stdlib.h>
#include <filesystem>

//�=���������
namespace fs = std::filesystem;

int main() {
	try {
		//fs::current_path();

		//������ � ������
		//fs::space_info si = fs::space("C:/");
		//std::cout << si.available << std::endl;

		//��������
		//fs::path path("E://programming//C++//System programming//Junior//22)//new33");

		//if (fs::is_directory(path)) {
		//	fs::remove(path);
		//}

		fs::path path("E://programming//C++//System programming//Junior//22)//new22");
		fs::permissions(path, fs::perms::owner_all);
		fs::create_directory(path);

	}catch(const fs::filesystem_error& err){
		std::cout << err.what();
	}

	int exit; std::cout << "exit: "; std::cin >> exit;
}*/