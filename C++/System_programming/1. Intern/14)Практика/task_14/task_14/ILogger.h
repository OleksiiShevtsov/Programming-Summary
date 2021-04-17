#pragma once
#include <iostream>
#include <string>
using namespace std;
class ILogger
{
	public:
		virtual void write(const string& data) = 0;
		virtual ~ILogger(){};
};