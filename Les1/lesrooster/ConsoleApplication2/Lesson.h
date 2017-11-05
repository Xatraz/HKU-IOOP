#pragma once
class Lesson
{
private:
	char nameTeacher;
	char nameLesson;
	int numberRoom;
	int lessonLength;
	int width;

public:
	Lesson(char nameTeacher, char nameLesson, int numberRoom, int lessonlengts, int width);
	~Lesson();
};

