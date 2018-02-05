#pragma once
#include <vector>
#include "Boek.h"

class Bibliotheek
{
public:
	Bibliotheek(std::string name);
	virtual ~Bibliotheek();

	Bibliotheek(const Bibliotheek& andereBibliotheek);
	Bibliotheek& operator = (const Bibliotheek&);

	void toon();
	void voegToe(std::string type);
	void leenUit(std::string type);
private:
	//Boek* = new Boek();
	std::vector<Boek*> boeken;
};