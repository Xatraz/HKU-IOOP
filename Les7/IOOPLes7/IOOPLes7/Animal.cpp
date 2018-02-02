#include "Animal.h"

#include <iostream>


void Animal::makeNoise() {
	std::cout << "Animal noise" << std::endl;
}

Animal::Animal(const std::string& name) : name(name) {
}

void Animal::feed() {
	isFed = true;
}

std::string Animal::isHungry() {
	if (isFed) {
		return "I'm fine";
	}
	else {
		return "Hungry!";
	}
}