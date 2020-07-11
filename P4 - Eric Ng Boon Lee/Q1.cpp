#include <iostream>
#include <string>
#include "Header.h"

using namespace std;


int main()
{
	
	

	int age = 0, travelDays;
	string name;

	//a) & c)
	Planet p1;
	p1.printPlanet();

	//b
	cout << "Enter your age on Earth: ";
	cin >> age;
	cout << "\nYour age on Earth : ";
	//d)
	p1.setAge(age);
	cout << p1.calculateAge(p1.getAge());

	cout << "\n------------------------------------------" << endl;

	//e)
	Planet venus, mercury, jupiter, saturn;
	venus.setName("Venus");
	venus.setTravelDays(255);
	venus.setAge(age);
	venus.printPlanet();
	cout << "\nYour age in  " <<venus.getString() << ": ";
	cout << venus.calculateAge(venus.getAge());

	mercury.setName("Mercury");
	mercury.setTravelDays(88);
	mercury.setAge(age);
	mercury.printPlanet();
	cout << "\nYour age in "<<mercury.getString()<<": ";
	cout << mercury.calculateAge(mercury.getAge());
	
	jupiter.setName("Jupiter");
	jupiter.setTravelDays(4380);
	jupiter.setAge(age);
	jupiter.printPlanet();
	cout << "\nYour age in " << jupiter.getString() << ": ";
	cout << jupiter.calculateAge(jupiter.getAge());

	saturn.setName("Saturn");
	saturn.setTravelDays(10767);
	saturn.setAge(age);
	saturn.printPlanet();
	cout << "\nYour age in " << saturn.getString() << ": ";
	cout << saturn.calculateAge(saturn.getAge());

	cout << "\n------------------------------------------" << endl;
	//f)
	PlanetDemo planet;
	Planet planet1;

	//g)
	planet.planetInfo(planet.inputPlanetInfo(planet1));


	cout << "\n------------------------------------------" << endl;

	//h)
	Planet pl[100];
	int arr = 0, counter = 1;
	cout << "\n\nEnter how many planets to input: ";
	cin >> arr;

	for (int i = 0; i < arr; i++)
	{
		cout << counter << ") ";
		pl[i] = planet.inputPlanetInfo(pl[i], age);
		counter++;

	}

	cout << "\nEnter your age on Earth :";
	cin >> age;

	counter = 1;
	for (int i = 0; i < arr; i++)
	{
		cout << "\n" << counter << ") ";
		planet.planetInfo(pl[i], age);
		counter++;
	}

	

	return 0;
}