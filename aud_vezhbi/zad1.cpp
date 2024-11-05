//
// Created by Donik Goxha on 09-Oct-24.
//
#include <iostream>
using namespace std;

int main() {


    int suma = 0, i = 10;

    do {
        suma += i;
        i += 2;
    } while (i <= 98);


    for (int i = 10; i <= 98; i += 2) {
        suma += i;
    }


    while (i <= 98) {
        suma += i;
        i += 2;
    }
    cout << suma;

    return 0;
}
