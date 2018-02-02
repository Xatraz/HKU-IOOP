#include <iostream>
#include "Dog.h"

void Dog::makeNoise() {
	std::cout << "Woof!" << std::endl;
}

Dog::Dog(std::string name) : Animal(name) {
}
