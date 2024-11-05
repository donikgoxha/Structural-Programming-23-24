//
// Created by Donik Goxha on 09-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int phone_number1, phone_number2, minutes;
    float price;
    bool same_operator = false;
    //072232323
    cin >> phone_number1 >> phone_number2 >> minutes;

    //operator 1 - (071, 072, 073)
    //operator 2 - (074, 075, 076)

    int operator1 = phone_number1 / 1000000;
    int operator2 = phone_number2 / 1000000;

    // cout << operator1 << endl;
    // cout << operator2 << endl;

    if (minutes <= 30) {
        price = minutes * 3;
    } else {
        price = 30 * 3 + (minutes - 30) * 2;
    }

    if (same_operator) {
        price = price - (price * 30 / 100);
    }

    if ((operator1 == 71 || operator1 == 72 || operator1 == 73) && (
            operator2 == 71 || operator2 == 72 || operator2 == 73)) {
        same_operator = true;
    } else if ((operator1 == 74 || operator1 == 75 || operator1 == 76) && (
                   operator2 == 74 || operator2 == 75 || operator2 == 76)) {
        same_operator = true;
    }

    if (minutes <= 30) {
        price = minutes * 3;
    } else {
        price = 30 * 3 + (minutes - 30) * 2;
    }

    if (same_operator) {
        price = price - (price * 30 / 100);
    }

    cout << price << endl;

    return 0;
}
