#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human {
	public:
		string GetName();
		void SetName(string name);
	private:
		string name;
};

