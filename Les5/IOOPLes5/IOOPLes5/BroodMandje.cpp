#include "BroodMandje.h"


BroodMandje::BroodMandje()
{
	std::cout << "Broodmande: constructor" << std::endl;
}

BroodMandje::~BroodMandje()
{
	std::cout << "Broodmandje dtor" << std::endl;
	delete broodje;
}

BroodMandje::BroodMandje(const BroodMandje & anderMandje)
{
	broodje = new Broodje();
	broodje->_type = anderMandje.broodje->_type;
}

BroodMandje & BroodMandje::operator=(const BroodMandje& anderMandje)
{
	if (this != &anderMandje) {
		delete broodje;
		broodje = new Broodje();
		broodje->_type = anderMandje.broodje->_type;
	}

	return *this;
}

void BroodMandje::toon()
{
	std::cout << "Broodmandje " << broodje->_type << std::endl;
}

void BroodMandje::voegToe(std::string type)
{
	delete broodje;
	broodje = new Broodje(type);
}
