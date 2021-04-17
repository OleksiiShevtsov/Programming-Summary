#pragma once
#include <cstdint>

enum CoffeeType {
	CoffeeTypeError = 0,
	CoffeeTypeLatte = 1,
	CoffeeTypeAmmericano = 2,
	CoffeeTypeCapuchino = 3
};
class ICoffeeMachineRecipe {
public:
	~ICoffeeMachineRecipe() {}
	virtual void SetRecipe(uint32_t coffee, uint32_t sugar, uint32_t milk, CoffeeType coffeeType) = 0;
};