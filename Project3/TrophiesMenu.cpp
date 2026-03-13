//trophies menu

#include <iostream>
#include <fstream>
#include "json.hpp"
#include "universalValues.h"
#include "GameFunctions.h"
#include "httplib.h"

using namespace std;
char someUsersValHere;
using json = nlohmann::json;

string getTimestampFromPythonMS(const string& controlFilePath = "C:\\Users\\rache\\source\\repos\\DateTimeService\\control.json") {
    // Step 1: write the request
    json request;
    request["op"] = "now";
    ofstream out(controlFilePath);
    out << request.dump(4);
    out.close();

    // Step 2: poll for response
    json response;
    while (true) {
        ifstream in(controlFilePath);
        if (!in) {
            this_thread::sleep_for(chrono::milliseconds(100));
            continue;
        }

        string content((istreambuf_iterator<char>(in)), istreambuf_iterator<char>());
        in.close();

        if (content.empty()) {
            this_thread::sleep_for(chrono::milliseconds(100));
            continue;
        }

        response = json::parse(content, nullptr, false);
        if (response.is_discarded()) {
            this_thread::sleep_for(chrono::milliseconds(100));
            continue;
        }

        if (response.contains("result") && response["result"].contains("datetime")) {
            return response["result"]["datetime"];
        }

        this_thread::sleep_for(chrono::milliseconds(100));
    }
}

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

            string timestamp = getTimestampFromPythonMS("C:/Users/rache/source/repos/DateTimeService/control.json");

            trophyFile << "Timestamp: " << timestamp << "\n";

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


            ifstream inFile("trophies.txt");
            string trophiesContent((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
            inFile.close();

            json request;
            request["fromEmail"] = "rachelluginbill27@gmail.com";
            request["appPassword"] = "amkxpkekexvgkiip";
            request["toEmail"] = userEmail;
            request["body"] = trophiesContent;  // send the trophies content

            // Create HTTP client and POST request to microservice
            httplib::Client cli("localhost", 8080);
            auto res = cli.Post("/send-email", request.dump(), "application/json");

            if (res) {
                cout << "Microservice response: " << res->body << endl;
            } else {
                cout << "Error: Could not connect to microservice.\n";
            }
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
