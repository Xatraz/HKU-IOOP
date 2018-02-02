#pragma once
#include "Persoon.h"

class Student:public Persoon
{
public:
	int studiepunten;
	Student(int leeftijd, std::string naam, int studiepunten);
	~Student();
};

