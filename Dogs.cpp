#include "Dogs.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

Dogs::Dogs()
{
    
}

int Dogs::getDogPopulation()
{
    ifstream file;
    file.open("dogs.txt");
    if (!file.is_open()) {
        throw runtime_error("Unable to open file: dogs.txt");
    }

    string line;
    while (getline(file, line)) {
        int commaPos = line.find(',');
        std::string country = line.substr(0, commaPos);
        int dogCount = std::stoi(line.substr(commaPos + 1));

        this->m_dogs[country] = dogCount;
        m_dogPopulation += dogCount;
    }

    file.close();
    return m_dogPopulation;
}

void Dogs::setDogPopulation(int dogPopulation) {
    m_dogPopulation = dogPopulation;
}

