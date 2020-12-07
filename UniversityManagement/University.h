#pragma once
#include <vector>
#include <iostream>
#include "Student.h"
class University
{
	std::vector <Student> students;
	int numberOfLessonOfEachStudent;
public:
	University();
	~University();

};

