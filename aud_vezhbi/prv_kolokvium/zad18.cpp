//
// Created by Donik Goxha on 30-Oct-24.
//
//kolokviumska zadaca od aud 5 zad 3
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        int number;
        cin >> number;
        int temp = number;
        bool isGood = true;

        while (temp > 9) {
            int ld = temp % 10;
            int sld = temp / 10 % 10;
            if (ld >= sld) {
                isGood = false;
                break;
            }
            temp = temp / 10;
        }
        if (isGood) {
            cout << number << endl;
        }
    }
    return 0;
}
