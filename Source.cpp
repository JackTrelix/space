#include <iostream>
#include <cstdlib>
#include <vector>
#include "Header.h"

int main() {
	std::string playerFactionName;
	char playerFactionLabel;

	Galaxy MyGalaxy;
	DrawBoard();

	std::cout << "Please name your empire: ";
	std::cin >> playerFactionName;
	std::cout << "Please label your empire with a single character: ";
	std::cin >> playerFactionLabel;

	Faction playerFaction(playerFactionName, playerFactionLabel);
	Faction enemyFaction;
	DeclareFactionCapitols();
	DrawBoard();
	GetStarInfo(5);

	return 0;
}
