#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	//Creating the variables to check and store the numbers given
	int array[10];
	int tempVal;

	//Checks and stores the numbers into the array
	for (int i = 0; i < 10; ++i) {
		cout << "What is the next nonnegative integer?" << endl;
		cin >> tempVal;
		if (tempVal >= 0) {
			array[i] = tempVal;
		}
		else {
			cout << "That wasn't a nonnegative integer. Try again." << endl;
			--i;
		}
	}

	//Prints back the numbers in the array
	cout << "Here are the numbers you gave me." << endl;
	for (int i = 0; i < 10; ++i) {
		cout << array[i] << endl;
	}

	return 0;

}
