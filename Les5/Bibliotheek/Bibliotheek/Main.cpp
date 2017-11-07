#include <iostream>
#include "Bibliotheek.h"

using namespace std;

void geefBoeken(Bibliotheek* bibliotheek)
{
	cout << "Boeken gekregen" << endl;
	bibliotheek->toon();
	bibliotheek->voegToe("Ready Player One");
	bibliotheek->toon();
}

int main()
{
	Bibliotheek* bibliotheek = new Bibliotheek("Nieuwe Bibliotheek");
	bibliotheek->toon();
	bibliotheek->voegToe("Harry Potter");
	bibliotheek->toon();

	geefBoeken(bibliotheek);
	bibliotheek->toon();

	bibliotheek->leenUit("Ready Player One");
	bibliotheek->toon();

	bibliotheek->voegToe("Harry Potter");
	bibliotheek->leenUit("Ready Player One");
	bibliotheek->toon();

	std::cout << "---" << std::endl;

	Bibliotheek bib1 = Bibliotheek("Number One Bib");
	bib1.toon();

	std::cout << "---Bib1" << std::endl;
	bib1.voegToe("Some Book");
	bib1.toon();

	Bibliotheek bib2 = Bibliotheek("Second to Best");
	bib2 = bib1;

	std::cout << "---Bib2" << std::endl;
	bib2.voegToe("Some Other Book");
	bib2.toon();

	std::cout << "---Bib1" << std::endl;
	bib1.toon();

	char c;
	cin >> c;

	return 0;
}