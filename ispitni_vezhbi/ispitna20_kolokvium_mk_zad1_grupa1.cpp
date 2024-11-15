//
// Created by Donik Goxha on 05-Nov-24.
//
/*
zad1 prv kolok lani
input
8
output
8*8=64
6*6=36
4*4=16
2*2=4
120
30
 */
#include <iostream>
using namespace std;

int main() {
    int x;
    int suma = 0;
    int counter = 0;
    cin >> x;

    if (x % 2 == 1) {
        x = x - 1;
    }
    for (int i = x; i > 0; i -= 2) //or you can go with i >= 2 and i--
    {
        cout << i << "*" << i << "=" << i * i << endl;
        counter++;
        suma += i * i;
    }
    cout << suma << endl;
    cout << (1.0 * suma) / counter << endl;
    return 0;
}
