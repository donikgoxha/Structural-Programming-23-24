//
// Created by Donik Goxha on 05-Nov-24.
//
//same as 21 with proizvod aka zad2 prv kolok lani
/*
input:
123456789
output:
123456772
123456714
12345674
12345628
12345616
1234566
1234536
1234518
123458
123440
12340
1230
120
10
0
*/
#include <iostream>
using namespace std;

int main() {
    int broj;
    while (cin >> broj) {
        while (broj >= 10) {
            int ld = broj % 10;
            int sld = (broj / 10) % 10;
            broj = broj / 100;
            int proizvod = ld * sld;
            if (proizvod < 10) {
                broj = broj * 10 + proizvod;
            } else {
                broj = broj * 100 + proizvod;
            }
            cout << broj << endl;
        }
    }
    return 0;
}
