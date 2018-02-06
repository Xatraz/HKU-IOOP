#pragma once
#include <iostream>
#include <string>


class Vervoersmiddel
{
public:
	Vervoersmiddel(const int& capaciteit, const double& ppkm);
	virtual void berekenMaxWinst() = 0;
	~Vervoersmiddel();

	std::string a = "test";
private:
	int capaciteit;
	double ppkm;
};

