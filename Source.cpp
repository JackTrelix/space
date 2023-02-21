#include <iostream>
#include <cstdlib>
#include <vector>
#include "Header.h"
#include <time.h>

int main() {
	srand(time(NULL));
	std::string player1Name;
	std::string player2Name;
	char player1Label;
	char player2Label;

	Galaxy MyGalaxy;
	DrawBoard();

	/*
	std::cout << "Player 1, please name your empire: ";
	std::cin >> player1Name;
	std::cout << "Please label your empire with a single character: ";
	std::cin >> player1Label;
	std::cout << "Player 2, please name your empire: ";
	std::cin >> player2Name;
	std::cout << "Please label your empire with a single character: ";
	std::cin >> player2Label;
	*/
	Player player1;
	Player player2;

	DeclareFactionCapitols();
	DrawBoard();
	GameLoop();

	return 0;
}
