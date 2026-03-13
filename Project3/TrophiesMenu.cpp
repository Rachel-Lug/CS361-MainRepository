//trophies menu

#include <iostream>
#include <fstream>
#include "json.hpp"
#include "universalValues.h"
#include "GameFunctions.h"

using namespace std;
char someUsersValHere;
using json = nlohmann::json;

void TrophiesMenu()
{
    //clear screen
		#ifdef _WIN32
			system("cls");
		#else
			system("clear");
		#endif	

            std::ofstream trophyFile("trophies.txt");

            cout << "Trophies Menu" << endl;
            trophyFile << "Trophies Menu" << endl;

            cout << "Cave Ending: " << completeNandi << "/1" << endl;
            trophyFile << "Cave Ending: " << completeNandi << "/1" << endl;

            cout << "Grove Ending: " << completeStag << "/1" << endl;
            trophyFile << "Grove Ending: " << completeStag << "/1" << endl;

            cout << "Around the Mountain Ending: " << completePhoenix << "/1" << endl;
            trophyFile << "Around the Mountain Ending: " << completePhoenix << "/1" << endl;

            cout << "Summit Ending: " << completeJersey << "/1" << endl;
            trophyFile << "Summit Ending: " << completeJersey << "/1" << endl;

            cout << "Beach Ending: " << completeNessie << "/1" << endl;
            trophyFile << "Beach Ending: " << completeNessie << "/1" << endl;

            cout << "Flower Ending: " << completeFairies << "/1" << endl;
            trophyFile << "Flower Ending: " << completeFairies << "/1" << endl;

            cout << "Structure Ending: " << completeKracken << "/1" << endl;
            trophyFile << "Structure Ending: " << completeKracken << "/1" << endl;

            cout << "Water Ending: " << completeSirens << "/1" << endl;
            trophyFile << "Water Ending: " << completeSirens << "/1" << endl;

            int total = completeFairies + completeJersey + completeKracken +
                completeNandi + completeNessie + completePhoenix +
                completeSirens + completeStag;

            cout << "All Endings: " << total << "/8" << endl;
            trophyFile << "All Endings: " << total << "/8" << endl;

            trophyFile.close();
//=================================================================================================
            char sendEmail;
            string userEmail;

            cout << "\nWould you like your achievements emailed to you? (Y/N): ";
            cin >> sendEmail;
            sendEmail = toupper(sendEmail);

            if (sendEmail == 'Y')
            {
                cout << "Enter your email address: ";
                cin >> userEmail;

                json request;

                request["fromEmail"] = "rachelluginbill27@gmail.com";
                request["toEmail"] = userEmail;
                request["subject"] = "Your Game Achievements";
                request["bodyFile"] = "trophies.txt";

                ofstream reqFile("requests/email_request.json");
                reqFile << request.dump(4);
                reqFile.close();

                cout << "Email request sent to microservice.\n";
            }

            cout << "To exit enter " << exitGameOption
                << ", to go back to the main menu enter " << mainMenu << ": ";

            cin >> someUsersValHere;
            someUsersValHere = toupper(someUsersValHere);

            while (someUsersValHere != exitGameOption && someUsersValHere != mainMenu) {
                cout << "Invalid entry. enter here: ";
                cin >> someUsersValHere;
                someUsersValHere = toupper(someUsersValHere);
            }

            if (someUsersValHere == exitGameOption) {
                return;
            }
            else if (someUsersValHere == mainMenu) {
                main();
            }
}
