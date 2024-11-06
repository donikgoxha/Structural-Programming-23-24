//
// Created by Donik Goxha on 03-Nov-24.
//
//zad3 aud6
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
    int broj;
    cin >> broj;
    int temp = broj + 1;

    while (true) {
        if (prost(temp)) {
            cout << temp - broj << endl;
            break;
        }
        temp++;
    }
    return 0;
}
