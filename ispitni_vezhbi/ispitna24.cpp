//
// Created by Donik Goxha on 05-Nov-24.
//
/*
Read from SI two integers a and b. Write a program that will print all numbers from a to b
(a < b), such as the number created from all the digits from next to the first to the next to
last digit in the original number (the digits that will remain if we remove the first and the
last digit from the original number), reversed (read from right to left) is divisible with the
number created as the sum of the first and the last digit. For single and two digit numbers,
the number created from the middle digits is 0, and these numbers are not printed.
At the end print out the count of such numbers.
Example. For the number 82675 the number created from the digits from the next to the first up
to the next to last digit, reversed is 762, and the sum of the first and the last digit is
(8 + 5) = 13. When printing out the numbers, next to each number that is satisfying the
condition, print the equation of the condition in the following form:
original_number -> (reversed_middle == (last_digit + first_digit) * quotient)
for example: 291 -> (9 == (1 + 2) * 3) 84575 -> (754 == (5 + 8) * 58)
 */
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
        int middleReversed = reverseMiddle(i);
        int sumFirstLast = sumOfFirstDigitAndLast(i);

        if (middleReversed == 0) continue;

        if (middleReversed % sumFirstLast == 0) {
            int quotient = middleReversed / sumFirstLast;

            cout << i << " -> (" << middleReversed << " == ("
                    << getLastDigit(i) << " + " << getFirstDigit(i)
                    << ") * " << quotient << ")" << endl;

            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}
