//#include <iostream>
//#include <string>
//#include "Planet.h"
//
//using namespace std;
//
//
//int main()
//{
//	int age = 0, travelDays;
//	string name;
//
//	//a) & c)
//	Planet p1;
//	p1.printPlanet();
//
//	//b
//	cout << "Enter your age on Earth: ";
//	cin >> age;
//	cout << "\nYour age on Earth : ";
//	//d)
//	p1.setAge(age);
//	cout << p1.calculateAge(p1.getAge());
//
//	cout << "\n------------------------------------------" << endl;
//
//	//e)
//	Planet venus, mercury, jupiter, saturn;
//	venus.setName("Venus");
//	venus.setTravelDays(255);
//	venus.setAge(age);
//	venus.printPlanet();
//	cout << "\nYour age in  " <<venus.getString() << ": ";
//	cout << venus.calculateAge(venus.getAge());
//
//	mercury.setName("Mercury");
//	mercury.setTravelDays(88);
//	mercury.setAge(age);
//	mercury.printPlanet();
//	cout << "\nYour age in "<<mercury.getString()<<": ";
//	cout << mercury.calculateAge(mercury.getAge());
//	
//	jupiter.setName("Jupiter");
//	jupiter.setTravelDays(4380);
//	jupiter.setAge(age);
//	jupiter.printPlanet();
//	cout << "\nYour age in " << jupiter.getString() << ": ";
//	cout << jupiter.calculateAge(jupiter.getAge());
//
//	saturn.setName("Saturn");
//	saturn.setTravelDays(10767);
//	saturn.setAge(age);
//	saturn.printPlanet();
//	cout << "\nYour age in " << saturn.getString() << ": ";
//	cout << saturn.calculateAge(saturn.getAge());
//
//	cout << "\n------------------------------------------" << endl;
//	
//	
//
//	return 0;
//}