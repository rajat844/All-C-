 // Challange 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Movies.h"

using namespace std;

void increment_watched(Movies& movies, std::string name) {
    if (movies.increment_watched(name)) {
        cout << name << " watch incremented" << endl;
    }
    else {
        cout << name << " not found" << endl;
    }
};
void add_movie(Movies& movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name, rating, watched)) {
        cout << name << " added" << endl;
    }
    else {
        cout << name << " already exist" << endl;
    }
};
int main()
{
    Movies my_movies;
    my_movies.display();

    add_movie(my_movies, "Big", "PG-13", 2);
    add_movie(my_movies, "Star Wars", "PG", 5);
    add_movie(my_movies, "Tenet", "PG-15", 6);

    my_movies.display();
    add_movie(my_movies, "Big", "PG-13", 2);

    increment_watched(my_movies, "Tenet");
    increment_watched(my_movies, "Yellow");

    my_movies.display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
