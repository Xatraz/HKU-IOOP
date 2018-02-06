#include <iostream>
#include "Intercity.h"
#include "Sprinter.h"
#include "Metro.h"
#include "Source.h"

void saySomething(Vervoersmiddel& v) {
	v.berekenMaxWinst();
}

void saySomething(Vervoersmiddel* v) {
	v->berekenMaxWinst();
}

int main()
{
	Metro vervoer1 = Metro(200, 0.8);
	Sprinter vervoer2 = Sprinter(265, 0.4);
	Intercity vervoer3 = Intercity(420, 0.4, 4);

	saySomething(vervoer1);
	saySomething(vervoer2);
	saySomething(vervoer3);


	char c;
	std::cin >> c;
	return 0;
}