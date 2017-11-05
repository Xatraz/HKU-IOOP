#pragma once
#include "Broodje.h"
#include <iostream>

class BroodMandje
{
public:
	BroodMandje();
	
	void toon();
	void voegToe(std::string type);
private:
	Broodje* broodje = new Broodje();
};

