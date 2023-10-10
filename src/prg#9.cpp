#include <iostream>
using namespace std;

int main() {
    char text;

    cout << "검색할 Text: ";
    cin >> text;

    if ((int)text == (int)'c') {
        cout << "c와 같음" << endl;
    } else if ((int)text > (int)'c') {
        cout << "c 뒤에 있음" << endl;
    } else if ((int)text < (int)'c') {
        cout << "c 앞에 있음" << endl;
    }
    
    return 0;
}