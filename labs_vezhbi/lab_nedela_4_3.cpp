//
// Created by Donik Goxha on 05-Nov-24.
//
/*
TRETA
*Vnesuvas broj X i vnesuvas neodreden broj celi broevi se dodeka ne se vnese nesto
*razlicno od broj.
*Proveruvas (so funkcii sekako) kolku pati se sodrzi brojot X vo sekoj od tie broevi.
Primer Input:
123
123123
171123
Output:
123123 -> 2 (bidejki dvapati se sodrzi X (123) vo brojot
171123 -> 1
*/

#include <iostream>
using namespace std;

int countOccurances(int number, int X) {
    int counter = 0;

    if (X == 0) {
        while (number > 0) {
            if (number % 10 == 0) {
                counter++;
            }
            number /= 10;
        }
        return counter;
    }

    int tempX = X;
    int multiplier = 1;

    while (tempX > 0) {
        tempX /= 10;
        multiplier *= 10;
    }

    while (number > 0) {
        if (number % multiplier == X) {
            counter++;
            number /= multiplier;
        } else {
            number /= 10;
        }
    }

    return counter;
}

int main() {
    int X, numbers;
    cin >> X;

    while (cin >> numbers) {
        int occurances = countOccurances(numbers, X);
        cout << numbers << " -> " << occurances << endl;
    }

    return 0;
}
