/*Name:Rachel Luginbll
Last Edited: Febuary 9, 2026
Version: 1.0
File Name: Main_Menu.cpp
Description: this is the file for the main menu select. After text is displayed user will be able to enter
one of four different values which will then be checked and bring the user to one of four screens. First N will start
a new game jumping to a different file called Story_Set_Up, L will load the game from where the user last saved,
S will bring the user to the settings menu, and E will display a prompt to users 'are you sure you wish to exit?'*/


using namespace std;

#include <iostream>;
#include "universalValues.h";

char userValue;

int main() {

	//initial instructions
	cout << "Hello and welcome to the Mysterious Land of Ur!" << endl;
	cout << "This is a choose your own adventure game with the keys " << option1 << "or" << option2 << "." << endl;
	cout << "However for this first option please enter one of the following: " << endl;

	//initial options to select
	cout << "New Game (N)" << endl;
	cout << "Load Game (L)" << endl;
	cout << "Settings (S)" << endl;
	cout << "Exit (E)" << endl;
	cout << "enter value here: " << endl;

	cin >> userValue;
	userValue = toupper(userValue);

	//validate user entry
	while (userValue != 'N' && userValue != 'L' && userValue != 'S' && userValue != 'E') {
		cout << "Invalid entry. Please enter N, L, S, or E: ";
		cin >> userValue;
		userValue = toupper(userValue);
	}

}