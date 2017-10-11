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
	Bibliotheek* bibliotheek = new Bibliotheek();
	bibliotheek->toon();
	bibliotheek->voegToe("Harry Potter");
	bibliotheek->toon();

	geefBoeken(bibliotheek);
	bibliotheek->toon();

	char c;
	cin >> c;

	return 0;
}