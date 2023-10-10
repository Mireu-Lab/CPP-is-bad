#include <iostream>
using namespace std;

int main() {
    int L, W, H;

    cout << "길이: ";
    cin >> L;
    cout << "너비: ";
    cin >> W;
    cout << "높이: ";
    cin >> H;

    int volume = L * W * H;
    int surface = ((L * W) + (L * H) + (H * W)) * 2;

    cout << "상자의 부피: " << volume << endl;
    cout << "상자의 표면적: " << surface << endl;

    return 0;
}