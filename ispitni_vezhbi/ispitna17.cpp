//
// Created by Donik Goxha on 05-Nov-24.
//
//zad11 makedonski zadachi
#include <iostream>
using namespace std;

bool zigzagNumber(int number) {
    int prevDigit = number % 10; // Start with the last digit
    number = number / 10;

    while (number > 0) {
        int currentDigit = number % 10;

        if (!((currentDigit < 5 && prevDigit >= 5) || (currentDigit >= 5 && prevDigit < 5))) {
            return false;
        }

        prevDigit = currentDigit;
        number = number / 10;
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
