#include <iostream>

using namespace std;

class FileSistemsException {
	FileSistemsException() {

	}
};

void ParseFile() {
	if (false) {
		throw exception("error!");
	}
}

void ParseFileSistem() {
	
	cout << "open!" << endl;
	try {
		ParseFile();
	}
	catch (const FileSistemsException& ex) {
		cout << "close!" << endl;
	}
}

int main() {

	try {
		ParseFileSistem();
	}
	catch (const exception& ex) {
		cout << ex.what() << endl;
		return -1;
	}


	int exit; cin >> exit;
	return 0;
}