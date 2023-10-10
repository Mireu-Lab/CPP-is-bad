#include <math.h>

#include <iostream>
using namespace std;

int triangle() {
    int a, h; // 밑변, 높이 값

    cout << "밑변: ";
    cin >> a;
    cout << "높이: ";
    cin >> h;

    int A = (1/2)*a*h;

    cout << "면적: " << A << endl;
    return 0;
}

int circle() {
    int r; // 반지름 값
    
    cout << "반지름: ";
    cin >> r;

    double A = 3.14 * pow(r, 2);

    cout << "면적: " << A << endl;
    return 0;
}

int square() {
    int a, b; // 세로, 가로 값
    
    cout << "가로: ";
    cin >> a;
    cout << "세로: ";
    cin >> b;

    int A = a * b;

    cout << "면적: " << A << endl;
    return 0;
}

int main() {
    int figure;

    cout << "도형을 선택하시오 (1, 2, 3): ";
    cin >> figure;

    switch (figure) {
    case 1:
        square();
        break;

    case 2:
        circle();
        break;

    case 3:
        triangle();
        break;

    default:
        cout << "입력하지 않아 프로세스을 종료합니다." << endl;
        break;
    }


    return 0;
}