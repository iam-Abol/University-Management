#pragma once
#include <iostream>
#include <string>
#include <vector>
class FileManagement
{
private:
	 std::string fileName;
public:
	FileManagement();
	~FileManagement();
	void setFileName(const std::string& fileName);
	static void Read(std::vector <Student> students);

	
};

