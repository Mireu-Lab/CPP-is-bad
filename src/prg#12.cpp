#include <stdlib.h>

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    while (true) {

        int x = rand() % 100;
        int y = rand() % 100;
        
        int answerVal = x * y;
        int answerUser;

        printf("%d X %d = ", x, y);
        cin >> answerUser;

        if (answerUser == answerVal) {
            cout << "정답입니다." << endl;
        } else {
            cout << "오답입니다." << endl;
        }

        cout << "=====================" << endl;
    }

    return 0;
}