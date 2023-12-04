#include <iostream>
#include <unordered_map>
#include <string>
#include "Dogs.h"
using namespace std;

int main() {

    int choice;
    string countryName;

    do {
        cout << "1. See the total number of dogs in the world" << endl;
        cout << "2. Name a country to find out how many dogs are in that country" << endl;
        cout << "3. Quit";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Number of dogs in the world is " << dogPopulation << endl;
            break;

        case 2:
            cout << "Enter country's name: ";
            cin >> countryName;
            break;
        
        case 3:
            cout << "Quit program";
            return 0;
        
        default:
            cout << "Invaild choice. Try again";
        }
    }

    while (choice != 3);
}