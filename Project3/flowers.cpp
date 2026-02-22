//flowers and fairies

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;

char plentyChoices;

void flowers()
{
	//clear screen
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif	

	cout << "You start towards the field of flowers on this Island it seems to be getting closer" << endl;
	cout << "by the time you finally get there it is night time. You start to feel very sleepy" << endl;
	cout << "as you lay down in this field of flowers the pollen seems almost like poison" << endl;
	cout << "as you look into the sky there are all these little light like fire flies but not." << endl;
	cout << "They are fairies! However you were suffocated by the poisonous pollen." << endl;

	cout << "FAIRY ENDING ACHIVED!" << endl;


	cout << "To exit enter E, to go back to the main menu enter M: ";
	cin >> plentyChoices;
	plentyChoices = toupper(plentyChoices);

	while (plentyChoices != 'E' && plentyChoices != mainMenu) {
		cout << "Invalid entry. enter here: ";
		cin >> plentyChoices;
		plentyChoices = toupper(plentyChoices);
	}

	if (plentyChoices == 'E') {
		return;
	}
	else if (plentyChoices == mainMenu) {
		main();
	}
}