// Settings menu

#include "universalValues.h"
#include "GameFunctions.h"
#include <iostream>

using namespace std;

char usersDecision;

void SettingsMenu()
{
	//clear screen
		#ifdef _WIN32
			system("cls");
		#else
			system("clear");
		#endif	

	//display settings menu
		cout << "Settings Menu" << endl;

	//Print all key options and their current values
		cout << "Main Menu: " << mainMenu << endl;
		cout << "New Game: " << newGameOption << endl;
		cout << "Load Game: " << loadGameOption << endl;
		cout << "Save Game: " << saveGameOption << endl;
		cout << "Open Settings Menu: " << settingsMenu << endl;
		cout << "Exit Game: " << exitGameOption << endl;

	//ask user if they would like to change any of the keys or set to default values
		cout << "Would you like to change any of the key options? (Y/N)" << endl;
		cin >> usersDecision;
		usersDecision = toupper(usersDecision);

		if(usersDecision != 'Y' && usersDecision != 'N')
		{
			cout << "Invalid entry. Please enter Y or N." << endl;
			cin >> usersDecision;
			usersDecision = toupper(usersDecision);
		}
	//if yes, cycle through each key and ask user if they would like to change it, if yes, ask for new value and validate it
		else if (usersDecision == 'Y') {

		}
	//if no, return to main menu
		else if(usersDecision == 'N')
		{
			main();
		}

}