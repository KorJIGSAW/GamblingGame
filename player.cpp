#include <iostream>
#include "Player.h"
using namespace std;

//�̸����� ��ȯ���ش�.
string Player::getName() {
	cout << name + " : <Enter>";
	return name;
}

//�̸��� �����Ѵ�.
void Player::setName(string name) {
	this->name = name;
}

//3���� ���ڿ��� �Ȱ����� ���Ѵ�.
bool Player::succeed(string A, string B, string C) {
	return (A == B && B == C);
}