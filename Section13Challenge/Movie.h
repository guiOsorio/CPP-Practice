#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
	std::string name;
	std::string rating;
	int watched;
public:
	// Constructor
	Movie (std::string name, std::string rating, int watched);
	
	// Copy constructor
	Movie (const Movie &source);
	
	// Destructor
	~Movie();
	
	// Setters and Getters
	void set_name(std::string new_name) {
		name = new_name;
	}
	std::string get_name() const {
		return name;
	}
	
	void set_rating(std::string new_rating) {
		rating = new_rating;
	}
	std::string get_rating() const {
		return rating;
	}
	
	void set_watched(int new_watched) {
		watched = new_watched;
	}
	int get_watched() const {
		return watched;
	}
	
	// increments the number of times this specific movie was watched
	void increment_watched() {
		watched++;
	}
	// displays the movie
	void display() const;
};


#endif