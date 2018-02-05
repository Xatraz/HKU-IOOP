#include "Bibliotheek.h"

Bibliotheek::Bibliotheek(std::string name)
{
	std::cout << "+ " << name << std::endl;
}

Bibliotheek::~Bibliotheek()
{
	std::cout << "- Bibliotheek Des" << std::endl;
	//delete boek;
}

Bibliotheek::Bibliotheek(const Bibliotheek & andereBibliotheek)
{
	//boek = new Boek();
	//boek->_type = andereBibliotheek.boek->_type;

	this->boeken = andereBibliotheek.boeken;
}

Bibliotheek & Bibliotheek::operator=(const Bibliotheek& andereBibliotheek)
{
	if (this != &andereBibliotheek) {
		//delete boek;
		//boek = new Boek();
		//boek->_type = andereBibliotheek.boek->_type;

		this->boeken = andereBibliotheek.boeken;
	}

	return *this;
}

void Bibliotheek::toon()
{
	//std::cout << "Bibliotheek " << boek->_type << std::endl;

	for (auto i : boeken)
	{
		std::cout << "Bibliotheek " << i->_type << std::endl;
	}
}

void Bibliotheek::voegToe(std::string type)
{
	//delete boek;
	//boek = new Boek(type);
	boeken.push_back(new Boek(type));
}

void Bibliotheek::leenUit(std::string type)
{
	/*if (boek->_type == (type)) {
		std::string uit = "Uitgeleend";
		boek->_type = (uit);
		std::cout << "Leen Uit" << std::endl;
	}
	else {
		std::cout << "Boek Niet Beschikbaar" << std::endl;
	}*/

	int j = 0;
	for (auto i : boeken)
	{
		std::cout << "Bibliotheek " << i->_type << std::endl;
		if (i->_type == (type)) {
			std::string uit = "Uitgeleend";
			i->_type = (uit);
			std::cout << "Leen Uit" << std::endl;
		}
		else {
			j++;
		}
	}
	if (j == boeken.size()) {
		std::cout << "Boek Niet Beschikbaar" << std::endl;
	}
}
