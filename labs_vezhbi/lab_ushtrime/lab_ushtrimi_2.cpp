//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cin >> number1 >> number2;

    //Vrednosta na broj1 i broj2 pred zamena na broevite e: 32,5 a razlikata: 27
    cout << "Vrednosta na broj1 i broj2 pred zamena na broevite e: " << number1
            << "," << number2 << " a razlikata: " << number1 - number2 << endl;

    cout << "Vrednosta na broj1 i broj2 posle zamena na broevite e: " << number2
            << "," << number1 << " a razlikata: " << number2 - number1 << endl;


    return 0;
}
