#include <iostream>
using namespace std;

int main() {
    int Hr, Min, Sec;

    cout << "Hr: ";
    cin >> Hr;
    cout << "Min: ";
    cin >> Min;    
    cout << "Sec: ";
    cin >> Sec;

    int totelSec = ((Hr * 60) * 60) + (Min * 60) + Sec;

    cout << "Totel Sec: " << totelSec;

    return 0;
}