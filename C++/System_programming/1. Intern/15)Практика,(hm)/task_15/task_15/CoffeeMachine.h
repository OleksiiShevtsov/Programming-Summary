#pragma once
#include "ICoffeeMachine.h"
#include "ICoffeeMachineRecipe.h"

struct Recipe {
	uint32_t coffee = 0;
	uint32_t sugar = 0;
	uint32_t milk = 0;
};
class CoffeeMachine : public ICoffeeMachine, public ICoffeeMachineRecipe {
public:
	CoffeeMachine(uint32_t coffee, uint32_t sugar, uint32_t milk);
	bool MakeCoffee(CoffeeType coffeType) override;
	// Inherited via ICoffeeMachineRecipe
	void SetRecipe(uint32_t coffee, uint32_t sugar, uint32_t milk, CoffeeType coffeeType) override;

private:
	bool ReduceIngridients(const Recipe& recipe);

private:
	uint32_t m_coffee = 0;
	uint32_t m_sugar = 0;
	uint32_t m_milk = 0;
	static const int m_recipiesMaxCount = 30;
	Recipe m_recipe[m_recipiesMaxCount] = {};
};

