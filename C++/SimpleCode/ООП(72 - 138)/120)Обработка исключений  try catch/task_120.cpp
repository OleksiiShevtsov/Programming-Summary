#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	
	ifstream fin;
	
	//��� ������������� try/catch � �������
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	
	try/*���� ��� ���������� �� - try*/{
		fin.open("task_120.txt");
		cout <<"file is open"<< endl;
	}
	/*std::exception&*/
	catch(const ifstream::failure& ex)/*���� ���� �� - catch*/{
		cout << ex.what() << endl;
		//cout << ex.code() << endl;
		cout <<"the file did not open"<< endl;
	}
	
	fin.close();
	
	return 0;
}
