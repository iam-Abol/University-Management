#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
class FileManagement
{
public:


	FileManagement();
	~FileManagement();
	//void setFileName(const std::string& fileName);
	static void Read(std::vector <Student>& students,std::string path,int numberOfLessons);


};

