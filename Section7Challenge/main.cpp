#include <iostream>
#include <vector>

using namespace std;

// this program has the goal of declaring and exploring the functionalities of a vector in c++

int main() {
	// declare vectors 1 and 2
	vector <int> vector1;
	vector <int> vector2;

	// add 10 and 20 to vector1
	vector1.push_back(10);
	vector1.push_back(20);
	
	// display vector1 elements and size in the console
	cout << "Vector1 elements: " << vector1.at(0) << ", " << vector1.at(1) << endl;
	cout << "Vector1 size: " << vector1.size() << endl;
	
	// add 100 and 200 to vector2
	vector2.push_back(100);
	vector2.push_back(200);
	
	// display vector2 elements and size in the console
	cout << "\nVector2 elements: " << vector2.at(0) << ", " << vector2.at(1) << endl;
	cout << "Vector2 size: " << vector2.size() << endl; 
	
	// declare an empty 2D vector
	vector <vector<int>> vector_2d;
	
	// add vectors 1 and 2 to the 2D vector
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	// display vector_2d elements in the console
	cout << "\nVector_2d elements: " << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << " | " << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;
	
	// change first element in vector1 to 1000
	vector1.at(0) = 1000;
	
	// display vector_2d elements in the console
	cout << "\nVector_2d elements: " << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << " | " << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;
	
	// display vector1 elements in the console
	cout << "Vector1 elements: " << vector1.at(0) << ", " << vector1.at(1) << endl;

	return 0;
}
