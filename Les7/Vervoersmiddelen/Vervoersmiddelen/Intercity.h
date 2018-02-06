#pragma once
#include "Vervoersmiddel.h"

class Intercity : public Vervoersmiddel
{
public:
	Intercity(int capaciteit, double ppkm, double toeslag);
	void berekenMaxWinst();
	~Intercity();

private:
	double toeslag;
};

