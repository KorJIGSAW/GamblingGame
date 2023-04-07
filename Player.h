#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;

class Player {
	string name;
public:
	string getName();
	void setName(string name);
	bool succeed(string A, string B, string C);
};

#endif