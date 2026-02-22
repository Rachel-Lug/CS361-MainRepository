//beach walk

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;

char somewhereValue;

void beach()
{
	//clear screen
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif	

	cout << "As you are walking along the beach it starts to get really foggy" << endl;
	cout << "It is starting to get to thick you almost turn around when you spot the lochness Monster!" << endl;
	cout << "However you hear rumbling behind you, a huge boulder is rolling down the hill!" << endl;
	cout << "You don't have time to move out of the way and you are crushed to death" << endl;

	cout << "LOCHNESS MONSTER ACHIVED!" << endl;

	cout << "To exit enter E, to go back to the main menu enter M: ";
	cin >> somewhereValue;
	somewhereValue = toupper(somewhereValue);

	while (somewhereValue != 'E' && somewhereValue != mainMenu) {
		cout << "Invalid entry. enter here: ";
		cin >> somewhereValue;
		somewhereValue = toupper(somewhereValue);
	}

	if (somewhereValue == 'E') {
		return;
	}
	else if (somewhereValue == mainMenu) {
		main();
	}
}