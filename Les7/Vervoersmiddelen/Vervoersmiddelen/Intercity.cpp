#include "Intercity.h"



Intercity::Intercity(int capaciteit, double ppkm, double toeslag) : Vervoersmiddel(capaciteit, ppkm)
{
	capaciteit = 420;
	ppkm = 0.50;
	toeslag = 0.60;

	a = std::to_string(capaciteit * ppkm + toeslag);
}

void Intercity::berekenMaxWinst(){
	std::cout << "Maximale Opbrengst Intercity: " << a << std::endl;

}


Intercity::~Intercity()
{
}
