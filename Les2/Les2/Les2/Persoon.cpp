#include "Persoon.h"



Persoon::Persoon()
{
}


Persoon::~Persoon()
{
}

int Persoon::getAge()
{
	return this->leeftijd;
}

std::string Persoon::getName()
{
	return this->naam;
}