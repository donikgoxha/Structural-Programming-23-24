//
// Created by Donik Goxha on 23-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    //54321
    //most_right 4321
    int most_right = number % 10;
    //most_left 432
    int most_left = number / 10000;
    int new_number = (number / 10) % 1000;

    cout << new_number << endl;
    cout << most_right + most_left << endl;
    return 0;
}
