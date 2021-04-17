#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <tuple>
#include <optional>

using namespace std;

//проверка без ексепшинов
optional<string> GetWorkerNameById(string_view id) {
	if (id == "pass") {
		return "Alex";
	}
	return nullopt;
}

int main() {

	auto workerNmae = GetWorkerNameById("pass");
	if (workerNmae) {
		cout << *workerNmae << endl;
	}

	int exit; cout << "exit: ";  cin >> exit;
	return 0;
}