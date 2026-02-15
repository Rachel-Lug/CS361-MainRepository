//deeper into the woods

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;
char someInput;

void deeperForest()
{
	cout << "As you go deeper into the woods you see cave that is so dark you can't see inside and" << endl;
	cout << "another small kind of hidden path that leads even deeper into the woods" << endl;

	cout << option1 << " the cave" << endl;
	cout << option2 << " deeper into the woods" << endl;
	cout << "enter here: ";

	cin >> someInput;
	someInput = toupper(someInput);

	while (someInput != option1 && someInput != option2) {
		cout << "Invalid entry. enter here: ";
		cin >> someInput;
		someInput = toupper(someInput);
	}

	if (someInput == option1) {
		cave();
	}
	else if (someInput == option2) {
		woods();
	}

}