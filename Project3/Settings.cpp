// Settings menu

#include "universalValues.h"
#include "GameFunctions.h"
#include <iostream>

using namespace std;

char usersDesgVal;

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
		cin >> usersDesgVal;
        usersDesgVal = toupper(usersDesgVal);

        do {
            cout << "Enter Y or N: ";
            cin >> usersDesgVal;
            usersDesgVal = toupper(usersDesgVal);

            if (usersDesgVal != 'Y' && usersDesgVal != 'N') {
                cout << "Invalid entry. Please enter Y or N." << endl;
            }

        } while (usersDesgVal != 'Y' && usersDesgVal != 'N');
	//if yes, cycle through each key and ask user if they would like to change it, if yes, ask for new value and validate it
        if (usersDesgVal == 'Y')
        {
            char* keys[] = {
                &option1, &option2,
                &mainMenu, &settingsMenu, &trophiesMenu,
                &newGameOption, &loadGameOption,
                &exitGameOption, &saveGameOption
            };

            const char* keyNames[] = {
                "Option 1", "Option 2",
                "Main Menu", "Settings Menu", "Trophies Menu",
                "New Game", "Load Game",
                "Exit Game", "Save Game"
            };

            const int numKeys = 9;

            for (int i = 0; i < numKeys; i++)
            {
                char changeChoice;

                cout << "\n" << keyNames[i]
                    << " (current: " << *keys[i] << ")";
                cout << "\nChange this key? (Y/N): ";

                cin >> changeChoice;
                changeChoice = toupper(changeChoice);

                while (changeChoice != 'Y' && changeChoice != 'N')
                {
                    cout << "Invalid entry. Enter Y or N: ";
                    cin >> changeChoice;
                    changeChoice = toupper(changeChoice);
                }

                if (changeChoice == 'Y')
                {
                    char newValue;

                    cout << "Enter new character value: ";
                    cin >> newValue;
                    newValue = toupper(newValue);

                    // Optional validation: letters only
                    while (newValue < 'A' || newValue > 'Z')
                    {
                        cout << "Invalid entry. Enter A-Z: ";
                        cin >> newValue;
                        newValue = toupper(newValue);
                    }

                    *keys[i] = newValue;
                    cout << "Updated successfully.\n";
                }
            }
        }
	//if no, return to main menu
		else if(usersDesgVal == 'N')
		{
			main();
		}

}