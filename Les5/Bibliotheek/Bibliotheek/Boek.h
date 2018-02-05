#pragma once
#include <string>
#include <iostream>

class Boek
{
public:
	Boek(std::string type);
	Boek();
	std::string _type = "onbekend";
	virtual~Boek();
};