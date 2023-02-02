#include <iostream>
#include <vector>
#include <string>
#include "Header.h"
//major lists
std::vector<Star> allStars = {};
std::vector<std::string> allStarsNames = {};

//board vectors
std::vector<std::string> rowOne = {"\t","\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t"};
std::vector<std::string> rowTwo = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t"};
std::vector<std::string> rowThree = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t"};
std::vector<std::string> rowFour = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t"};
std::vector<std::string> rowFive = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t"};
std::vector<std::string> rowSix = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t"};
std::vector<std::string> rowSeven = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t"};
std::vector<std::string> rowEight = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t"};
std::vector<std::string> rowNine = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t"};
std::vector<std::string> rowTen = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t"};

//funciton definitions
std::string WordGenerator() {
	std::vector<char> alphabet = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	std::string word;
	int counter = 2 + std::rand() % 5;
	while (counter > 0) {
		word = word + alphabet[std::rand() % alphabet.size()];
		counter--;
	}
	/*
	for (int i = 0; i + 1 < word.size(); i++) {
		if (CohrnceAnalyzer(word[i], word[i + 1]) == true) {
			word[i+1] = alphabet[std::rand() % alphabet.size()];
		}
	}
	*/
	return word;
}

void DrawBoard() {

	rowOne[std::rand() % 10] = "*" + allStarsNames[0];
	rowTwo[std::rand() % 10] = "*" + allStarsNames[1];
	rowThree[std::rand() % 10] = "*" + allStarsNames[2];
	rowFour[std::rand() % 10] = "*" + allStarsNames[3];
	rowFive[std::rand() % 10] = "*" + allStarsNames[4];
	rowSix[std::rand() % 10] = "*" + allStarsNames[5];
	rowSeven[std::rand() % 10] = "*" + allStarsNames[6];
	rowEight[std::rand() % 10] = "*" + allStarsNames[7];
	rowNine[std::rand() % 10] = "*" + allStarsNames[8];
	rowTen[std::rand() % 10] = "*" + allStarsNames[9];

	for (int i = 0; i < rowOne.size(); i++) {
		std::cout << rowOne[i];
	}
	std::cout << "\n";
	for (int i = 0; i < rowTwo.size(); i++) {
		std::cout << rowTwo[i];
	}
	std::cout << "\n";
	for (int i = 0; i < rowThree.size(); i++) {
		std::cout << rowThree[i];
	}
	std::cout << "\n";
	for (int i = 0; i < rowFour.size(); i++) {
		std::cout << rowFour[i];
	}
	std::cout << "\n";
	for (int i = 0; i < rowFive.size(); i++) {
		std::cout << rowFive[i];
	}
	std::cout << "\n";
	for (int i = 0; i < rowSix.size(); i++) {
		std::cout << rowSix[i];
	}
	std::cout << "\n";
	for (int i = 0; i < rowSeven.size(); i++) {
		std::cout << rowSeven[i];
	}
	std::cout << "\n";
	for (int i = 0; i < rowEight.size(); i++) {
		std::cout << rowEight[i];
	}
	std::cout << "\n";
	for (int i = 0; i < rowNine.size(); i++) {
		std::cout << rowNine[i];
	}
	std::cout << "\n";
	for (int i = 0; i < rowTen.size(); i++) {
		std::cout << rowTen[i];
	}
	std::cout << "\n";

}
void CreateStar() {
	Star newStar;
	allStars.push_back(newStar);
	allStarsNames.push_back(newStar.starName);

}
