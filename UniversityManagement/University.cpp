#include "stdafx.h"
#include "University.h"
#include <iostream>
#include "FileManagement.h"



University::~University()
{
}

University::University(){
	
	FileManagement::Read(students, "student.txt");
}
void University::searchForStudent(int studentCode){

}