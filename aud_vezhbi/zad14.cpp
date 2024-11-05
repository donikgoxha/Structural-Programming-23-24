//
// Created by Donik Goxha on 28-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int sum = 0;
        int tmp = i;
        while (tmp >= 10) {
            int c = tmp % 10;
            sum += c;
            tmp /= 10;
        }

        int ld = tmp;

        if (sum == ld) {
            cout << i << endl;
            ++count;
        }
    }

    cout << count << endl;

    // int number;
    // cin >> number;
    //
    // int tmp = number;
    // int sum = 0;
    //
    // while (tmp > 9) {
    //     int ld = tmp % 10;
    //     sum += ld;
    //     tmp = tmp / 10;
    // }
    //
    // cout << number << " " << tmp << " " << sum << endl;
    return 0;
}
