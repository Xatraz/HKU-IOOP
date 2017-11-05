#include <iostream>
#include "BroodMandje.h";

using namespace std;

int main()
{
	BroodMandje mandje1 = BroodMandje();
	mandje1.toon();

	std::cout << "---mandje1" << std::endl;
	mandje1.voegToe("ciabatta");
	mandje1.toon();

	BroodMandje mandje2 = BroodMandje();
	mandje2 = mandje1;

	BroodMandje mandje3 = mandje1;

	std::cout << "---mandje2" << std::endl;
	mandje2.toon();

	mandje1.voegToe("croissant");
	std::cout << "---mandje1" << std::endl;
	mandje1.toon();

	std::cout << "---mandje2" << std::endl;
	mandje2.toon();

	char c;
	cin >> c;

	return 0;
}