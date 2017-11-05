#pragma once
#include "Broodje.h"
#include <iostream>

class BroodMandje
{
public:
	BroodMandje();
	virtual ~BroodMandje();
	BroodMandje(const BroodMandje& anderMandje);
	BroodMandje& operator = (const BroodMandje&);

	void toon();
	void voegToe(std::string type);
private:
	Broodje* broodje = new Broodje();
};

