#pragma once
#include "Vervoersmiddel.h"

class Sprinter : public Vervoersmiddel
{
public:
	Sprinter(int capaciteit, double ppkm);
	void berekenMaxWinst();
	~Sprinter();
};

