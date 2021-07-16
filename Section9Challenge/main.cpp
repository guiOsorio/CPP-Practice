#include <iostream>
#include <vector>

using namespace std;

// this program performs many operations in a vector, such as 
// print all elements, adding a number, calculating the mean of its elements,
// and displaying the smallest and largest number between its elements

int print_elements();
void add_to_vector(int num);
int calculate_mean();
int smallest_number();
int largest_number();

vector<int> vec {1, 4, 100, 43, 18};

int main() {
	bool done {false};
	
	do 
	{
		char action {};

		cout << "P - print all elements\nA - add to the list" << endl;
		cout << "M - display mean of elements\nS - display smallest number" << endl;
		cout << "L - display largest number\nQ - quit\n" << endl;
		cout << "Enter character corresponding to the action you desire: ";
		cin >> action;
		cout << "\n";

		switch(action) {
			case 'p':
			case 'P':
				print_elements();
				break;
			case 'a':
			case 'A':
			{
				int new_num {};
				cout << "Type the number you wish to add: ";
				cin >> new_num;
				cout << "\n";
				add_to_vector(new_num);
				break;
			}
			case 'm':
			case 'M':
				calculate_mean();
				break;
			case 's':
			case 'S':
				smallest_number();
				break;
			case 'l':
			case 'L':
				largest_number();
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
		cout << "\n<-------------------------------------------------------------------------->\n" << endl;
	}
	while(!done);
	return 0;
}


int print_elements() {
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

void add_to_vector(int num) {
	vec.push_back(num);
	cout << num << " added" << endl;
}

int calculate_mean() {
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

int smallest_number() {
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

int largest_number() {
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






