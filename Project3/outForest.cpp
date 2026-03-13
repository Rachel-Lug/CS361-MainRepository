//out of the forest

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;
char goodchoice;

void outOfForest()
{
	//clear screen
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif	

	cout << "As you head out of the forest you see a mountain, but also a path around it" << endl;
	cout << "Do you walk around it or try and climb the mountain?" << endl;

	cout << option1 << " walk around the mountain" << endl;
	cout << option2 << " climb it" << endl;
	cout << "enter here: ";
	cin >> goodchoice;
	goodchoice = toupper(goodchoice);


	while (goodchoice != option1 && goodchoice != option2) {
		cout << "Invalid entry. enter here: ";
		cin >> goodchoice;
		goodchoice = toupper(goodchoice);
	}

	if (goodchoice == option1) {
		roundTheMount();
	}
	else if (goodchoice == option2) {
		upTheMount();
	}

}