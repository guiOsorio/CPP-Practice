#include <iostream>
#include "Movies.h"

// HELPER FUNCTIONS
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name) {
	if(movies.increment_watched(name)) {
		std::cout << name << " watch incremented" << std::endl;
	} else {
		std::cout << name << " not found" << std::endl;
	}
}
void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
	if(movies.add_movie(name, rating, watched)) {
		std::cout << name << " added" << std::endl;
	} else {
		std::cout << name << " already exists" << std::endl;
	}
}

int main() {
	Movies my_movies;
	
	add_movie(my_movies, "Gui's story", "PG", 4);
	add_movie(my_movies, "Two", "PG", 10);
	add_movie(my_movies, "Gui's story", "PG", 4);
	increment_watched(my_movies, "Two");
	
	my_movies.display();
	
	return 0;
}
