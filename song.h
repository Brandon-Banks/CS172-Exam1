#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

class song
// create a song class
{
private:
	string titles;
	string artists;
	string genres;
	// make those private so they can't change
public:
	song();
	// create default constructor
	song(string title, string artist, string genre);
	// what needs to be inputted for a song
	string getTitle();
	string getArtist();
	string getGenre();
	// create strings for getting the info
	void setTitle(string newTitle);
	void setArtist(string newArtist);
	void setGenre(string newGenre);
	// set the info
};
