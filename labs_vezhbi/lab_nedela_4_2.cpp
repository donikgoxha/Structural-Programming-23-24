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

int countOccurances(int n, int c) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == c) {
            count++;
        }
        n = n / 10;
    }
    return count;
}

int main() {
    int x, c, p;
    cin >> x >> c >> p;

    int foundNumbers = 0;
    int currentNumbers = x + 1;

    while (foundNumbers < p) {
        if (countOccurances(currentNumbers, c) == p) {
            foundNumbers++;
        }
        currentNumbers++;
    }
    return 0;
}
