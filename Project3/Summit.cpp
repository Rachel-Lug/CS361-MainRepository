//up the mountain

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;
char usersDecision;

void upTheMount()
{
	//clear screen
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif	

	cout << "You start to climb the mountain you get up where there is clouds. The view is beautiful!" << endl;
	cout << "then you see this thing flying towards you. It's horrifying! It's the Jersey Devil!" << endl;
	cout << "He knocks you off the side of the mountain and you fall to your death." << endl;

	cout << "JERSEY DEVIL ENDING ACHIVED!" << endl;
	completeJersey = 1;

	cout << "To exit enter" << exitGameOption << ", to go back to the main menu enter " << mainMenu << ": ";
	cin >> usersDecision;
	usersDecision = toupper(usersDecision);

	while (usersDecision != exitGameOption && usersDecision != mainMenu) {
		cout << "Invalid entry. enter here: ";
		cin >> usersDecision;
		usersDecision = toupper(usersDecision);
	}

	if (usersDecision == exitGameOption) {
		return;
	}
	else if (usersDecision == mainMenu) {
		main();
	}
}