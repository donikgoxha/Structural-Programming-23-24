//
// Created by Donik Goxha on 03-Nov-24.
//
//zad5 aud6
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

int main() {
    int brojac = 0;

    for (int i = 1; i < 998; i++) {
        if (prost(i) && prost(i + 2)) {
            cout << i << " " << i + 2 << endl;
            brojac++;
        }
    }
    cout << brojac << endl;
    return 0;
}
