
#include "stdafx.h"
#include <iostream>
#include "Student.h"
#include <vector>
#include "FileManagement.h"
#include "Lesson.h"
#include "University.h"
int _tmain(int argc, _TCHAR* argv[])
{
	University university;
	int number;
	std::cin >> number;
	university.searchForStudent(number);
	return 0;
}

