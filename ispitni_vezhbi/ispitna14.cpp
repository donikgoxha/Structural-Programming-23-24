//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
using namespace std;

bool isEvenEquivalent(int larger, int smaller) {
    int position = 1;
    int reversed = 0;
    int factor = 1;

    while (larger > 0) {
        if (position % 2 == 0) {
            reversed = reversed + (larger % 10) * factor;
            factor = factor * 10;
        }
        larger = larger / 10;
        position++;
    }
    return reversed == smaller;
}

int main() {
    int a, b;
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Invalid input" << endl;
    }

    int larger, smaller;

    if (a > b) {
        larger = a;
        smaller = b;
    } else {
        larger = b;
        smaller = a;
    }
    if (isEvenEquivalent(larger, smaller)) {
        cout << "PAREN" << endl;
    } else {
        cout << "NE" << endl;
    }

    return 0;
}
