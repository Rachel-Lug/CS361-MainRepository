//sailing route

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;

char decisionsDecisions;

void moreSailing()
{
	cout << "As you continue sailing you think you can see a structure in the distance" << endl;
	cout << "Do you head towards the structure or just keep sailing?" << endl;
	cout << option1 << " the structure" << endl;
	cout << option2 << " keep sailing" << endl;

	cout << "enter here: ";
	cin >> decisionsDecisions;
	decisionsDecisions = toupper(decisionsDecisions);

	while (decisionsDecisions != option1 && decisionsDecisions != option2) {
		cout << "Invalid entry. enter here: ";
		cin >> decisionsDecisions;
		decisionsDecisions = toupper(decisionsDecisions);
	}

	if (decisionsDecisions == option1) {
		structure();
	}
	else if (decisionsDecisions == option2) {
		openwater();
	}
}