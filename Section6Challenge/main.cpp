#include <iostream>

using namespace std;

// this challenge consists of writing a program which calculates the cost of a service based on user's inputs,
// being slightly different than the program in the CarpetCleaning folder

//Gui's carpet cleaning service
//Charges:
//	$25 per small room
//	$35 per large room 
//Sales tax rate is 6%
//Estimates are valid for 30 days
//
//	Prompt the user for the number of small and large rooms they would like cleaned
//	and provide an estimate such as:
//
//Estimate for carpet cleaning service
//Number of small rooms: 3
//Number of large rooms: 1
//Price per small room: $25
//Price per large room: $35
//Cost: $110
//Tax: $6.6
//========================
//Total estimate: $116.6
//This estimate is valid for 30 days

int main() {
	int number_of_small_rooms {0};
	double price_per_small_room {25.0};
	int number_of_large_rooms {0};
	double price_per_large_room {35.0};
	double tax_rate {0.06};
	int estimate_valid {30};
	
	cout << "Welcome to Gui's carpet cleaning service" << endl;
	cout << "Here we charge $" << price_per_small_room << " for a small room and $" << price_per_large_room << " for a large room" << endl;
	cout << "All of this is offered with a " << tax_rate * 100 << "% tax rate" << endl;
	
	cout << endl;
	
	// prompt the user to specify the number of rooms to be cleaned according to their type
	cout << "How many small rooms would you like cleaned? ";
	cin >> number_of_small_rooms;
	cout << "How many large rooms would you like cleaned? ";
	cin >> number_of_large_rooms;
	
	cout << endl;
	
	// calculate and display cost of the service and the tax costs,
	// as well as the total cost (service + tax costs combined)
	double non_tax_cost {(number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room)};
	double tax {non_tax_cost * tax_rate};
	cout << "Estimate for carpet cleaning service" << endl;
	cout << "Cost: $" << non_tax_cost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "=============================" << endl;
	double total_cost {non_tax_cost + tax};
	cout << "Total estimate: $" << total_cost << endl;
	cout << "This estimate is valid for " << estimate_valid << " days";
	
	cout << endl;
	return 0;
}
