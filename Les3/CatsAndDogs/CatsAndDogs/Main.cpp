#pragma once
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

void saySomething(Animal& animal) {
	animal.makeNoise();
}

int main()
{
	Animal animal1 = Animal();
	Dog animal2 = Dog();
	Cat animal3 = Cat();

//	animal1.makeNoise();
//	animal2.makeNoise();
//	animal3.makeNoise();

	saySomething(animal1);
	saySomething(animal2);
	saySomething(animal3);

	char c;
	std::cin >> c;
	return 0;
}