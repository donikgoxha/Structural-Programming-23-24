//
// Created by Donik Goxha on 21-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int number, max = 0;
    if (cin >> number) {
        if (number <= 100) {
            max = number;
        }
        while (cin >> number) {
            if (number > max && number <= 100) {
                max = number;
            }
        }
        cout << max << endl;
    } else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}
