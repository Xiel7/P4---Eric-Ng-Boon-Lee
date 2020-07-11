#include "Header.h"
#include <iostream>
#include <string>

using namespace std;


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

void Planet::printPlanet(Planet planet)
{
	cout << "\n\nPlanet: " << planet.getAge() << endl;
	cout << "Travel Days: " << planet.getTravelDays() << endl;
}

int Planet::calculateAge(int age)
{
	return (age * 365) / travelDays;
}



void PlanetDemo::planetInfo(Planet planet)
{

	planet.printPlanet();
	cout << "\nYour age in " << planet.getString() << ": ";
	cout << planet.calculateAge(planet.getAge());
}

void PlanetDemo::planetInfo(Planet planet, int age)
{
	planet.printPlanet();
	cout << "\nYour age in " << planet.getString() << ": ";
	cout << planet.calculateAge(age);
}

Planet PlanetDemo::inputPlanetInfo(Planet planet)
{
	string name;
	int age, travelDays;

	cout << "\n\nEnter planet name: ";
	cin >> name;
	cout << "Enter planet's travel days: ";
	cin >> travelDays;
	cout << "Enter your age: ";
	cin >> age;

	planet.setName(name);
	planet.setTravelDays(travelDays);
	planet.setAge(age);
	
	return planet;
}

Planet PlanetDemo::inputPlanetInfo(Planet planet, int age)
{
	string name;
	int travelDays;

	cout << "\n\nEnter planet name: ";
	cin >> name;
	cout << "Enter planet's travel days: ";
	cin >> travelDays;

	planet.setName(name);
	planet.setTravelDays(travelDays);
	

	return planet;
}
