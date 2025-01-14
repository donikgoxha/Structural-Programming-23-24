//
// Created by Donik Goxha on 29-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int max1, max2, number;
    int counter = 0;
    while (cin >> number) {
        if (number > 100 || number < 0) {
            continue;
        }
        if (counter == 0) {
            max1 = number;
        } else if (counter == 1) {
            max2 = number;
        } else {
            if (number > max1) {
                max2 = max1;
                max1 = number;
            } else if (number > max2) {
                max2 = number;
            }
        }

        ++counter;
    }
    cout << max1 << endl << max2 << endl;
    return 0;
}
