#include "Boek.h"



Boek::Boek(std::string type)
{
	_type = type;
}


Boek::Boek()
{
	std::cout << "+ Boek Con" << std::endl;
}

Boek::~Boek()
{
	std::cout << "- Boek Des" << std::endl;
}
