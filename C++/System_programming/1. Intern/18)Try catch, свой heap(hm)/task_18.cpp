#include <iostream>

using namespace std;

void ParseFile() {
	


	throw exception("error!");
}

int main() {

	try {
		ParseFile();
	}
	catch (exception& ex) {
		cout << ex.what() << endl;
	}


	int exit; cin >> exit;
	return 0;
}
