//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    // Check if month is valid (1 to 12)
    if (month < 1 || month > 12) {
        cout << "0";
        return 0;
    }

    // Check if the day is valid based on the month and leap year for February
    if (day < 1 || (day > 31) ||
       ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) ||
       (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && day > 29) ||
       (month == 2 && !((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && day > 28)) {
        cout << "0";
       } else {
           cout << "1";
       }

    return 0;
}
