#pragma once

/*This is where all of the functions are defined for the game choices. Each function will be a different choice.
Every choice has its own file.*/

//void ClearScreen()
//{
//#ifdef _WIN32
//	system("cls");
//#else
//	system("clear");
//#endif	
//}

//main menu
void main();

//introduction/plot
void GameIntro();

//branch 1
void intoTheForest();
void intoTheOcean();

//---------------------------------------------------------------------------------------------------
//forest

//forest branch 1
void outOfForest();
void deeperForest();

//forest out branch
void upTheMount();		//jersey devil
void roundTheMount();	//phoenix

//forest deeper branch
void cave();		//nandi
void woods();		//white stag

//-------------------------------------------------------------------------------------------
//ocean

//ocean branch 1
void theIsland();
void moreSailing();

//island branch
void flowers(); //fairies
void beach();	//lochness

//sailing bramch
void structure();	//kracken
void openwater();	//sirens
