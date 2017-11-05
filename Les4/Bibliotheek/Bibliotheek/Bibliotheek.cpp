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

void Bibliotheek::leenUit(std::string type)
{
	if (boek->_type == (type)) {
		std::string uit = "Uitgeleend";
		boek->_type = (uit);
		std::cout << "Leen Uit" << std::endl;
	}
	else {
		std::cout << "Boek Niet Beschikbaar" << std::endl;
	}
}
