//island route

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;

char userpreference;

void theIsland()
{
	cout << "You sail towards the Island and land decently safely. In the distance you see a field of flowers" << endl;
	cout << "But the beach is beautiful as well. Which way do you go?" << endl;
	cout << option1 << " flowers" << endl;
	cout << option2 << " the beach" << endl;

	cout << "enter here: ";
	cin >> userpreference;
	userpreference = toupper(userpreference);


	while (userpreference != option1 && userpreference != option2) {
		cout << "Invalid entry. enter here: ";
		cin >> userpreference;
		userpreference = toupper(userpreference);
	}

	if (userpreference == option1) {
		flowers();
	}
	else if (userpreference == option2) {
		beach();
	}
}