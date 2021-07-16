#include <iostream>

using namespace std;

// this program calculates the most efficient way (in terms of number of coins required)
// to have a certain quantity of cents

int main() {
	int cents_amount {};
	int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
	const int one_dollar {100};
	const int one_quarter {25};
	const int one_dime {10};
	const int one_nickel {5};
	
	// prompt user to enter number of cents he wants displayed
	cout << "Enter the number of cents: ";
	cin >> cents_amount;
	
	// calculate the number of dollars
	dollars = cents_amount / one_dollar;
	cents_amount %= one_dollar;
	
	// calculate the number of quarters
	quarters = cents_amount / one_quarter;
	cents_amount %= one_quarter;
	
	// calculate the number of dimes
	dimes = cents_amount / one_dime;
	cents_amount %= one_dime;
	
	// calculate the number of nickels
	nickels = cents_amount / one_nickel;
	cents_amount %= one_nickel;
	
	// whatever is left represents the number of pennies
	pennies = cents_amount;
	
	// display how many coins of each value the user needs
	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickels: " << nickels << endl;
	cout << "Pennies: " << pennies << endl;

	return 0;
}
