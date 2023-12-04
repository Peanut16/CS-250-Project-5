#ifndef DOGS_H
#define DOGS_H

#include <string>
#include <unordered_map>
using namespace std;

class Dogs
{
public:
	Dogs();
    int getDogPopulation();
    int getCountryPopulation(string country);
    void setDogPopulation(int);
    void setCountryPopulation(string country, int population);

private:
	int m_dogPopulation = 0;
	unordered_map <string, int> m_countryPopulation;
	unordered_map <string, int> m_dogs;
};

#endif