#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "song.h"
using namespace std;

song::song()
{
	titles = "";
	artists = "";
	genres = "";
	// make parameters
}

song::song(string title, string artist, string genre)
{
	// set parameters
	string titles = title;
	string artists = artist;
	string genres = genre;
}

string song::getTitle()
{
	return titles;
}
// get the title
void song::setTitle(string newTitle)
{
	titles = newTitle;
}
// set the title
string song::getArtist()
{
	return artists;
}
// get the artist
void song::setArtist(string newArtist)
{
	artists = newArtist;
}
// set the artist
string song::getGenre()
{
	return genres;
}
// get the genre
void song::setGenre(string newGenre)
{
	genres = newGenre;
}
// set the genre
