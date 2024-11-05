//
// Created by Donik Goxha on 30-Oct-24.
//

//1. Se vnesuvaat 2 broevi a,b, b e od 0 do 9, da se najde kolku
//pati se naogja b vo a. Primer input 12334, output: 2

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    do {
        cin >> b;
    } while (b < 1 || b > 9);

    int counter = 0;
    int temp = a;

    while (temp > 9) {
        int digit = temp % 10;
        if (digit == 0) {
            counter++;
        }
        temp = temp / 10;
    }
    return 0;
}
