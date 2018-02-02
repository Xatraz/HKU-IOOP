#include <iostream>
#include <string>
#include "Student.h"
#include "Docent.h"

int main() {
	Student s = Student(21, "Yamir", 0);
	Docent d = Docent(44, "Edwin", "IOOP");
	s.getAge();
	s.getName();
	std::cout << s.getAge() << s.getName() << s.studiepunten << std::endl;
	std::cout << d.getAge() << d.getName() << d.vak << std::endl;
	char c;
	std::cin >> c;
	return 0;
}