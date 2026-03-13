//trophies menu

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;


void TrophiesMenu()
{
    //clear screen
		#ifdef _WIN32
			system("cls");
		#else
			system("clear");
		#endif	

    cout << "Trophies Menu" << endl;

    cout << "Cave Ending: " << completeNandi << "/1" << endl;

}
