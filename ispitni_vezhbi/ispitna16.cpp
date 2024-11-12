//
// Created by Donik Goxha on 05-Nov-24.
//
//zad10 makedonski zadachi
#include <iostream>
using namespace std;

bool zigzagNumber(int number) {
    int ld = number % 10;
    number = number / 10;
    bool ascending = (number % 10 < ld);

    while (number > 0) {
        int currentDigit = number % 10;
        number = number / 10;

        if (ascending && !(currentDigit < ld)) {
            return false;
        } else if (!ascending && !(currentDigit > ld)) {
            return false;
        }
        ascending = !ascending;
        ld = currentDigit;
    }
    return true;
}

int main() {
    int number;
    while (cin >> number) {
        if (number < 10) {
            continue;
        }
        if (zigzagNumber(number)) {
            cout << number << endl;
        }
    }
    return 0;
}
