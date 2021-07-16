#include <iostream>

using namespace std;

// this program converts a value in kgs to lbs

int main() {
	const float pounds_in_one_kg = 2.20;
	float kgs {0};
	float lbs {0};
	
	cout << "Enter number of kilograms to be converted to pounds: ";
	cin >> kgs;
	
	lbs = kgs * pounds_in_one_kg;
	
	cout << kgs << " kilograms is the equivalent of " << lbs << " pounds" << endl;
	
	return 0;
}
