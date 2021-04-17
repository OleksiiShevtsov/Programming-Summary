// TetstProj2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <type_traits>
#include <typeinfo>
#include <memory>
#include <vector>
#include <cstdlib>
using namespace std;

template<class T>//универсальная сслка
void foo(T&& data) {//принимает rval и lval
	cout << data << endl;
}


int main()
{
	string str("...");

	foo(str);
	foo(string("..."));

	auto&& value = 5;

	int exit; std::cin >> exit;
	return 0;
}