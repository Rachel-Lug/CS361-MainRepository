//white stag - GOOD ENDING

#include <iostream>
#include "universalValues.h"
#include "GameFunctions.h"
#include <fstream>
#include <thread>
#include <chrono>
#include "json.hpp"
#include "httplib.h"

using json = nlohmann::json;
using namespace std;
char decision;

string convertWhiteStagToASCII() {
    httplib::Client cli("localhost", 8081);

    json request;
    request["path"] = "C:/Users/rache/source/repos/MyImageMS/images/white_stag.jpg";

    auto res = cli.Post("/ascii", request.dump(), "application/json");

    if (!res) {
        cout << "Could not connect to microservice\n";
        return "";
    }

    cout << "Status: " << res->status << endl;
    cout << "Body: " << res->body << endl;

    json response = json::parse(res->body);

    if (!response.contains("ascii"))
        return "";

    return response["ascii"];  // <-- use "ascii" instead of "outfile"
}

void woods()
{
	//clear screen
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif	

	cout << "As you go deeper into the woods you start to get hungry so you eat some berries along the way." << endl;
	cout << "After another hour of walking along this small trail, you find a small grove." << endl;
	cout << "Across the lake that is there something in the distance. A white deer stands there almost glowing" << endl;
	cout << "Your stomach starts to hurt, you fall to the ground. You have discovered the white stag! but you die of dysentery" << endl;

	cout << "WHITE STAG ENDING ACHIVED!" << endl;
	completeStag = 1;

	string asciiFile = convertWhiteStagToASCII();

	if (!asciiFile.empty()) {
		ifstream in(asciiFile);
		string line;

		cout << "\n--- White Stag ASCII Art ---\n";

		while (getline(in, line)) {
			cout << line << endl;
		}

		cout << "----------------------------\n";
	}
	else {
		cout << "Failed to load ASCII stag.\n";
	}

	cout << "To exit enter " << exitGameOption << ", to go back to the main menu enter " << mainMenu << ": ";
	cin >> decision;
	decision = toupper(decision);

	while (decision != exitGameOption && decision != mainMenu) {
		cout << "Invalid entry. enter here: ";
		cin >> decision;
		decision = toupper(decision);
	}

	if (decision == exitGameOption) {
		return;
	}
	else if (decision == mainMenu) {
		main();
	}

}
