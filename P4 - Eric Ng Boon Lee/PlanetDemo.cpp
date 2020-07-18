#include <iostream>
#include <string>
#include "Planet.h"

using namespace std;

Planet inputPlanetInfo(Planet planet, int age);
Planet inputPlanetInfo(Planet planet);
void planetInfo(Planet planet);
void planetInfo(Planet planet, int age);

int main()
{	
	//f)
	int age;
	int travelDays;
	string name;

	Planet planet;

	cout << "\n\nEnter planet name: ";
	cin >> name;
	cout << "Enter planet's travel days: ";
	cin >> travelDays;
	cout << "Enter your age on earth: ";
	cin >> age;

	planet.setName(name);
	planet.setTravelDays(travelDays);

	planetInfo(planet, age);

	//g)
	planetInfo(inputPlanetInfo(planet));

	//h)
	int size, counter = 1;
	Planet* pl = NULL;

	cout << "\n\nEnter how many planets to input: ";
	cin >> size;
	pl = new Planet[size];



	for (int i = 0; i < size; i++)
	{
		cout << counter << ") ";
		pl[i] = inputPlanetInfo(pl[i], age);
		counter++;
	}

	cout << "\nEnter your age on Earth :";
	cin >> age;

	counter = 1;

	for (int i = 0; i < size; i++)
	{
		cout << "\n" << counter << ") ";
		planetInfo(pl[i], age);
		counter++;
		
	}

	delete[] pl;
	
	

	return 0;
}


Planet inputPlanetInfo(Planet planet, int age)
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

Planet inputPlanetInfo(Planet planet)
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

void planetInfo(Planet planet)
{
	planet.printPlanet();
	cout << "\nYour age in " << planet.getString() << ": ";
	cout << planet.calculateAge(planet.getAge());
}

void planetInfo(Planet planet, int age)
{

	planet.printPlanet();
	cout << "\nYour age in " << planet.getString() << ": ";
	cout << planet.calculateAge(age);
}
