//
// Created by Donik Goxha on 21-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int max1, max2, number, temp;
    if (cin >> max1 >> max2) {
        if (max2 > max1) {
            temp = max1;
            max1 = max2;
            max2 = temp;
        }
        while (cin >> number) {
            if (number > max1) {
                max2 = max1;
                max1 = number;
            } else if (number > max2) {
                max2 = number;
            }
        }
    } else {
        cout << "Invalid Input" << endl;
    }

    cout << max1 << endl;
    cout << max2 << endl;
    return 0;
}
