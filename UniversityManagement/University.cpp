#include "stdafx.h"
#include "University.h"
#include <iostream>
#include "FileManagement.h"



University::~University()
{
	FileManagement::write(students);
	
}

University::University(){
	
	FileManagement::Read(students, "student.txt");
}
void University::searchForStudent(int studentCode){
	bool isFound = false;
	for (int i = 0; i < students.size(); i++){
		if (students[i].getStudentCode() == studentCode){
			isFound = true;
			std::cout << "THE STUDENT INFORMATIONS : " << std::endl;
			students[i].printAllInformation();
			return;
		}
	}
	std::cout << "! NOT FOUND !" << std::endl;

}