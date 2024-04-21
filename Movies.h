//
// Created by ereic on 4/21/2024.
//

#ifndef DSAP3_MOVIES_H
#define DSAP3_MOVIES_H

#include <iostream>
#include <vector>
using namespace std;

/*Outline:
 Eric Reichard

 User picks at most 3 top genres, minimum 1.
 A movie has dataset ID, name, main genre, additional genres (max 2), and IMDb rating
 It stores this data in a struct such as:
    string name = "Avengers: Endgame";
    vector<string> genres = {"Action", "Adventure", "Drama"};
    float rating = 8.4;
 The main genre is the first entry in genres, subsequent entries are additional.
 Each genre is assigned weight based on if it is the main or not
    an example weight vector for a movie could be: {1.0, 0.5, 0.5}.
 The algorithm tries to match the 3 user-inputted genres with movies with similar weight
   vectors for those genres, calculated by the magnitude of {user} - {movie}.
  Movies are then sorted by IMDb score or date of release.
 */

void test(){
    cout << "test" << endl;
}

struct Movie {
    string name;
    vector<string> genres;
    float rating;
    int year;
    Movie(string const& n, vector<string> const& g, float r, int y) : name(n), genres(g), rating(r), year(y) {}
};


class MovieData {


};

#endif //DSAP3_MOVIES_H
