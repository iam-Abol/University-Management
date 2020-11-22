#pragma once
#include <iostream>
#include <string>
#include <vector>
class FileManagement
{
private:
	const std::string fileName = "studentsInformation";
public:
	FileManagement();
	~FileManagement();
	
	static void Read(std::vector <Student> students);

	
};

