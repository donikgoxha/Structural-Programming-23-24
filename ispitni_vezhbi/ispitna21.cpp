//
// Created by Donik Goxha on 05-Nov-24.
//
/*
zad2 prv kolok lani
input: 123456789
output:
12345678
12345615
1234566
1234512
123453
12348
12312
1233
126
18
9
*/
#include <iostream>
using namespace std;

int main() {
    int broj;
    while (cin >> broj) {
        while (broj >= 10) {
            int posledna = broj % 10;
            int predposledna = (broj / 10) % 10;
            broj /= 100;
            int suma = posledna + predposledna;
            if (suma < 10) {
                broj = broj * 10 + suma;
            } else {
                broj = broj * 100 + suma;
            }
            cout << broj << endl;
        }
    }
    return 0;
}
