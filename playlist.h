#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "song.h"
using namespace std;

class playlist
{
private:
	const int maxSongs = 10;
	// don't let them add more than ten songs
	int numSongs;
	// how many of songs there will be
	song songArray[10];
	// how large the array is (it's 10)

public:
	void addSong(song x);
	// for when they add a song
};
