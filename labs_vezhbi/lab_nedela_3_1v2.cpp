//
// Created by Donik Goxha on 06-Nov-24.
//
//Se vnesuva broj X i cifra K.
//Da se otpecati vo procenti kolku od site cifri na X se pomali od K. (Vlez 12345 5 izlez 80%)

#include <iostream>
using namespace std;

int main() {
    int broj, uslov;
    int najdeni = 0;
    int vkupno = 0;

    cin >> broj >> uslov;
    while (broj > 0) {
        vkupno = vkupno + 1;
        int pos_cifra = broj % 10;
        if (pos_cifra < uslov) {
            najdeni++;
        }
        broj = broj / 10;
    }
    cout << ((1.0 * najdeni) / vkupno) * 100 << "%" << endl;
    return 0;
}
