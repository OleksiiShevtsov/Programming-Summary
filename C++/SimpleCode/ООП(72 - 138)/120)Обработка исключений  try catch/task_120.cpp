#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	
	ifstream fin;
	
	//для использывания try/catch с файлами
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	
	try/*если нет исключений то - try*/{
		fin.open("task_120.txt");
		cout <<"file is open"<< endl;
	}
	/*std::exception&*/
	catch(const ifstream::failure& ex)/*если есть то - catch*/{
		cout << ex.what() << endl;
		//cout << ex.code() << endl;
		cout <<"the file did not open"<< endl;
	}
	
	fin.close();
	
	return 0;
}
