
#include "stdafx.h"
#include <iostream>
#include "Student.h"
#include <vector>
#include "FileManagement.h"
#include "Lesson.h"
int _tmain(int argc, _TCHAR* argv[])
{
	Lesson l;
	l.setScores("19.5 , 20.0 , 66  ,1 ,21 ");
	l.printScores();
	return 0;
}

