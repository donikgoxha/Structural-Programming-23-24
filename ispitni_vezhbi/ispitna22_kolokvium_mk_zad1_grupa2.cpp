//
// Created by Donik Goxha on 05-Nov-24.
//
//same as 20 with neparni aka zad1 prv kolok lani
/*
input
7
output
7*7=49
5*5=25
3*3=9
1*1=1
84
21
 */
#include <iostream>
using namespace std;

int main() {
    int x;
    int suma = 0;
    int counter = 0;
    cin >> x;

    if (x % 2 != 1) {
        x = x - 1;
    }
    for (int i = x; i > 0; i -= 2) {
        cout << i << "*" << i << "=" << i * i << endl;
        counter++;
        suma += i * i;
    }
    cout << suma << endl;
    cout << (1.0 * suma) / counter << endl;
    return 0;
}
