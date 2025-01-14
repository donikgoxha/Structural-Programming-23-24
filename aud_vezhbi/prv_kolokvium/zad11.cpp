//
// Created by Donik Goxha on 28-Oct-24.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, broj, sumaParni = 0, sumaNeparni = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> broj;
        if (i % 2 == 0) {
            sumaParni += broj;
        } else {
            sumaNeparni += broj;
        }
    }

    int razlika = sumaParni - sumaNeparni;

    if (abs(razlika) > 10) {
        cout << "Razlika" << endl;
    } else {
        cout << "ne se razlicni" << endl;
    }
    return 0;
}
