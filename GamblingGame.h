#ifndef GAMBLINGGAME_H
#define GAMBLINGGAME_H

#include <iostream>
#include <string>
using namespace std;
class Player; //전방참조!!

class GamblingGame {
	string title;
	int Cntplayer;
	Player* players;
	bool CreatePlayers();
public:
	GamblingGame(string title);
	~GamblingGame();
	void run();
};

#endif