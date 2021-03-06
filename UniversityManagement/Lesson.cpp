#include "stdafx.h"
#include "Lesson.h"
#include <iostream>
#include <string>

Lesson::Lesson()
{
}


Lesson::~Lesson()
{
}

std::string Lesson::getName(){
	return name;
}

void Lesson::setName(std::string name){
	this->name = name;
}

std::vector<double> Lesson::getScores(){
	return scores;
}

void Lesson::setScores(std::vector<double> scores){
	double score;
	for (int i = 0; i < scores.size(); i++){

		this->scores.push_back(scores[i]);
	}
	updateGPA();
}
void Lesson::printScores(){
	std::cout << name << " scores : " << std::endl;
	for (int i = 0; i < scores.size(); i++){
		std::cout << scores[i] << " ";
		if (i < scores.size() - 1)
			std::cout << ", ";
		
	}
	std::cout << std::endl;
}
void Lesson::addNewScore(double newScore){
	scores.push_back(newScore);
	updateGPA();
}
void Lesson::updateGPA(){
	double sum = 0;
	for (int i = 0; i < scores.size(); i++){
		sum += scores[i];
	}
	GPA = sum / scores.size();
}
double Lesson::getGPA(){
	updateGPA();
	return GPA;
}
void Lesson::setScores(std::string scores){
	std::string number = "1234567890.";
	std::string score = "";
	for (int i = 0; i < scores.size(); i++){
		if (number.find(scores[i]) >= 0 && number.find(scores[i]) < number.size()){
			score += scores[i];

		}
		else
		{
			if (score != ""){
				double s = std::stod(score);
				this->scores.push_back(s);
				score = "";
			}


		}
	}
	if (score != "")
		this->scores.push_back(std::stod(score));
}
int Lesson::getSize(){
	return size;
}
std::string Lesson::getScoresAsAString(){
	std::string l = "";
	for (int i = 0; i < scores.size(); i++){
		l += std::to_string(scores[i]);
		if (i < scores.size() - 1)
			l += " ";
	}
	return l;
}