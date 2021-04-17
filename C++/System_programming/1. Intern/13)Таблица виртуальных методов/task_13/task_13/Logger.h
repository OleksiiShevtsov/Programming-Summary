#pragma once
#include "ILogger.h"

class Logger : public ILogger {
	public:
		void Write(const std::string& data) {
			std::cout << data << " (Logger)" << std::endl;
		}

		//void* vtbl[3];
		int m;
};
