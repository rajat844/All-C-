#pragma once
#include <string>
#ifndef _MOVIE_H_
#define _MOVIE_H_

using namespace std;

class Movie
{
private:
	std::string name;
	std::string rating;
	int watched;
public:
	//Constructor - expects all 3 movies
	Movie(std::string name, std::string rating, int watched);
	//Copy Constructor
	Movie(const Movie& source);
	//Destuctor
	~Movie();

	void set_name(std::string name) { this->name = name; }
	std::string get_name() const { return name; }

	void set_rating(std::string rating) { this->rating = rating; }
	std::string get_rating() const { return rating; }

	void set_watched(int watched) { this->watched = watched; }
	int get_watched() const { return watched; }

	void display() const;
	void increment() { watched++; }
};



#endif // !__MOVIE_H

