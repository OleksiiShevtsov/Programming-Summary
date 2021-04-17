#pragma once
#include <string>
class ILogger {
	public:
		virtual ~ILogger() {}
		virtual void Write(const std::string& data) = 0;
		//void* vtbl[3];
};
