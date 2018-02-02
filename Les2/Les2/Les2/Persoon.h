#pragma once
#include <iostream>

class Persoon
{


public:
	Persoon();
	~Persoon();
	int leeftijd;
	std::string naam;

	int getAge();
	std::string getName();

};

