#include "Planet.h"
#include <iostream>
#include <string>

using namespace std;


Planet::Planet()
{
	name = "Earth";
	travelDays = 365;
}

void Planet::setName(string s)
{
	name = s;
}

void Planet::setTravelDays(int d)
{
	travelDays = d;
}

void Planet::setAge(int a)
{
	age = a;
}

string Planet::getString()
{
	return name;
}

int Planet::getTravelDays()
{
	return travelDays;
}

int Planet::getAge()
{
	return age;
}



void Planet::printPlanet()
{
	cout << "\n\nPlanet: " << name << endl;
	cout << "Travel Days: " << travelDays << endl;
}


int Planet::calculateAge(int age)
{
	return (age * 365) / travelDays;
}

