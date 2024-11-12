//
// Created by Donik Goxha on 05-Nov-24.
/*
PRVA
vnesvis broj primer 45321 i da se ispecatit 45 (samo prvite 2 cifri)
Daen bil cel main ti samo da dodajsh funkcija PrviDveCifri
*/

#include <iostream>
using namespace std;

int firstTwoDigits(int number) {
    while (number >= 100) {
        number = number / 10;
    }
    return number;
}

int main() {
    int number;
    cin >> number;

    cout << firstTwoDigits(number) << endl;
    return 0;
}
