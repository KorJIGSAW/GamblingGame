#include <iostream>
#include "GamblingGame.h"
#include "Player.h"
#include "Fruit.h"
#include <time.h>

GamblingGame::GamblingGame(string title) {
    this->title = title;
    this->players = NULL; //�ڵ� ������ ���̱� ���� �Ϲ������� �ʱ�ȭ�Ѵ�.
}

GamblingGame::~GamblingGame() {

}

bool GamblingGame::CreatePlayers() {
    cout << "***** �׺� ������ �����մϴ�. *****" << endl;
    players = new Player[2];

    string playerName;
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            cout << "ù��° ���� �̸� >> ";
        }
        else {
            cout << "�ι�° ���� �̸� >> ";
        }
        cin >> playerName;
        players[i].setName(playerName);
    }
    return true;
}

void GamblingGame::run() {
    FruitBucket f;
    f.SetFruitName();
    if (!CreatePlayers()) {
        return;
    }
    int count = 0;
    string input;
    players[count].getName();
    char check[1];
    cin.getline(check, 1, '\n');
    while (true) {
        srand((unsigned)time(NULL));
        //enterŰ�� �Է¹ް� ���ڿ� ���
        getline(cin, input); //enterŰ �ޱ�
        string ran1 = f.RanPick();
        string ran2 = f.RanPick();
        string ran3 = f.RanPick();
        cout << "\t\t" << ran1 << "\t" << ran2 << "\t" << ran3 << "\t";
        if (players[count].succeed(ran1, ran2, ran3)) {//��ġ�ҽ� �̸������ �¸�! ����Ʈ
            cout << players[count].getName() + "�� �¸�!!" << endl;
            break;
        }
        //����ġ�� �ƽ����� ����Ʈ�� �ݺ�
        else {
            cout << "�ƽ�����!" << endl;
            players[count = (++count) % 2].getName();
        }
    }
}