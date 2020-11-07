#pragma once
#include <iostream>
#include <vector>
#include <string>
class Lesson
{
private:
	std::string name;
	std::vector<double> scores;
public:
	Lesson();
	~Lesson();
	std::string getName();
	void setName(std::string name);
	std::vector<double> getScores();
	void setScores(std::vector<double> scores);
	void printScores();
};

