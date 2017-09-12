#pragma once
class Input
{
private:
	char yearAndClass[4] = { 'c1', 'c2', 'c3', 'c4' }, department[3] = { 'd1', 'd2', 'd3' }; 
	int day, month, year;

public:
	char Date(int d, int m, int y);
	Input(char yrcl, char dprt, char date);
	void changeYearAndClass();
	void changeDepartment();
	void changeDate();
	~Input();
};

