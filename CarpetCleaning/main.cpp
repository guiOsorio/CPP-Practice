#include <iostream>

using namespace std;

// this program calculates and displays the price of a service based on the user's input

int main() {
	const double price_per_room {30.00};
	const double tax_rate {0.16};
	
	cout << "Hello, welcome to Gui's carpet cleaning service. Where one room costs $" << price_per_room << endl;
	
	cout << "Enter the number of rooms you want to be cleaned: ";
	int number_of_rooms {0};
	cin >> number_of_rooms;
	
	double zero_tax_cost {price_per_room * number_of_rooms};
	cout << "The non-tax cost for " << number_of_rooms << " rooms is $" << zero_tax_cost << endl;
	
	cout << "Tax is " << tax_rate * 100 << "%" << endl;
	
	double total_cost {zero_tax_cost * (1+tax_rate)};
	cout << "The total cost (tax included) for " << number_of_rooms << " rooms is $" << total_cost << endl;
	
	return 0;
}
