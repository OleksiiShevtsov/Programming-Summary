// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CoffeeMachineRecipe.h"
#include "CoffeeMachine.h"

void MakeBawarage(ICoffeeMachine& smth, CoffeeType type) {
	smth.MakeCoffee(type);
}

void Service(ICoffeeMachineRecipe& recipe) {
	recipe.SetRecipe(5, 5, 0, CoffeeTypeAmmericano);
	recipe.SetRecipe(5, 10, 50, CoffeeTypeLatte);
	recipe.SetRecipe(5, 10, 70, CoffeeTypeCapuchino);
}

class A {
public:
	static void foo(int i) {
		m_i = 10;
		std::cout << "foo()" << std::endl;
		new A;
	}
	void bar() {
		std::cout << "bar()" << std::endl;
	}

	static int m_i;
};
int A::m_i = 10;

int main()
{
	CoffeeMachine coffee(100, 1000, 1000);
	Service(coffee);
	int type = 0;
	std::cout << "Input coffee type " << std::endl;
	std::cin >> type;

	MakeBawarage(coffee, static_cast<CoffeeType>(type));
}