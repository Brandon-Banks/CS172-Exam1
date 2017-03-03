#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "song.h"
#include "playlist.h"
using namespace std;

int main()
{

	// create a new playlist

	song songlist[4]
	{
		song("cool", "dude", "classic"), song("awesome", "lady", "rock"), song("roking", "grandpa", "classic"), song("dank", "grandma", "americana")
	};

	// Name all your stuff and people and things

	playlist tonight;
	tonight.addSong(songlist[0]);
	tonight.addSong(songlist[1]);
	tonight.addSong(songlist[2]);
	tonight.addSong(songlist[3]);

	// Add all the songs to the playlist

	cout << songlist[0] << endl;
  cout << songlist[1] << endl;
  cout << songlist[2] << endl;
  cout << songlist[3] << endl;
}
