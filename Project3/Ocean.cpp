//Ocean route

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;
char usersInput;

void intoTheOcean()
{
	cout << "You find a boat and climb aboard, the minute start sailing you see and island." << endl;
	cout << "Do you stop at this island to explore or do you continue sailing?" << endl;

	cout << option1 << " the island" << endl;
	cout << option2 << " more sailing" << endl;
	usersInput = toupper(usersInput);

	while (usersInput != option1 && usersInput != option2) {
		cout << "Invalid entry. enter here: ";
		cin >> usersInput;
		usersInput = toupper(usersInput);
	}

	if (usersInput == option1) {
		theIsland();
	}
	else if (usersInput == option2) {
		moreSailing();
	}
}