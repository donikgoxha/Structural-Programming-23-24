//
// Created by Donik Goxha on 03-Nov-24.
//
//zad4 aud6
#include <iostream>
#include <cmath>
using namespace std;

bool prost(int k) {
    if (k < 4) {
        return true;
    }
    for (int i = 2; i < sqrt(k); i += 1) {
        if (k % i == 0) {
            return false;
        }
    }
    return true;
}

int zbir_na_cifri(int k) {
    int suma = 0;
    while (k > 0) {
        suma = suma + (k % 10);
        k = k / 10;
    }
    return suma;
}

int main() {
    int brojac = 0;
    for (int i = 9999; i < 0; i--) {
        int zbir_cifri = zbir_na_cifri(i);
        if (prost(i) && prost(zbir_cifri)) {
            cout << i << endl;
            brojac++;
        }
    }
    cout << brojac << endl;
    return 0;
}
