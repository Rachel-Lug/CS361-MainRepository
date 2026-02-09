//forest route

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;

char userInput;

void intoTheForest()
{
	cout << "You go into the forest and you have been walking for 2 hours straight, you must almost be at the end of the forest, right?" << endl;
	cout << "Finally after all that time you see two paths, one seems to lead deeper into the forest the other out of the woods" << endl;
	cout << "Do you go deeper into the woods or do you head out of the forest?" << endl;
	cout << option1 << " deeper into the forest" << endl;
	cout << option2 << " out of the forest" << endl;

	cout << "enter here: ";
	cin >> userInput;
	userInput = toupper(userInput);


	while (userInput != option1 && userInput != option2) {
		cout << "Invalid entry. enter here: ";
		cin >> userInput;
		userInput = toupper(userInput);
	}

	if (userInput == option1) {
		outOfForest();
	}
	else if (userInput == option2) {
		deeperForest();
	}
}