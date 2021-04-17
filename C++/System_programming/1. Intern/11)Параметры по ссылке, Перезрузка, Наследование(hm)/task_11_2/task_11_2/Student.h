#pragma once
#include <iostream>
#include <string>
using namespace std; 
#include "Human.h"

class Student : public Human {
public:
	string group;
	void Learn();
};
