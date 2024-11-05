//
// Created by Donik Goxha on 09-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int i = 11, suma = 0;

    cout << i;
    suma += i;
    i += 2;

    for (; i <= 99; i += 2) {
        suma += i;
        cout << " + " << i;
    }
    // int i = 11, suma = 0;
    //
    // cout << i;
    // suma += i;
    // i += 2;
    //
    // while (i <= 99) {
    //     // if (i == 99) {
    //     //     cout << i;
    //     // } else {
    //     //     cout << i << " + ";
    //     // }
    //     cout << " + " << i;
    //     suma += i;
    //     i += 2;
    // }
    cout << " = " << suma << endl;


    return 0;
}
