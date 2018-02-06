#include "Metro.h"


Metro::Metro(int capaciteit, double ppkm) : Vervoersmiddel(capaciteit, ppkm)
{
	capaciteit = 6;
	ppkm = 2.50;

	a = std::to_string(capaciteit * ppkm);
}

void Metro::berekenMaxWinst()
{
	std::cout << "Maximale Opbrengst Metro: " << a << std::endl;
}


Metro::~Metro()
{
}
