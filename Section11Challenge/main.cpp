#include "header.h"

// this program has the same use of the program written in challenge 9, but more organized

int main() {
	
	execute_main();
	
	return 0;
}


void execute_main() {
	bool done {false};
	vector<int> vec {1, 4, 100, 43, 18};
	
	do 
	{
		char action {};
		action = display_menu();
		done = display_action(action, vec);
		cout << "\n<-------------------------------------------------------------------------->\n" << endl;
	}
	while(!done);
}


