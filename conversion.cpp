#include <iostream>
#include <iomanip>
using namespace std;

//Converts total inches to a decimal of feet
float inchesToFeet(int inches) {
	float feet;

	feet = inches / 12.0;

	return feet;
}

//Converts feet to a decimal in meters
float feetToMeters(float feet) {
	float meters;

	meters = feet * .3048;

	return meters;
}

//Converts meters to meters and centimeters
void metersAndCentimeters(float& meters, float& centimeters) {
	float tempMeters;

	while (meters >= 1.0) {
		meters -= 1.0;
		tempMeters += 1.0;
	}

	centimeters = meters * 100.0;
	meters = tempMeters - (centimeters / 100.0);
}

//Prompts user for input of feet
float getFeet() {
	float feet;

	cout << "How many feet?" << endl;
	cin >> feet;

	return feet;
}

//Prompts user for input of inches
int getInches() {
	int inches;

	cout << "How many inches?" << endl;
	cin >> inches;

	return inches;
}

void outputMeters(float meters, float centimeters) {
	cout << "That measurement in feet is " << meters << " meters and " << centimeters << " centimeters." << endl;
}

int main(int argc, char **argv) {
	char userStop;
	float feet = 0.0;
	int inches = 0;
	float meters = 0.0;
	float centimeters = 0.0;

	//Prompts user for input until they are ready
	while (userStop != 'x') {
		feet = getFeet();
		inches = getInches();
		cout << "Type \'x\' to stop, anything else to reinput." << endl;
		cin >> userStop;
	}

	//Converts feet to meters and centimeters
	feet += inchesToFeet(inches);
	meters = feetToMeters(feet);
	metersAndCentimeters(meters, centimeters);

	outputMeters(meters, centimeters);

	return 1;
}
