#include <iostream>
#include <Animal.h>
#include <Cat.h>

int main() {
	//Animal animal = Animal("Beast");
	//animal makeNoise();

	Cat cat = Cat("Felix");
	cat.makeNoise();

	Dog dog = Dog("Sivert");
	dog.makeNoise();

	return 0;
}