//
// Created by Donik Goxha on 05-Nov-24.
/*
PRVA
Да се дополни програмата со имплементирање на функцијата int getFirstTwoDigits (int number).
Функцијата треба да врати најзнајачните две цифри од бројот number.
Ако бројот е едноцифрен, ја враќа најзначајната цифра.
Input	Result
3
123     123 -> 12
4567    4567 -> 45
987654  987654 -> 98
*/

#include<iostream>
using namespace std;

int getFirstTwoDigits(int number) {
    while (number >= 100) {
        number = number / 10;
    }
    return number;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        cout << number << " -> " << getFirstTwoDigits(number) << endl;
    }
    return 0;
}
