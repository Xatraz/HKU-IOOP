#pragma once
#include <iostream>

class Persoon
{
public:
	std::string naam;
	int leeftijd;

	virtual void getName(std::string naam);
	virtual void getAge(int leeftijd);

	Persoon();
	~Persoon();
};

