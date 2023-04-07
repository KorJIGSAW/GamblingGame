#include <iostream>
#include "Player.h"
using namespace std;

//이름값을 반환해준다.
string Player::getName() {
	cout << name + " : <Enter>";
	return name;
}

//이름을 설정한다.
void Player::setName(string name) {
	this->name = name;
}

//3개의 문자열이 똑같은지 비교한다.
bool Player::succeed(string A, string B, string C) {
	return (A == B && B == C);
}