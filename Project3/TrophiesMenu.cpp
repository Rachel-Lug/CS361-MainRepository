//trophies menu

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;
char someUsersValHere;

void TrophiesMenu()
{
    //clear screen
		#ifdef _WIN32
			system("cls");
		#else
			system("clear");
		#endif	

    cout << "Trophies Menu" << endl;

    cout << "Cave Ending: " << completeNandi << "/1" << endl;
	cout << "Grove Ending: " << completeStag << "/1" << endl;
	cout << "Around the Mountain Ending: " << completePhoenix << "/1" << endl;
	cout << "Summit Ending: " << completeJersey << "/1" << endl;

	cout << "Beach Ending: " << completeNessie << "/1" << endl;
	cout << "Flower Ending: " << completeFairies << "/1" << endl;
	cout << "Structure Ending: " << completeKracken << "/1" << endl;
	cout << "Water Ending: " << completeSirens << "/1" << endl;

	cout << "All Endings: " << completeFairies + completeJersey + completeKracken + completeNandi + completeNessie + completePhoenix + completeSirens + completeStag << "/8" << endl;


	cout << "To exit enter" << exitGameOption<< ", to go back to the main menu enter " << mainMenu << ": ";
	cin >> someUsersValHere;
	someUsersValHere = toupper(someUsersValHere);

	while (someUsersValHere != exitGameOption && someUsersValHere != mainMenu) {
		cout << "Invalid entry. enter here: ";
		cin >> someUsersValHere;
		someUsersValHere = toupper(someUsersValHere);
	}

	if (someUsersValHere == exitGameOption) {
		return;
	}
	else if (someUsersValHere == mainMenu) {
		main();
	}
}
