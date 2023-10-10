#include <iostream>
using namespace std;

int main() {
    const unsigned int penny = 1;
    const unsigned int nickel = 5;
    const unsigned int dime = 10;
    const unsigned int quarter = 25;
    const unsigned int dollar = 100;

    unsigned int pennies, nickels, dimes, quarters, dollars;
    unsigned long total;

    cout << "페니의 수: ";
    cin >> pennies;
    cout << "니켈의 수: ";
    cin >> nickels;
    cout << "다임의 수: ";
    cin >> dimes;
    cout << "퀴터의 수: ";
    cin >> quarters;
    cout << "달러의 수: ";
    cin >> dollars;


    total = (pennies * penny) + (nickels * nickel) + (dimes * dime) + (quarters * quarter) + (dollars * dollar);
    cout << "전체 값은 " << total << "페니 입니다";

    return 0;
}