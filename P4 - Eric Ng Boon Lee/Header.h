#pragma once
#include <string>
#include <iostream>

using namespace std;


class Planet {

private :
	string name;
	int travelDays;
	int age;
	
public :

	
	Planet()
	{
		name = "Earth";
		travelDays = 365;
	}

	//d)
	void setName(string s);
	void setTravelDays(int d);
	void setAge(int a);

	string getString();
	int getTravelDays();
	int getAge();

	void printPlanet();
	void printPlanet(Planet planet);
	int calculateAge(int age);
	
};

class PlanetDemo
{
public:
	void planetInfo(Planet planet);
	void planetInfo(Planet planet, int age);
	Planet inputPlanetInfo(Planet planet);
	Planet inputPlanetInfo(Planet planet, int age);

};
