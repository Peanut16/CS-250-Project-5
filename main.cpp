#include <iostream>
#include <unordered_map>
#include <string>
#include "Dogs.h"
using namespace std;

int main() {

    int choice;
    string countryName;
    Dogs myDog;

    do {
        cout << "1. See the total number of dogs in the world" << endl;
        cout << "2. Name a country to find out how many dogs are in that country" << endl;
        cout << "3. Quit";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Number of dogs in the world is " << myDog.getDogPopulation << endl;
            break;

        case 2:
            cout << "Enter country's name: ";
            cin >> countryName;
                        try {
                int countryPopulation = myDog.getCountryPopulation(countryName);
                cout << "Number of dogs in " << countryName << " is " << countryPopulation << endl;
            } catch (const runtime_error& e) {
                cout << e.what() << endl;
            }
            break;

        case 3:
            cout << "Quit program" << endl; // Added missing endl
            return 0;

        default:
            cout << "Invalid choice. Try again" << endl; // Added missing endl
        }
    } while (choice != 3);

    return 0;
}