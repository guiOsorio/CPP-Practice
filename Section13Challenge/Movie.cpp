#include <iostream>
#include "Movie.h"

// Implement constructor
Movie::Movie (std::string name_val, std::string rating_val, int watched_val)
	: name{name_val}, rating{rating_val}, watched{watched_val} {
	}

// Implement copy constructor
Movie::Movie (const Movie &source)
	: Movie(source.name, source.rating, source.watched) {
	}

// Implement destructor
Movie::~Movie() {
}

// Implement display()
void Movie::display() const {
	std::cout << name << ", " << rating << ", " << watched << std::endl;
}