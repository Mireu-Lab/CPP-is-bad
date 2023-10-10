#include <iostream>
using namespace std;

int main() {
    int num[4] = {0, 0, 0, 0};
    int max = 0;

    cout << "3개의 정수를 입력하시오: ";
    cin >> num[0] >> num[1] >> num[2];


    for (int a = 0; a < 3; a+=1){
        if (num[a] > num[a+1]) {
            max = num[a];
        }
    }

    cout << "가장 큰 정수는 " << max << endl;
    return 0;
}