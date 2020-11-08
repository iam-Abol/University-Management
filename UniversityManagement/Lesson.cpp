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
	for (int i = 0; i < scores.size(); i++){
		std::cout << scores[i];
	}
}