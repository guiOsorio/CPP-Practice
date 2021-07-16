#include "header.h"

char display_menu() {
	char action {};
	cout << "P - print all elements\nA - add to the list" << endl;
	cout << "M - display mean of elements\nS - display smallest number" << endl;
	cout << "L - display largest number\nQ - quit\n" << endl;
	cout << "Enter character corresponding to the action you desire: ";
	cin >> action;
	cout << "\n";
	return action;
}

bool display_action(char action, vector<int> &vec) {
	bool done {};
	switch(action) {
		case 'p':
		case 'P':
			print_elements(vec);
			break;
		case 'a':
		case 'A':
		{
			int new_num {};
			cout << "Type the number you wish to add: ";
			cin >> new_num;
			cout << "\n";
			add_to_vector(new_num, vec);
			break;
		}
		case 'm':
		case 'M':
			calculate_mean(vec);
			break;
		case 's':
		case 'S':
			smallest_number(vec);
			break;
		case 'l':
		case 'L':
			largest_number(vec);
			break;
		case 'q':
		case 'Q':
			cout << "Bye" << endl;
			done = true;
			break;
		default:
			cout << "Input not accepted, please see options provided and try again" << endl;
			break;
	}
	return done;
}

int print_elements(vector<int> &vec) {
	if(vec.size() < 1) {
		cout << "The vector has no elements" << endl;
		return 1;
	}
	int count {0};
	cout << "[";
	for(auto num : vec) {
		if(count == 0) {
			cout << num;
		}
		else {
			cout << " " << num;
		}
		count++;
	}
	cout << "]" << endl;
	
	return 0;
}

void add_to_vector(int num, vector<int> &vec) {
	vec.push_back(num);
	cout << num << " added" << endl;
}

int calculate_mean(vector<int> &vec) {
	if(vec.size() < 1) {
		cout << "The vector has no elements" << endl;
		return 1;
	}
	int sum {};
	double avg {};
	
	for(auto num : vec) {
		sum += num;
	}
	avg = (double) sum / vec.size();
	cout << "The mean/average is: " << avg << endl;
	
	return 0;
}

int smallest_number(vector<int> &vec) {
	if(vec.size() < 1) {
		cout << "The vector has no elements" << endl;
		return 1;
	}
	int smallest {};
	int count {};
	for(auto num : vec) {
		if(count == 0) {
			smallest = num;
		}
		else {
			if(num < smallest) {
				smallest = num;
			}
		}
		count++;
	}
	cout << "The smallest number is " << smallest << endl;

	return 0;
}

int largest_number(vector<int> &vec) {
	//	L - display largest number "The largest number is ellg"
	if(vec.size() < 1) {
		cout << "The vector has no elements" << endl;
		return 1;
	}
	int largest {};
	int count {};
	for(auto num : vec) {
		if(count == 0) {
			largest = num;
		}
		else {
			if(num > largest) {
				largest = num;
			}
		}
		count++;
	}
	cout << "The largest number is " << largest << endl;

	return 0;
}
