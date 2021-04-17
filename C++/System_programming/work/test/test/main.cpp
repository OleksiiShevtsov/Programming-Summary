#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {

	int masValue;
	bool boolstatus;
	vector<string> truck;
	vector<string> date;
	vector<int> mas;
	vector<string> numTruck;

	ifstream fin;

	fin.open("table.txt");

	if (fin.is_open()) {
		cout << "file is open" << endl;
	}
	else {
		cout << "the file did not open" << endl;
	}

	string str;

	while (!fin.eof()) {

		getline(fin, str);

		if (str.empty() == true) {
			continue;
		}

		date.push_back(str.substr(0, str.find(',')));
		str.erase(0, str.find(',') + 2);

		truck.push_back(str.substr(0, str.find(',')));
		boolstatus = false;

		if (numTruck.empty() == true) {
			numTruck.push_back(truck[truck.size() - 1]);
		}

		for (int i = 0; i < numTruck.size(); i++) {
			if (truck[truck.size() - 1] == numTruck[i]) {
				boolstatus = true;
			}
			if (boolstatus == false && i == numTruck.size() - 1) {
				numTruck.push_back(truck[truck.size() - 1]);
			}
		}
		str.erase(0, str.find(',') + 2);

		istringstream(str) >> masValue;
		mas.push_back(masValue);

	}

	fin.close();


	for (int i = 0; i < numTruck.size(); i++) {

		int m = 0;

		ofstream fout;

		string strI;

		stringstream ss;
		ss << i + 1;
		ss >> strI;

		strI = "table" + strI + ".txt";

		fout.open(strI, ofstream::out);

		if (fout.is_open()) {
			cout << "file is open" << endl;
		}
		else {
			cout << "the file did not open" << endl;
		}

		for (int j = 0; j < truck.size(); j++) {
			if (numTruck[i] == truck[j]) {

				fout << date[j] << ", " << truck[j] << ", " << mas[j] << endl;
				m = m + mas[j];
			}
		}
		fout << "total weight: " << m;

		fout.close();

	}

	return 0;
}