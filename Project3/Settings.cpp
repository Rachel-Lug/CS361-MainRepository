// Settings menu

#include "universalValues.h"
#include "GameFunctions.h"
#include <iostream>

using namespace std;

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


	//if yes, cycle through each key and ask user if they would like to change it, if yes, ask for new value and validate it

	//if no, return to main menu



}