#include "Unit.h"

Unit::Unit(int& health){

	this->health = health;

}

int Unit::GetHealth() {
	return this ->health;
}

int Unit::GetId() {
	return this -> Id;
}
