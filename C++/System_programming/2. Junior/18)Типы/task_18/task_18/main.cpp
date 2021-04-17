// TetstProj2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
#include <string>
#include <type_traits>
#include <typeinfo>
#include <memory>
#include <vector>
#include <cstdlib>

struct Data{};
class Ptr {
public:
	Ptr(Data* data) {
		std::cout << "Ptr()" << std::endl;
		m_data = data;
	}
	Ptr(const Ptr& otherPtr) = delete;//не сработает
	Ptr& operator=(const Ptr& otherPtr) = delete;//не сработает

	//для rvalue
	Ptr(Ptr&& otherPtr) noexcept {
		std::cout << "Ptr(Ptr&& a)" << std::endl;

		m_data = otherPtr.m_data;
		otherPtr.m_data = nullptr;
	}
	Ptr& operator=( Ptr&& otherPtr) noexcept {
		std::cout << "Ptr& operator=(const Ptr&& a)" << std::endl;
		m_data = otherPtr.m_data;
		otherPtr.m_data = nullptr;

		return *this;
	}

	~Ptr(){
		if (m_data) {
			delete m_data;
		}
	}
private:
	Data* m_data = nullptr;
};

void print(const std::string& str) {//rvalue
	std::cout << str << std::endl;
}

void print(std::string&& str) {//rvalue новый стандарт
	std::cout << str << std::endl;
}

template<class T>//универсальная сслка
void foo(T&& data) {//принимает rval и lval

}


int main()
{
	Ptr ptr1(new Data());
	Ptr ptr2(std::move(ptr1));//обнуляет переданный обьект
	std::vector<Ptr> vt;
	vt.push_back(Ptr(new Data()));

	int exit; std::cin >> exit;
	return 0;
}*/