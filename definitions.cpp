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

	rowOne[std::rand() % 10] = "*" + allStarsNames[0] + "(" + std::to_string(allStars[0].controllingFaction) + ")";
	rowTwo[std::rand() % 10] = "*" + allStarsNames[1] + "(" + std::to_string(allStars[1].controllingFaction) + ")";
	rowThree[std::rand() % 10] = "*" + allStarsNames[2] + "(" + std::to_string(allStars[2].controllingFaction) + ")";
	rowFour[std::rand() % 10] = "*" + allStarsNames[3] + "(" + std::to_string(allStars[3].controllingFaction) + ")";
	rowFive[std::rand() % 10] = "*" + allStarsNames[4] + "(" + std::to_string(allStars[4].controllingFaction) + ")";
	rowSix[std::rand() % 10] = "*" + allStarsNames[5] + "(" + std::to_string(allStars[5].controllingFaction) + ")";
	rowSeven[std::rand() % 10] = "*" + allStarsNames[6] + "(" + std::to_string(allStars[6].controllingFaction) + ")";
	rowEight[std::rand() % 10] = "*" + allStarsNames[7] + "(" + std::to_string(allStars[7].controllingFaction) + ")";
	rowNine[std::rand() % 10] = "*" + allStarsNames[8] + "(" + std::to_string(allStars[8].controllingFaction) + ")";
	rowTen[std::rand() % 10] = "*" + allStarsNames[9] + "(" + std::to_string(allStars[9].controllingFaction) + ")";

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
void TakeStar(int selectingFaction, std::string starSelection) {
	for (int i = 0; i < allStarsNames.size(); i++) {
		if (allStarsNames[i] == starSelection) {
			allStars[i].controllingFaction = selectingFaction;
		}
	}


}
void DeclareFactionCapitol(int factionCapitolSelector) {
	allStars[std::rand() % allStars.size()].controllingFaction = 1;
	allStars[std::rand() % allStars.size()].controllingFaction = 2;
}
