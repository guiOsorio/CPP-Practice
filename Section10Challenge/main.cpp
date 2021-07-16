#include <iostream>
#include <string>

using namespace std;

// this program encrypts a text inputted by the user by changing the value of its character 
// based on the corresponding index in the key string

int main() {
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key {"REWeopaBVCXZLKJHGsdfghjklzxcvDSAbnmMNqwFPOIUYrtyuiTQ"};
	
	string message {};
	// ask text to be encrypted and store it in the string variable message
	cout << "Enter your secret message: ";
	getline(cin, message);
	
	cout << "\nEncrypting message...\n";
	
	string encrypted {};
	// for every character (if a letter) in the input string,
	// add the corresponding index character from the key string to the encrypted string
	for(auto c : message) {
		size_t index = alphabet.find(c);
		if(index != string::npos) {
			encrypted += key.at(index);
		}
		else {
			encrypted += c;
		}
	}
	
	// display encrypted string
	cout << "\nEncrypted message: " << encrypted << endl;
	
	char answer {};
	// while the user's input is not valid, ask if they want their message to be decrypted
	while(answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N') {
		cout << "\nWould you like to decrypt your message? (y/n) ";
		cin >> answer;
		
		if(answer == 'y' || answer == 'Y') {
			cout << "\nDecrypting message...\n";
			cout << "\nDecrypted message: " << message << endl;
		}
		else if(answer == 'n' || answer == 'N') {
			cout << "Ok, bye\n";
		}
		else {
			cout << "Invalid character, please type 'y' or 'n'\n";
		}
	}
	
	return 0;
}


