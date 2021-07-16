#include <iostream>

using namespace std;

// this program calculates the area of a room

int main() {
	int width;
	int length;
	
	cout << "Enter the width of the room: ";
	cin >> width;
	
	cout << "Enter the length of the room: ";
	cin >> length;
	
	cout << "The area of the room is: " << width * length << " square feet.";
	
	return 0;
}
