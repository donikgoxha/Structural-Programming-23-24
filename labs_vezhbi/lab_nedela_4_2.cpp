//
// Created by Donik Goxha on 05-Nov-24.
//
/*
VTORA
Vnesuvas x,c,p. Ispecati 10 broja pogolemi od x sto e imaat cifrata c, p pati.
So funkcijata countOccurence da se vrati vrednost kolku pati se cita cifrata vo brojot.
Input:
100 1 1
Output
102
103
104
105
106
107
108
109
120
*/

#include <iostream>
using namespace std;

int countOccurrence(int number, int digit) {
    int count = 0;
    while (number > 0) {
        if (number % 10 == digit) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main() {
    int m, n, p;
    cin >> m >> n >> p;

    int foundNumbers = 0;
    int currentNumber = m + 1;

    while (foundNumbers < 10) {
        if (countOccurrence(currentNumber, n) == p) {
            cout << currentNumber << endl;
            foundNumbers++;
        }
        currentNumber++;
    }

    return 0;
}
