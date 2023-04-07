#ifndef FRUIT_H
#define FRUIT_H

#include <iostream>
#include <string>
using namespace std;

class FruitBucket {
    string FruitName[10];
    string FruitMenu;
public:
    void SetFruitName() {
        string Fruit;
        for (int i = 0; i < 10; i++) {
            cout << i + 1 << "번째 과일 이름을 입력해주세요 >> ";
            cin >> Fruit;
            FruitName[i] = Fruit;
        }
    }
    string RanPick() {
        int ran = 0;
        ran = rand() % 10;
        FruitMenu = FruitName[ran];
        return FruitMenu;
    }
};

#endif