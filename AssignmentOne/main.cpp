#include <iostream>
#include <string>

using namespace std;

// this program builds a pyramid of #s of a height specified by the user

int main() {
	bool done {false};
	string instr {};
	// get user's input
	// the function will only return after the while loop ends, which only happens if the user types "q" or "quit" as input
	while(!done) {
		cout << "Enter a string (type q to quit): ";
		getline(cin, instr);
		if(instr == "q" || instr == "quit") {
			done = true;
			continue;
		}
		// get string length
		size_t len = instr.length();
		// declare a new string and a variable i to keep track of counting the iterations
		string new_str {};
		size_t i {};
		size_t number_of_spaces {len - 1};
		// while i < the string's length:
		// 	add the char at index i on both sides of the new declared string and print the new string in a new line
		while (i < len) {
			string spaces (number_of_spaces, ' ');
			if (i == 0) {
				// the first character is only added once
				new_str = instr.at(i);
				cout << "\n" << spaces << new_str << endl;
			}
			else {
				// add the current character on both sides
				new_str = instr.at(i) + new_str + instr.at(i);
				cout << spaces << new_str << endl;
			}
			// decrement the spaces for the next loop because one more character will be added
			number_of_spaces--;
			// increment i to print the new character on the next loop
			i++;
		}
		cout << endl;
	}
	
	
	return 0;
}
