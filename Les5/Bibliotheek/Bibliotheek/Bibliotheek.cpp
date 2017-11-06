#include "Bibliotheek.h"

Bibliotheek::Bibliotheek(std::string name)
{
	std::cout << "+ " << name << std::endl;
}

Bibliotheek::~Bibliotheek()
{
	std::cout << "- Bibliotheek Des" << std::endl;
	delete boek;
}

Bibliotheek::Bibliotheek(const Bibliotheek & andereBibliotheek)
{
	boek = new Boek();
	boek->_type = andereBibliotheek.boek->_type;
}

Bibliotheek & Bibliotheek::operator=(const Bibliotheek& andereBibliotheek)
{
	if (this != &andereBibliotheek) {
		delete boek;
		boek = new Boek();
		boek->_type = andereBibliotheek.boek->_type;
	}

	return *this;
}

void Bibliotheek::toon()
{
	std::cout << "Bibliotheek " << boek->_type << std::endl;
}

void Bibliotheek::voegToe(std::string type)
{
	delete boek;
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
