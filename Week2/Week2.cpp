#include <iostream>

using namespace std;

int main()
{
	int age;
	float weight;
	double distance;
	bool isAlive;
	char initial;
	string name;

	unsigned short int betterAge;
	long double hugeDistance;

	age = 30;
	weight = 195.5f;
	distance = 2121.902;
	isAlive = true;
	initial = 'C';
	name = "Cameron";


	cout << "My Name is " << name << " and I am " << age << " years old." << endl;
	cout << "Am I alive: " << (isAlive ? "Yes" : "No") << endl;


	int a = 10;
	int b = 3;

	int add = a + b; // 13
	int subtract = a - b; // 7
	int multiply = a * b; // 30
	float division = (float)a / b; // 3
	int mod = a % 3; // 1

	cout << "Add: " << add << endl;
	cout << "Subtract: " << subtract << endl;
	cout << "Multiply: " << multiply << endl;
	cout << "Division: " << division << endl;
	cout << "Mod: " << mod << endl;

	int result = (1 + 2) * (3 + 4); // 21;
	cout << "Result: " << result << endl;

	cout << "What is your name?" << endl;

	string yourName;
	cin >> yourName;

	cout << endl << "What year were you born?" << endl;

	int yearOfBirth;
	cin >> yearOfBirth;

	cout << endl << "What year is it?" << endl;

	int currentYear;
	cin >> currentYear;

	int yourAge = currentYear - yearOfBirth;
	cout << endl << "You are " << yourAge << " years old!" << endl;

	float celcius;
	cout << endl << "Enter the temperature in celcius." << endl;
	cin >> celcius;

	float fahrenheit = (celcius * 9.0f) / 5.0f + 32;
	cout << endl << "The temperature in fahrenheit is: " << fahrenheit << endl;

	cout << endl << "Please enter a distance in centimeters." << endl;
	float centimeters;
	cin >> centimeters;

	float totalFeet = centimeters / 30.48f;
	int justFeet = (int)totalFeet;

	int justInches = (int)((totalFeet - justFeet) * 12);

	cout << endl << "Feet: " << justFeet << endl;
	cout << endl << "Inches: " << justInches << endl;
}