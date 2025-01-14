//
// Created by Donik Goxha on 28-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int number, rev = 0;
    cin >> number;

    int temp = number;

    while (temp > 0) {
        int ld = temp % 10;
        temp = temp / 10;
        rev = rev * 10 + ld;
    }
    cout << rev << endl;

    if (number == rev) {
        cout << "number is palindorme" << endl;
    } else {
        cout << "number is not palindorme" << endl;
    }
    return 0;
}
