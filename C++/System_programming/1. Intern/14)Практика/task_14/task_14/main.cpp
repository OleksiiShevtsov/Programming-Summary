#include <iostream>
#include <string>
#include "ILogger.h"

using namespace std;

class LoggerConsole : public ILogger {
	public:
		LoggerConsole(int size) {
			this->size = size;
		}
		~LoggerConsole() {
			delete arrayChar;
		}

		void write(const string& data){

			for (int i = 0; i < data.length(); i++) {

				arrayChar[buffer++] = data.at(i);

				if (buffer == size) {

					for (int i = 0; i < buffer; i++) {
						cout << arrayChar[i];
					}
					cout << endl;
					buffer = 0;
				}
			}
		}
		void buf() {
			for (int i = 0; i < buffer; i++) {
				cout << arrayChar[i];
			}
			cout << endl;
			cout << buffer - 1<< endl;
		}
	private:
		int buffer = 0;
		int size;
		char* arrayChar = new char[size];
};

void handleReq(ILogger* loger, const string& data) {
	loger->write(data);
}

int main() {

	LoggerConsole* logerConsole = new LoggerConsole(6);
	
	handleReq(logerConsole, "Alex");
	handleReq(logerConsole, "denchik");
	handleReq(logerConsole, "lolik");

	logerConsole->buf();


	int exit; cin >> exit;
	return 0;
}
