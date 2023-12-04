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
	int getCountryPopulation();
	bool countryAvailable(string country); // may or may not needed
	void setDogPopulation(int);

private:
	int m_dogPopulation = 0;
	unordered_map <string, int> m_dogs;
	int m_countryPopulation = 0;
};

#endif