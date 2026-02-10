//water

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;

char Val;

void openwater()
{
	cout << "As you continue sailing you start to hear voices. Gorgeous voices singing some old sea shanty you think" << endl;
	cout << "you have heard before. All of a sudden you feel lost in a dase and start walking towards the edge of" << endl;
	cout << "the boat. You keep trying to stop but your body won't listen. You jump off the boat and the minute you " << endl;
	cout << "hit the water you see them beautiful mermaid looking things singing to you controlling you" << endl;
	cout << "they push you down deeper into the water and eventually you drown and die." << endl;

	cout << "SIREN ENDING ACHIVED!" << endl;

	cout << "To exit enter E, to go back to the main menu enter M: ";
	cin >> Val;
	Val = toupper(Val);

	while (Val != 'E' && Val != 'M') {
		cout << "Invalid entry. enter here: ";
		cin >> Val;
		Val = toupper(Val);
	}

	if (Val == 'E') {
		return;
	}
	else if (Val == 'M') {
		main();
	}
}