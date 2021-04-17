#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

	map <int, string> m = { {3, "c"}, {1, "a"}, {2, "b"} };

	/*cout << "forIterator" << endl;
	for (const auto& el : m) {
		cout << "first: " << el.first << ", second: " << el.second << endl;
	}
	cout << "iterator" << endl;
	for (map<int, string>::const_iterator it = m.begin(); it != m.end(); ++it) {
		cout << "first: " << it->first << ", second: " << it->second << endl;
	}
	cout << "iterator revers" << endl;
	for (map<int, string>::const_reverse_iterator it = m.rbegin(); it != m.rend(); ++it) {
		cout << "first: " << it->first << ", second: " << it->second << endl;
	}*/
	
	for (auto [key, value] : m) {
		cout << "first: " << key << ", second: " << value << endl;
	}

	int exit; cin >> exit;
	return 0;
}