/*#include <iostream>
#include <vector>
#include <string>
#include <future>
using namespace std;

string ChackPassword(vector<string>::const_iterator from, vector<string>::const_iterator to) {
	for (; from != to; from++) {
		if (*from == "aae") {
			return *from;
		}
	}
	return *from;
}

int main() {

	const int threadsCount = 2;
	vector<string> pass = { "aaa", "aab", "aac", "aad", "aae", "aaf" };

	vector<future<string>> threadsList;

	int currentPaswordbatch = 0;
	const int batchSize = pass.size() / threadsCount;

	for (int i = 0; i < threadsCount; ++i) {
		threadsList.emplace_back(
			async(	ChackPassword, 
					pass.cbegin() + currentPaswordbatch * batchSize,
					pass.cbegin() + (currentPaswordbatch + 1) * batchSize));
	}

	for (auto& thread : threadsList) {		std::string pwd = thread.get();		if (!pwd.empty()) {			std::cout << pwd;			return 0;		}	}

	return 0;
}*/