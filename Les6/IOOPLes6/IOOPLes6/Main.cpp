#include <iostream>
#include <fstream>
#include <string>
#define FILE "D:/Documenten/Visual Studio/IOOPLes6/Tekst.txt"

int main() {
	char ch;
	//char ch2;

	std::ifstream in_stream;
	in_stream.open(FILE);
	if (!in_stream) {
		std::cout << "Problemen bij openen file" << std::endl;
		exit(1);
	}

	/*
	//in_stream.get(ch);
	in_stream >> std::noskipws;
	in_stream >> ch;

	std::cout << ch;// << std::endl;
	while (!in_stream.eof()) {
	in_stream >> ch;
	std::cout << ch;// << std::endl;
	}

	std::string data;
	getline(in_stream, data);
	std::cout << data;

	while (!in_stream.eof()) {
		getline(in_stream, data);
		std::cout << data;
	}
	*/

	std::ofstream out_stream;
	out_stream.open("D:/Documenten/Visual Studio/IOOPLes6/testout.txt");
	if (!out_stream) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	bool skip = true;

	in_stream >> std::noskipws;
	while (!in_stream.eof()) {
		in_stream >> ch;
		//in_stream >> ch2;

		skip = !skip;
		if (!skip) {
			out_stream << ch;
		}
	}

	out_stream.close();
	in_stream.close();

	char c;
	std::cin >> c;

	return 0;
}