#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "0~100점 사이의 점수를 입력하세요.: ";
    cin >> score;

    if (score >= 70) {
        cout << "pass 입니다." << endl;
    } else {
        cout << "fail 입니다." << endl;
    }

    return 0;
}