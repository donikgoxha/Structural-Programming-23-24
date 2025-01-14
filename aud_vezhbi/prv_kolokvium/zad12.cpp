//
// Created by Donik Goxha on 28-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int temp = number;

    int sum = 0;
    int counter = 0;

    while (temp > 0) {
        int last_digit = temp % 10;
        sum += last_digit;
        number = temp / 10;
        ++counter;
    }

    cout << sum << counter << endl;
    return 0;
}
