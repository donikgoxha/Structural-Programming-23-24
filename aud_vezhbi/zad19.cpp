//
// Created by Donik Goxha on 30-Oct-24.
//
//zad1 aud6
#include <iostream>
using namespace std;

double perimetar(int radius) {
    return 2 * radius * 3.14;
}

double plostina(int radius) {
    return radius * radius * 3.14;
}

int diametar(int radius) {
    return 2 * radius;
}

int main() {
    int radius;
    cin >> radius;
    cout << "perimetarot e: " << perimetar(radius) << endl;
    cout << "plostinata e: " << plostina(radius) << endl;
    cout << "diametarot e: " << diametar(radius) << endl;


    return 0;
}
