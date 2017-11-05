#include <iostream>
#include "BroodMandje.h";

using namespace std;

void geefMandjeDoor(BroodMandje* mandje) {
	cout << "Mandje gekregen" << endl;
	mandje->toon();
	mandje->voegToe("c");
	mandje->toon();
}

int main()
{
	BroodMandje* mandje = new BroodMandje();
	mandje->toon();
	mandje->voegToe("ciabatta");
	mandje->toon();

	geefMandjeDoor(mandje);
	mandje->toon();

	char c;
	cin >> c;

	return 0;
}