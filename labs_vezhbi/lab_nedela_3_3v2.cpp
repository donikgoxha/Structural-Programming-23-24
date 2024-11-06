//
// Created by Donik Goxha on 06-Nov-24.
//
//Se vnesuvaat pozitivni celi broevi se dodeka ne se vnese nesto drugo sto ne e broj.
//Za sekoj vlez se pecati najgolema cifra na brojot, a na kraj prosek od site najgolemi cifri
//(Vlez 123 izlez 3, vlez 789 izlez 9, vlez . izlez 6)

#include <iostream>
using namespace std;

int main() {
    int broj;
    int suma_maksimumi = 0;
    int brojac = 0;
    while (cin >> broj) {
        int max_cifra = 0;
        while (broj > 0) {
            int posledna = broj % 10;
            if (posledna > max_cifra) {
                max_cifra = posledna;
            }
            broj /= 10;
        }
        cout << max_cifra << endl;
        suma_maksimumi += max_cifra;
    }
    cout << suma_maksimumi / (brojac * 1.0) << endl;
    return 0;
}
