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

	Player playerFaction1(playerFactionName, playerFactionLabel);
	Player playerFaction2;
	DeclareFactionCapitols();
	DrawBoard();
	GameLoop();

	return 0;
}
