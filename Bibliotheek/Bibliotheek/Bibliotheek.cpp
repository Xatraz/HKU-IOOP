#include "Bibliotheek.h"



Bibliotheek::Bibliotheek()
{
}

void Bibliotheek::toon()
{
	std::cout << "Bibliotheek " << boek->_type << std::endl;
}

void Bibliotheek::voegToe(std::string type)
{
	boek = new Boek(type);
}