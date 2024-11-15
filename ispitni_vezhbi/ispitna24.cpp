//
// Created by Donik Goxha on 05-Nov-24.
//
//zad 8 english
#include <iostream>
using namespace std;

int getLastDigit(int number) {
    return number % 10;
}

int getFirstDigit(int number) {
    while (number >= 10) {
        number = number / 10;
    }
    return number;
}

int reverseMiddle(int number) {
    int reverseNumber = 0;
    number = number / 10;
    while (number > 9) {
        int ld = number % 10;
        reverseNumber = reverseNumber * 10 + ld;
        number = number / 10;
    }
    return reverseNumber;
}

int sumOfFirstDigitAndLast(int number) {
    return getLastDigit(number) + getFirstDigit(number);
}

int main() {
    int a, b;
    cin >> a >> b;
    int counter = 0;


    for (int i = a; i <= b; i++) {
        if (reverseMiddle(i) % sumOfFirstDigitAndLast(i) == 0) {
            cout << i << " -> (" << reverseMiddle(i) << " == ("
                    << getLastDigit(i) << endl;
        }
    }
    return 0;
}
