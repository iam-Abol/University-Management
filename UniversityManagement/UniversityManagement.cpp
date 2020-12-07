
#include "stdafx.h"
#include <iostream>
#include "Student.h"
#include <vector>
#include "FileManagement.h"
#include "Lesson.h"

int _tmain(int argc, _TCHAR* argv[])
{
	std::vector<Student> stu;

	FileManagement::Read(stu,"student.txt");
	return 0;
}

