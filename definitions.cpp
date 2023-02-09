#include <iostream>
#include <vector>
#include <string>
#include "Header.h"
//major lists
std::vector<Star> allStars = {};
std::vector<std::string> allStarsNames = {};
std::vector <std::string> factionCapitols = {};

//dunno what to call this but its basically the variables that determine the locations for the stars and record them so they don't change
int rowOneSel = std::rand() % 10;
int rowTwoSel = std::rand() % 10;
int rowThreeSel = std::rand() % 10;
int rowFourSel = std::rand() % 10;
int rowFiveSel = std::rand() % 10;
int rowSixSel = std::rand() % 10;
int rowSevenSel = std::rand() % 10;
int rowEightSel = std::rand() % 10;
int rowNineSel = std::rand() % 10;
int rowTenSel = std::rand() % 10;

//board vectors
std::vector<std::string> rowOne = { "\t","\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t" };
std::vector<std::string> rowTwo = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t" };
std::vector<std::string> rowThree = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t" };
std::vector<std::string> rowFour = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t" };
std::vector<std::string> rowFive = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t" };
std::vector<std::string> rowSix = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t" };
std::vector<std::string> rowSeven = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t" };
std::vector<std::string> rowEight = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t" };
std::vector<std::string> rowNine = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t" };
std::vector<std::string> rowTen = { "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t", "\t" };

//funciton definitions
void GameLoop() {
	bool isRunning = true;
	while (isRunning) {
		
	}
}
void PlayerTurn(int playerSel) {
	if (playerSel == 1) {
		bool optionSel = false;
		std::string playerOptionSel;
		std::cout << "Player" << playerSel << "(enter \"help\" for more options: ";
		std::cin >> playerOptionSel;
		while (optionSel == false) {
			if (playerOptionSel == "help") {
				std::cout << "The following options are:\n";
				std::cout << "Type the name of a star to view the star system\n";
				std::cout << "Type \"map\" to return to galaxy view\n";

			}
		}
		
	}
}
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

	rowOne[rowOneSel] = "*" + allStarsNames[0] + "(" + std::to_string(allStars[0].controllingFaction) + ")";
	rowTwo[rowTwoSel] = "*" + allStarsNames[1] + "(" + std::to_string(allStars[1].controllingFaction) + ")";
	rowThree[rowThreeSel] = "*" + allStarsNames[2] + "(" + std::to_string(allStars[2].controllingFaction) + ")";
	rowFour[rowFourSel] = "*" + allStarsNames[3] + "(" + std::to_string(allStars[3].controllingFaction) + ")";
	rowFive[rowFiveSel] = "*" + allStarsNames[4] + "(" + std::to_string(allStars[4].controllingFaction) + ")";
	rowSix[rowSixSel] = "*" + allStarsNames[5] + "(" + std::to_string(allStars[5].controllingFaction) + ")";
	rowSeven[rowSevenSel] = "*" + allStarsNames[6] + "(" + std::to_string(allStars[6].controllingFaction) + ")";
	rowEight[rowEightSel] = "*" + allStarsNames[7] + "(" + std::to_string(allStars[7].controllingFaction) + ")";
	rowNine[rowNineSel] = "*" + allStarsNames[8] + "(" + std::to_string(allStars[8].controllingFaction) + ")";
	rowTen[rowTenSel] = "*" + allStarsNames[9] + "(" + std::to_string(allStars[9].controllingFaction) + ")";

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
void DeclareFactionCapitols() {
	
	factionCapitols.push_back(allStarsNames[std::rand() % allStarsNames.size()]);
	factionCapitols.push_back(allStarsNames[std::rand() % allStarsNames.size()]);

	for (int k = 0; k < allStarsNames.size(); k++) {
		if (factionCapitols[0] == allStarsNames[k]) {
			allStars[k].controllingFaction = 1;
		}
		else if (factionCapitols[1] == allStarsNames[k]) {
			allStars[k].controllingFaction = 2;
		}
	}
}
void GetStarInfo(int starSel) {
	allStars[starSel].GetStarInfo();
}
