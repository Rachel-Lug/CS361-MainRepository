//structure

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;

char someVal;

void structure()
{
	//clear screen
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif	

	cout << "You sail closer and closer to the structure when all of a sudden it starts raining." << endl;
	cout << "That's strange it has been sunny until now. As you slow down around this structure suddenly" << endl;
	cout << "huge tenticles come out of the water crushing your boat and dragging you to the depths of the ocean." << endl;
	cout << "The Kracken keeps you as a pet and you eventually die of old age all alone." << endl;

	cout << "KRACKEN ENDING ACHIVED!" << endl;


	cout << "To exit enter E, to go back to the main menu enter M: ";
	cin >> someVal;
	someVal = toupper(someVal);

	while (someVal != 'E' && someVal != mainMenu) {
		cout << "Invalid entry. enter here: ";
		cin >> someVal;
		someVal = toupper(someVal);
	}

	if (someVal == 'E') {
		return;
	}
	else if (someVal == mainMenu) {
		main();
	}
}