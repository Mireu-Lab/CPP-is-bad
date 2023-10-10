#include <iostream>
using namespace std;

int main() {
    int total = 0, val;

    for (int num = 0; num < 3; num++){
        printf("퀴즈 #%d 성적: ", num);
        cin >> val;

        total += val;
    }

    cout << "중간고사 성적: ";
    cin >> val;
    total += val;

    cout << "기말고사 성적: ";
    cin >> val;
    total += val;

    cout << "====================" << endl;

    cout << "성적 총합: " << total << endl;
    
    cout << "====================" << endl;


    return 0;
}