#include "BroodMandje.h"


BroodMandje::BroodMandje()
{
}

void BroodMandje::toon()
{
	std::cout << "Broodmandje " << broodje->_type << std::endl;
}

void BroodMandje::voegToe(std::string type)
{
	broodje = new Broodje(type);

}
