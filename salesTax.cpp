#include <iostream>
#include <iomanip>
using namespace std;

float addTax(float taxRate, float cost) {
	//Declares the value to be returned
	float total;

	//Calculates the total cost
	total = cost * (1.0 + taxRate);

	return total;
}

//Tests the above function
int main(int argc, char **argv) {
	cout << fixed << setprecision(2) << addTax(.09, 10.00) << endl;

	return 0;
}
