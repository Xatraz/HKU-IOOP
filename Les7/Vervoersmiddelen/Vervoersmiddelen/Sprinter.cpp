#include "Sprinter.h"



Sprinter::Sprinter(int capaciteit, double ppkm) : Vervoersmiddel(capaciteit, ppkm)
{
	capaciteit = 310;
	ppkm = 0.50;

	a = std::to_string(capaciteit * ppkm);
}

void Sprinter::berekenMaxWinst() {
	std::cout << "Maximale Opbrengst Sprinter: " << a << std::endl;

}


Sprinter::~Sprinter()
{
}
