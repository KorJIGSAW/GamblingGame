#include <iostream>
#include <string>
#include "Fruit.h"
#include "GamblingGame.h"
#include "Player.h"
#include <windows.h>
using namespace std;

int main() {
	GamblingGame* game;
	game = new GamblingGame("°×ºí¸µ °ÔÀÓ");
	game->run();
	delete game;
	Sleep(10000);
}