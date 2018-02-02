#include <iostream>
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

void saySomething(Animal& animal) {
	animal.makeNoise();
	animal.feed();
}

void saySomething(Animal* animal) {
	animal->makeNoise();
}

int main() {
	Dog animal2 = Dog("Pluto");
	Cat animal3 = Cat("Felix");

	animal2.makeNoise();
	animal3.makeNoise();

	saySomething(animal2);
	std::cout << animal2.isHungry() << std::endl;
	saySomething(animal3);
	std::cout << animal2.isHungry() << std::endl;

	char c;
	std::cin >> c;
	return 0;
}