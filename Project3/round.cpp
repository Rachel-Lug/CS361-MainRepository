//around the mountain

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;
char prefences;

void roundTheMount()
{
	//clear screen
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif	

	cout << "you go around the mountain and see a pile of ash randomly." << endl;
	cout << "you figured you would walk up and investigate. The ashes light on fire and turn into a beautiful phoenix!" << endl;
	cout << "but you were to close and you catch fire and die" << endl;
	cout << "PHOENIX ENDING ACHIVED!" << endl;
	completePhoenix = 1;

	cout << "To exit enter" << exitGameOption << ", to go back to the main menu enter " << mainMenu << ": ";
	cin >> prefences;
	prefences = toupper(prefences);

	while (prefences != exitGameOption && prefences != mainMenu) {
		cout << "Invalid entry. enter here: ";
		cin >> prefences;
		prefences = toupper(prefences);
	}

	if (prefences == exitGameOption) {
		return;
	}
	else if (prefences == mainMenu) {
		main();
	}

}