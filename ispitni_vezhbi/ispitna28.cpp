//
// Created by Donik Goxha on 05-Nov-24.
//
/*
Read from SI two integers a and b. Write a program that will print all numbers from a to b
(a < b), such as the number created as a product of the digits from the next to the first to
the next to last digit (middle digits = the digits that will remain if we remove the first and
the last digit from the original number) is divisible with the number created from the last and
the first digit. Do not print the numbers where the product of the middle digits is 0.
At the end print the count of such numbers.
When printing out the numbers, next to each number that satisfies the condition,
print the equation of that condition, for example: 55650 -> (150 == 50 * 3),
where 150 = 5 * 6 * 5 and 50 is constructed from 5 (the first digit) and the 0
(the last digit of the number)
 */
#include <iostream>
using namespace std;

int getLastDigit(int n) {
    return n % 10;
}

int getFirstDigit(int n) {
    while (n >= 10) {
        n = n / 10;
    }
    return n;
}

int getProductMiddle(int n) {
    int product = 1;
    n /= 10;
    int middleFound = false;

    while (n > 9) {
        int digit = getLastDigit(n);
        product *= digit;
        middleFound = true;
        n /= 10;
    }
    return middleFound ? product : 0;
}


int rebuildNumber(int n) {
    int firstDigit = getFirstDigit(n);
    int lastDigit = getLastDigit(n);
    return firstDigit * 10 + lastDigit;
}


int main() {
    int a, b;
    cin >> a >> b;
    int counter = 0;

    for (int i = a; i <= b; i++) {
        int middle = getProductMiddle(i);
        int rebuild = rebuildNumber(i);

        if (middle == 0) {
            continue;
        }
        if (middle % rebuild == 0) {
            int quotient = middle / rebuild;

            // Print the equation
            cout << i << " -> (" << middle << " == ("
                    << rebuild << " * " << quotient << ")" << endl;

            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}
