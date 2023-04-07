#include <iostream>
#include "GamblingGame.h"
#include "Player.h"
#include "Fruit.h"
#include <time.h>

GamblingGame::GamblingGame(string title) {
    this->title = title;
    this->players = NULL; //코드 오류를 줄이기 위해 일반적으로 초기화한다.
}

GamblingGame::~GamblingGame() {

}

bool GamblingGame::CreatePlayers() {
    cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
    players = new Player[2];

    string playerName;
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            cout << "첫번째 선수 이름 >> ";
        }
        else {
            cout << "두번째 선수 이름 >> ";
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
        //enter키를 입력받고 문자열 출력
        getline(cin, input); //enter키 받기
        string ran1 = f.RanPick();
        string ran2 = f.RanPick();
        string ran3 = f.RanPick();
        cout << "\t\t" << ran1 << "\t" << ran2 << "\t" << ran3 << "\t";
        if (players[count].succeed(ran1, ran2, ran3)) {//일치할시 이름출력후 승리! 프린트
            cout << players[count].getName() + "님 승리!!" << endl;
            break;
        }
        //불일치시 아쉽군요 프린트후 반복
        else {
            cout << "아쉽군요!" << endl;
            players[count = (++count) % 2].getName();
        }
    }
}