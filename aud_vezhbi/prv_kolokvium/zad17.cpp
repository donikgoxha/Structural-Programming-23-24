//
// Created by Donik Goxha on 29-Oct-24.
//

//del od kolokviumska zad del od aud 5 zad 3, kade proveruvame dali brojot e sreden
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int temp = number;

    while (temp > 9) {
        int ld = temp % 10;
        int sld = temp / 10 % 10;
        if (ld >= sld) {
            cout << "NE" << endl;
            return 0;
        }
        temp = temp / 10;
    }
    cout << "OK!" << endl;
    return 0;
}
