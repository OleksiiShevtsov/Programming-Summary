#include <iostream>
#include "ICoffeeMachine.h"

class Mystery : public ICoffeeMachine{
	public:
		Mystery(uint32_t water, uint32_t sugar, uint32_t milk) {
			SetCoffeeRecipe(water, sugar, milk);
		}
		void SetCoffeeRecipe(uint32_t water, uint32_t sugar, uint32_t milk) {
			water >= 20 ? this->water = 20 : this->water = water;
			sugar >= 20 ? this->sugar = 20 : this->sugar = sugar;
			milk >= 20 ? this->milk = 20 : this->milk = milk;
		}
		bool MakeLatte() {

			if (water >= 4 && sugar >= 4 && milk >= 4) {
				water = water - 4;
				sugar = sugar - 4;
				milk = milk - 4;
				return true;
			}
			else {
				return false;
			}
		}
		bool MakeAmericano() {

			if (water >= 5 && sugar >= 5 && milk >= 5) {
				water = water - 5;
				sugar = sugar - 5;
				milk = milk - 5;
				return true;
			}
			else {
				return false;
			}

		}
	private:
		uint32_t water = 0;
		uint32_t sugar = 0;
		uint32_t milk = 0;
};


void RefuelCoffeeMachine(ICoffeeMachine& coffeeMachine, uint32_t water = 20, uint32_t sugar = 20, uint32_t milk = 20) {
	coffeeMachine.SetCoffeeRecipe(water, sugar, milk);
}

int main() {

	ICoffeeMachine* mystery = new Mystery(20, 10, 10);

	std::cout << mystery->MakeAmericano() << std::endl;
	std::cout << mystery->MakeAmericano() << std::endl;
	std::cout << mystery->MakeLatte() << std::endl;
	RefuelCoffeeMachine(*mystery);
	std::cout << mystery->MakeAmericano() << std::endl;

	int exit; std::cin >> exit;
	return 0;
}