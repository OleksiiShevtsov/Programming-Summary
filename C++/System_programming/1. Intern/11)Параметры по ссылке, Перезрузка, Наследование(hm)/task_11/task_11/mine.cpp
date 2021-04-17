#include <iostream>
#include <string>
#include "Worker.h"

using namespace std;

void ShouWorker(Worker* worker) {
	cout << worker->GetFullName();
}

int main() {

	Worker worker("Alex", "Shevtsov", "Dev");
	Worker worker2("Alex", "Shevtsov");
	worker2.SetPosition("Devops");
	cout << "position: " << worker2.GetPosition() << endl;
	cout << "full name: " << worker.GetFullName() << endl;
	cout << "full name: " << worker2.GetFullName() << endl;

	ShouWorker(&worker);

	int exit; cin >> exit;
	return 0;
}