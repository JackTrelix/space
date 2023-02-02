#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
//function definitions
std::string WordGenerator();

void DrawBoard();
void CreateStar();

//classes
class Star {
private:
	std::vector<std::string> starTypes = {"Red", "Blue", "Yellow", "Green"};
public:
	std::string starName = WordGenerator();
	int numOfPlanets = std::rand() % 6;
	std::string starType = starTypes[std::rand() % 4];

	Star() {

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
