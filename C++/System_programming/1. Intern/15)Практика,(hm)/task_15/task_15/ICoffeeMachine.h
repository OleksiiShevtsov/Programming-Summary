#pragma once
#include "ICoffeeMachineRecipe.h"

class ICoffeeMachine {
public:
	virtual ~ICoffeeMachine() {}
	virtual bool MakeCoffee(CoffeeType coffeType) = 0;
};
