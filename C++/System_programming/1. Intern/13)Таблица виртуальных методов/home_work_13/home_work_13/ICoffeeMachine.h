#pragma once
#include <iostream>

class ICoffeeMachine{
	public:
		virtual ~ICoffeeMachine() {}
		virtual bool MakeAmericano() = 0;
		virtual bool MakeLatte() = 0;
		virtual void SetCoffeeRecipe(uint32_t water, uint32_t sugar, uint32_t milk) = 0;
};

