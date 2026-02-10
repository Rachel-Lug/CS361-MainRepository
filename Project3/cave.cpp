//cave route - nandi bear ending 

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;
char userDecision;

void cave()
{
	cout << "you go into the cave you can't really see anything. Then you remember you have a lighter!" << endl;
	cout << "you take out your lighter and the minute you can start to see you hear this low growling behind you." << endl;
	cout << "As you slowly turn around the growling gets louder and louder, until you see it" << endl;
	cout << "A huge bear from legend! You discovered a Nandi bear! It mauls you to death." << endl;

	cout << "NANDI BEAR ENDING ACHIVED!" << endl;
	cout << "To exit enter E, to go back to the main menu enter M: " << endl;
	cin >> userDecision;
	userDecision = toupper(userDecision);


	while (userDecision != 'E' && userDecision != 'M') {
		cout << "Invalid entry. enter here: ";
		cin >> userDecision;
		userDecision = toupper(userDecision);
	}
	
	if (userDecision == 'E') {
		return;
	}
	else if (userDecision == 'M') {
		main();
	}

}