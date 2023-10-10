#include <math.h>

#include <iostream>
using namespace std;

#define pi 3.141592

int main() {
    double r;

    cout << "반지름: ";
    cin >> r;

    double A = 4.0 * pi * pow(r, 2); // 표면
    double V = (4.0 / 3.0) * pi * pow(r, 3); // 부피

    cout << "표면: " << A << endl;
    cout << "부피: " << V << endl;

    return 0;
}