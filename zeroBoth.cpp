#include <iostream>
using namespace std;

//Takes the reference to both parameters and zeroes out the value in them
void zeroBoth(int& value1, int& value2) {
	value1 = 0;
	value2 = 0;
}

//Tests the above function
int main(int argc, char **argv) {
	int first = 19;
	int second = -34;

	zeroBoth(first, second);

	cout << "Printing" << endl;
	cout << first << second << endl;

	return 0;
}
