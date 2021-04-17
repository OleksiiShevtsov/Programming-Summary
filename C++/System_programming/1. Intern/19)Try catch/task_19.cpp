#include <iostream>

using namespace std;
class File{
	public:
		~File(){
			cout <<"end file"<< endl;
		}
};
class NetException : public exception{
	public:
		what(){
			cout << "NetException" <<endl;
		}
};

void ParseFile() {
	File newFile;
	try {
		throw NetException();
	}
	
	catch (NetException& ex) {
		cout << ex.what() << endl;
	}
	catch (...) {//ловит все 
		cout << ex.what() << endl;
	}
}

int main() {

	try {
		ParseFile();
	}
	catch (exception& ex) {
		cout << ex.what() << endl;
	}

	return 0;
}
