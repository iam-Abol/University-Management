#pragma once
#include <iostream>
#include <vector>
#include <string>
class Lesson
{
private:
	std::string name;
	std::vector<double> scores;
	double GPA;
	int size;
public:
	Lesson();
	~Lesson();
	std::string getName();
	void setName(std::string name);
	std::vector<double> getScores();
	void setScores(std::vector<double> scores);
	void printScores();
	void addNewScore(double newScore);
	double getGPA();
	void setScores(std::string scores);
	int getSize();
	std::string getScoresAsAString();
private:
	void updateGPA();
};

