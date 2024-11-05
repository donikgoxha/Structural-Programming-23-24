//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int a = number / 10000;
    int b = number / 1000 % 10;
    int c = number / 100 % 100;
    int d = number / 10 % 10;
    int e = number % 10;

    if (a < c < e && (number % (b + c)) == 0) {
        cout << "1" << endl;
    } else if ((b + c) == 0) {
        cout << "-1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
