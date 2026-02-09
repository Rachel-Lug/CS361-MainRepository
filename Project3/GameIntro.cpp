/*intro to the game with the first choice. All pictures to come later with microservice*/

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

char userOptionValue;

void GameIntro()
{
	std::cout << "You are a brave adventurer apart of this beautiful and wonderful kingdom!" << std::endl;
	std::cout << "Strangely the King has called you to his throne room to ask an inquiry of you." << std::endl;
	std::cout << "As you head in and bow the King says to you \"After losing my Queen I am lonely, go find me a companion that I may keep as a pet\"" << std::endl;

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