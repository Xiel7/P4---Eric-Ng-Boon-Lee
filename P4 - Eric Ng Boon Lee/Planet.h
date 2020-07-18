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

	Planet();

	//d)
	void setName(string s);
	void setTravelDays(int d);
	void setAge(int a);

	string getString();
	int getTravelDays();
	int getAge();

	void printPlanet();
	int calculateAge(int age);
	
};

