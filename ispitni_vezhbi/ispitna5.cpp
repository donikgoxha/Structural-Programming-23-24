//
// Created by Donik Goxha on 05-Nov-24.
//
#include <iostream>
using namespace std;

int moveTheLastDigit(int number) {
    int lastDigit = number % 10;
    int remaining = number / 10;

    if (remaining == 0) {
        return number;
    }

    int multiplier = 1;
    while (remaining >= multiplier) {
        multiplier *= 10;
    }
    return lastDigit * multiplier + remaining;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int n1, n2;
        cin >> n1 >> n2;

        int modded = moveTheLastDigit(n1);

        if (modded > n2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
