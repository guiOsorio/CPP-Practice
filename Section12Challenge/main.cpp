// write a program with two functions: 
// - apply_all(), which returns a pointer and expects 4 parameters -> array1, its size, array2, its size
// this function's goal is to return a pointer to a new array which results will be evry element in array 1
// multiplied by every element in array 2
// - print(), which expects an array and its size as parameters, and prints each element in the given array

#include <iostream>

using namespace std;

int *apply_all(int const *arr1, size_t size1, int const *arr2, size_t size2);

void display(const int *const arr, size_t size);

int main() {
	// initialize arrays to be multiplied
	int evens[] {2,4,6,8,10};
	int primes[] {2,3,5,7};
	// initialize variables to store the sizes of the arrays to be multiplied
	const size_t size1 = 5;
	const size_t size2 = 4;
	// initialize pointer to the new_arr (which will store the multiplied results)
	int *new_arr {nullptr};
	int new_arr_size {};
	// populate the new array to have elements to represent the multiplication of elements from array1 to array2
	new_arr = apply_all(evens, size1, primes, size2);
	// print evens array
	cout << "Array 1: ";
	display(evens, size1);
	// print primes array
	cout << "Array 2: ";
	display(primes, size2);
	// determine size of the new array to pass it into the display function and print elements
	new_arr_size = size1 * size2;
	cout << "Multiplied arrays: ";
	display(new_arr, new_arr_size);
	// free space allocated in the heap to store the new array
	delete [] new_arr;
	return 0;
}


int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2) {
	int *new_arr {nullptr};
	// this variable represents the size of the new array
	int multiply_sizes = size1 * size2;
	// allocate space in the heap to store the new array
	new_arr = new int[multiply_sizes];
	// variable to store the position of elements in the new array
	int position {0};
	for(size_t i = 0; i < size2; i++) {
		for(size_t j = 0; j < size1; j++) {
			*(new_arr + position) = arr1[j] * arr2[i];
			// move position to represent the next index in the new array
			position++;
		}
	}
	return new_arr;
}

void display(const int *const arr, size_t size) {
	
	cout << "[ ";
	for(size_t i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "]\n";
}