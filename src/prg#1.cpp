#include <iostream>
using namespace std;

int main() {
    int totel, price, number, extra;

    totel = 0;
    extra = 0;

    cout << "현재 가지고 있는 돈: ";
    cin >> totel;
    cout << "캔디의 가격: ";
    cin >> price;

    number = totel / price;
    extra = totel % price;

    cout << "최대로 살수있는 캔디의 갯수: " << number << endl;
    cout << "캔디 구매 후 남는돈: " << extra << endl;

    return 0;
}