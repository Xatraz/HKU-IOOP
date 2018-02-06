#pragma once
#include "Vervoersmiddel.h"
class Metro : public Vervoersmiddel
{
public:
	Metro(int capaciteit, double ppkm);
	void berekenMaxWinst();
	~Metro();
};