//
// Created by Donik Goxha on 05-Nov-24.
//
/*
Read from SI two integers a and b. Write a program that will print all numbers from a to b (a < b),
such as the number created as a product of the digits from the next to the first to the next to last digit
(middle digits = the digits that will remain if we remove the first and the last digit from the
original number) is divisible with the number created from the last and the first digit.
Do not print the numbers where the product of the middle digits is 0.
At the end print the count of such numbers.
When printing out the numbers, next to each number that satisfies the condition,
print the equation of that condition, for example: 55650 -> (150 == 50 * 3),
where 150 = 5 * 6 * 5 and 50 is constructed from 5 (the first digit) and the 0
(the last digit of the number)
 */
#include <iostream>
using namespace std;

int getFirstDigit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int getLastDigit(int n) {
    return n % 10;
}

int getMiddleDigits(int n) {
    int proizvod = 1;
    n = n / 10;
    while (n >= 10) {
        int middleDigits = n % 10;
        proizvod = proizvod * middleDigits;
        n = n / 10;
    }
    return proizvod;
}

int main() {
    int a, b;
    int counter = 0;

    cin >> a >> b;

    if (a >= b) {
        cout << "Invalid input." << endl;
    }

    for (int num = a; num <= b; ++num) {
        if (num < 100) {
            continue; // Skip numbers with less than 3 digits (no middle digits).
        }
    }
    int firstDigit = getFirstDigit(a);
    int lastDigit = getLastDigit(a);
    int middleProduct = getMiddleDigits(a);
    int lastFirstDigit = lastDigit * 10 + firstDigit;

    if (middleProduct == 0) {
        continue;
    }
    return 0;
}
