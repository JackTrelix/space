#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

//horrible coding practices and cutting corners
static std::vector<char> alphabet = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

//function declarations
std::string WordGenerator();
void GameLoop();
void PlayerTurn(int playerSel);
void DrawBoard();
void CreateStar();
void TakeStar(std::string starSelection);
void DeclareFactionCapitols();
void GetStarInfo(int starSel);
void DrawStarSystem(std::string enterStarSel);
void CreateExplorer(int playerTurn);
void CreateDestroyer(int playerTurn);
void CreateMiner(int playerTurn);

//class declarations
class Star;
class Planet;
class Galaxy;
class Ship;
class Explorer;
class Destroyer;
class Miner;
class Player;



//classes
class Star {
private:
	std::vector<std::string> starTypes = { "Red", "Blue", "Yellow", "Green" };
public:
	std::string starName = WordGenerator();
	int numOfPlanets = std::rand() % 6;
	std::string starType = starTypes[std::rand() % 4];
	int controllingFaction = 0;
	int iHasStarbase = std::rand() % 2;
	bool hasStarbase;
	int numOfDestroyersAtStar = 0;


	Star() {
		if (iHasStarbase == 1) {
			hasStarbase = true;
		}
	}
	void GetStarInfo() {
		std::cout << "Name:" << starName << "\nNumber of Planets:" << numOfPlanets << "\nType:" << starType << "\nStarbase:" << hasStarbase << "\n";
	}

};
class Planet {
	int planetSize = 2 + std::rand() % 6;
	float planetTemp;
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
class Ship {
public:

	int shipSpeed;
	int shipDamage;

	void UpgradeShipSpeed() {
		shipSpeed++;
	}
};
class Explorer : Ship {
public:
	std::string shipName;
	Explorer(std::string newExplorerName) {
		shipName = newExplorerName;


		shipSpeed = 6;
	}
	void SurveyStar() {
		std::string starSel;
		std::cout << "Please select a star to travel to: ";
		std::cin >> starSel;
		DrawStarSystem(starSel);
	}
};
class Destroyer : Ship {
public:
	std::string shipName;
	Destroyer(std::string newDestroyerName = WordGenerator()) {
		shipName = newDestroyerName;
	}
};
class Miner : Ship {
public:
	std::string shipName;
	Miner(std::string newMinerName = WordGenerator()) {
		shipName = newMinerName;
	}
};
class Player {
public:
	std::vector<Explorer> playerExplorers = {};
	std::vector<Destroyer> playerDestroyers = {};
	std::vector<Miner> playerMiners = {};
	std::string factionCapitol;
	std::string factionName;
	char factionLabel;
	Player(std::string newFactionName = WordGenerator(), char newFactionLabel = alphabet[std::rand() % alphabet.size()]) {
		factionName = newFactionName;
		factionLabel = toupper(newFactionLabel);
		
		Explorer newExplorer("Xar");
		playerExplorers.push_back(newExplorer);
		Destroyer newDestroyer("Var");
		playerDestroyers.push_back(newDestroyer);

				

	}
};
