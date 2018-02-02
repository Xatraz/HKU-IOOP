#pragma once
#include "Persoon.h"

class Docent :public Persoon
{
public:
	std::string vak;
	Docent(int leeftijd, std::string naam, std::string vak);
	~Docent();
};

