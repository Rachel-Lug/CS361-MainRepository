/*intro to the game with the first choice. All pictures to come later with microservice*/

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

char userOptionValue;

void GameIntro()
{
	std::cout << "You are a brave adventurer apart of this beautiful and wonderful kingdom!" << std::endl;
	std::cout << "Strangely the King has called on you. So you set out towards the castle." << std::endl;
	std::cout << "As you enter the throne room, it is a sight to behold. As you bow you hear the King say," << std::endl;
	std::cout << "\"After losing my Queen recently I have been very lonely, go find me a mystical creature that I may keep as a pet\"" << std::endl;

	std::cout << "And so you set out on an epic Adventure!" << std::endl;

	std::cout << "You come to your first decision, either venture into the forest or head out onto the open sea" << std::endl;
	std::cout << option1 << " to the forest" << std::endl;
	std::cout << option2 << " to the sea" << std::endl;
	std::cout << "enter value: ";
	std::cin >> userOptionValue;
	userOptionValue = toupper(userOptionValue);


	while (userOptionValue != option1 && userOptionValue != option2) {
		std::cout << "Invalid entry. Try again: ";
		std::cin >> userOptionValue;
		userOptionValue = toupper(userOptionValue);
	}

	if (userOptionValue == option1) {
		intoTheForest();
	}
	else if (userOptionValue == option2) {
		intoTheOcean();
	}

}