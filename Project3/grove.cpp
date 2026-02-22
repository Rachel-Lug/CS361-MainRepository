//white stag - GOOD ENDING

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;
char decision;

void woods()
{
	//clear screen
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif	

	cout << "As you go deeper into the woods you start to get hungry so you eat some berries along the way." << endl;
	cout << "After another hour of walking along this small trail, you find a small grove." << endl;
	cout << "Across the lake that is there something in the distance. A white deer stands there almost glowing" << endl;
	cout << "Your stomach starts to hurt, you fall to the ground. You have discovered the white stag! but you die of dysentery" << endl;

	cout << "WHITE STAG ENDING ACHIVED!" << endl;

	cout << "To exit enter E, to go back to the main menu enter M: " << endl;
	cin >> decision;
	decision = toupper(decision);

	while (decision != 'E' && decision != mainMenu) {
		cout << "Invalid entry. enter here: ";
		cin >> decision;
		decision = toupper(decision);
	}

	if (decision == 'E') {
		return;
	}
	else if (decision == mainMenu) {
		main();
	}

}