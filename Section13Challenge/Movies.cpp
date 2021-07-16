#include <iostream>
#include "Movies.h"

// implement constructor
Movies::Movies() {
}

// implement destructor
Movies::~Movies() {
}

// implement add_movie()
bool Movies::add_movie(std::string name, std::string rating, int watched) {
	// for loop checking if the name is already in the movies vector, if it is, then return false
	for(const auto &movie : movies) {
		if(movie.get_name() == name) {
			return false;
		}
	}
	// if movie name does not correspond to a movie in the object
	Movie movie_to_add {name, rating, watched};
	movies.push_back(movie_to_add);
	return true;
}

// implement increment_watched()
bool Movies::increment_watched(std::string name) {
	// if movie exists increment and return true
	for(auto &movie : movies) {
		if(movie.get_name() == name) {
			movie.increment_watched();
			return true;
		}
	}
	// else return false
	return false;
}

// implement display()
void Movies::display() const {
	if(movies.size() == 0) {
		std::cout << "No movies to display" << std::endl;
	} else {
		for(const auto &movie : movies) {
			movie.display();
		}
	}
}