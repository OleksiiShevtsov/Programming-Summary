// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include "Logger.h"

void Parse(ILogger& logger);

class ConsoleLogger : public ILogger {
	public:
		// Inherited via ILogger
		virtual void Write(const std::string& data) override{
			std::cout << data << " (ConsoleLogger)" << std::endl;
		}
};

class FileLogger : public ILogger {
	public:
		// Inherited via ILogger
		virtual void Write(const std::string& data) override{
			std::cout << data <<" (FileLogger)"<< std::endl;
		}
};
int main() {
	ILogger* logger1 = new ConsoleLogger();
	ILogger* logger2 = new FileLogger();

	Parse(*logger1);
	Parse(*logger2);

	delete logger1;
	delete logger2;

	int exit; std::cin >> exit;
	return 0;
}