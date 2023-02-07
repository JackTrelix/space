#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
//horrible coding practices and cutting corners
static std::vector<char> alphabet = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

//function definitions
std::string WordGenerator();

void DrawBoard();
void CreateStar();
void TakeStar(std::string starSelection);
void DeclareStarCapitols();

//classes
class Galaxy;
class Star {
private:
	std::vector<std::string> starTypes = {"Red", "Blue", "Yellow", "Green"};
public:
	std::string starName = WordGenerator();
	int numOfPlanets = std::rand() % 6;
	std::string starType = starTypes[std::rand() % 4];
	int controllingFaction = 0;
	int iHasStarbase = std::rand() % 2;
	bool hasStarbase;


	Star() {
		if (iHasStarbase == 1) {
			hasStarbase = true;
		}
	}


};
class Galaxy {
	
public:

	Galaxy() {
		int galacticProportions = 10;
		while (galacticProportions > 0) {
			CreateStar();
			galacticProportions--;
		}
	}
};
class Faction {
	
public:
	std::string factionCapitol;
	std::string factionName;
	char factionLabel;
	Faction(std::string newFactionName = WordGenerator(), char newFactionLabel = alphabet[std::rand() % alphabet.size()]) {
		factionName = newFactionName;
		factionLabel = toupper(newFactionLabel);
	}




};
