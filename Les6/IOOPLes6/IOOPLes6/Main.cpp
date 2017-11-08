#include <iostream>
#include <fstream>
#include <string>
#define FILE "D:\\Documenten\\HKU-IOOP\\Les6\\IOOPLes6\\Tekst.txt"
#define FILE2 "D:\\Documenten\\HKU-IOOP\\Les6\\IOOPLes6\\TekstOther.txt"

int main() {
	char ch;
	//char ch2;

	std::ifstream in_stream;
	std::ofstream out_stream;
	out_stream.open("D:\\Documenten\\HKU-IOOP\\Les6\\IOOPLes6\\testout.txt");
	if (!out_stream) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(3);
	}

	bool swap = false;
	int i = 0;
	while (!in_stream.eof()) {
		
		if (swap == false) {
			in_stream.open(FILE);
			i += 1;
			if (!in_stream) {
				std::cout << "Problemen bij openen file" << std::endl;
				exit(1);
			}
		}
		else {
			in_stream.open(FILE2);
			if (!in_stream) {
				std::cout << "Problemen bij openen file" << std::endl;
				exit(2);
			}
		}
		std::string data;
		std::getline(in_stream, data);
		std::cout << data << std::endl;
		out_stream << data;
		swap = !swap;
		in_stream.close();
	}
	


	/*std::ofstream out_stream;
	out_stream.open("D:\\Documenten\\HKU-IOOP\\Les6\\IOOPLes6\\testout.txt");
	if (!out_stream) {
	std::cout << "Probleem bij openen file" << std::endl;
	exit(3);
	}

	in_stream.open(FILE);
	if (!in_stream) {
	std::cout << "Problemen bij openen file" << std::endl;
	exit(1);
	}

	int counter = 0;
	char test[256];
	while (!in_stream.eof()) {
	char test[256];
	counter += 1;

	in_stream >> (test,counter);
	std::cout << counter << std::endl;
	}
	std::cout << counter << std::endl;
	//out_stream << test[1];
	*/


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


	/*bool skip = true;

	in_stream >> std::noskipws;
	while (!in_stream.eof()) {
		in_stream >> ch;
		//in_stream >> ch2;

		skip = !skip;
		if (!skip) {
			out_stream << ch;
		}
	}*/



	//for (int a = 1; a < in_stream.eof(); a += 1)
	//{
	//	std::cout << a << std::endl;
	//}

	out_stream.close();
	in_stream.close();

	char c;
	std::cin >> c;

	return 0;
}