//
// Created by Donik Goxha on 03-Nov-24.
//
//zad6 aud6
#include <iostream>
#include <cmath>
using namespace std;

int faktoriel(int k) {
    int proizvod = 1;
    for (int i = 1; i <= k; i++) {
        proizvod = proizvod * i;
    }
    return proizvod;
}

int suma(int k) {
    int suma = 0;
    for (int i = 1; i <= k; i++) {
        suma = suma + i;
    }
    return suma;
}

int main() {
    int n;
    cin >> n;
    int rez = 0;
    for (int i = 1; i <= n; i++) {
        rez = rez + faktoriel(suma(i));
    }
    cout << rez << endl;
    return 0;
}
