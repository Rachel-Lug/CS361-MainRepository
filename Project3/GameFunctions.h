#pragma once

/*This is where all of the functions are defined for the game choices. Each function will be a different choice.
Every choice has its own file.*/

void ClearScreen()
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif	
}

//introduction/plot
void GameIntro();

//branch 1
void intoTheForest();
void intoTheOcean();

//forest branch 1
void outOfForest();
void deeperForest();

