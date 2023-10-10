#include <ctime>
#include <cstdlib>

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    srand(time(NULL));
    
    int A_number = (rand() % 6) + 1;
    int B_number = (rand() % 6) + 1;
    
    int totalNum = A_number + B_number;

    cout << "A 주사위의 값) " << A_number << endl;
    cout << "B 주사위의 값) " << B_number << endl;
    cout << "두 주사위의 값) " << totalNum << endl;
    
    return 0;
}