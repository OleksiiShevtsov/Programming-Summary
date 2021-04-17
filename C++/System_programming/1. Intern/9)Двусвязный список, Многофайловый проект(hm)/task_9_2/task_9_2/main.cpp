#include <iostream>

using namespace std;

char** split(const char* str, char delimeter, char** tokens) {

	char* prov = new char[0];
	char* newProv = new char[0];
	int size = 0;
	int k = 1;

	for (int i = 0; i < 21; i++) {

		if (str[i] == delimeter) {

			char* tokensNew = tokens[size];
			tokensNew = new char[5];

			for (int j = 0; j < 5; j++) {
				tokensNew[j] = *(prov + j);
			}

			cout << "tokens[" << size << "]: " << tokens[size] << endl;
			size++;
			k = 0;

		}
		else {
			char* newProv = new char[k + 1];
			for (int j = 0; j < k - 1; j++) {
				newProv[j] = prov[j];
			}
			newProv[k - 1] = str[i];
			newProv[k] = '\0';

			delete prov;
			char* prov = new char[k + 1];
			for (int j = 0; j < k + 1; j++) {
				prov[j] = newProv[j];
			}
			delete newProv;
			k = k + 1;
		}
	}
	*tokens[4] = '\0';
	return tokens;
}

int main() {

	const char* str = "etj5-ejef-jtj5-etsr-";
	char** tokens = new char*[5];

	split(str, '-', tokens);

	cout << endl;
	for (int i = 0; i < 4; ++i) {
		cout << "tokens[" << i << "]: " << tokens[i] << endl;
	}

	return 0;
}