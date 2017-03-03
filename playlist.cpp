#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "song.h"
#include "playlist.h"
using namespace std;

playlist::playlist()
{
	numSongs = 0;
}

// There are currently zero songs on the playlist

void playlist::addSong(song x)
{
	// make sure they don't exced the max number of songs on a playlist
	if (numSongs < maxSongs)
	{
		songArray[numSongs];
	} ++numSongs;
}
