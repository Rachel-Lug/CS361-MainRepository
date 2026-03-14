/*Name:Rachel Luginbll
Last Edited: Febuary 23, 2026
Version: 2.0
File Name: Main_Menu.cpp

Description: this is the file for the main menu select. After text is displayed user will be able to enter
one of four different values which will then be checked and bring the user to one of four screens. First N will start
a new game jumping to a different file called Story_Set_Up, L will load the game from where the user last saved,
S will bring the user to the settings menu, and E will display a prompt to users 'are you sure you wish to exit?'
All pictures to come later with microservice
*/


using namespace std;

#include <iostream>
#include <cstdlib>
#include "universalValues.h"
#include "GameFunctions.h"

char userValue;

int main() {
        //clear screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif	

    while (true) { 

        // initial instructions
        cout << "Hello and welcome to the Mysterious Land of Ur!" << endl;
        cout << "This is a choose your own adventure game with the keys "
            << option1 << " or " << option2 << "." << endl;
		cout << "Press " << exitGameOption << " at any time to exit the game." << endl;
		cout << "Please select an option from the menu below: " << endl;

        cout << "New Game (" << newGameOption << ") " << endl;
        cout << "Trophies (" << trophiesMenu << ") " << endl;
        cout << "Settings (" << settingsMenu << ") " << endl;
        cout << "Exit (" << exitGameOption << ") " << endl;
        cout << "enter value here: ";

        cin >> userValue;
        userValue = toupper(userValue);

        // validate entry
        while (userValue != newGameOption &&
            userValue != settingsMenu && userValue != exitGameOption &&
            userValue != trophiesMenu) {
            cout << "Invalid entry. Please enter " << newGameOption << ", "
                << trophiesMenu << ", "
                << settingsMenu << ", " << exitGameOption << endl;
            cin >> userValue;
            userValue = toupper(userValue);
        }

        if (userValue == newGameOption) {
            GameIntro();
        }
        else if (userValue == trophiesMenu) {
			TrophiesMenu();
        }
        else if (userValue == settingsMenu) {
            SettingsMenu();  
        }
        else if (userValue == exitGameOption) {
            break;  // exit the loop
        }

        cout << endl;  
    }

    return 0;
}
