#include <iostream>

#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine(uint32_t coffee, uint32_t sugar, uint32_t milk) :
	m_coffee(coffee),
	m_sugar(sugar),
	m_milk(milk)
{
}

bool CoffeeMachine::MakeCoffee(CoffeeType coffeeType)
{
	if (coffeeType == CoffeeTypeError) {
		return false;
	}
	return ReduceIngridients(m_recipe[coffeeType]);
}

void CoffeeMachine::SetRecipe(uint32_t coffee, uint32_t sugar, uint32_t milk, CoffeeType coffeeType)
{
	m_recipe[coffeeType] = { coffee, sugar, milk };
}

bool CoffeeMachine::ReduceIngridients(const Recipe& recipe)
{
	if (m_coffee >= recipe.coffee &&
		m_sugar >= recipe.sugar &&
		m_milk >= recipe.milk) {

		m_coffee -= recipe.coffee;
		m_sugar -= recipe.sugar;
		m_milk -= recipe.milk;

		return true;
	}
	return false;
}
