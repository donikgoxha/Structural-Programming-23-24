//
// Created by Donik Goxha on 06-Nov-24.
//
//Da se otpecatat prvite 10 broevi (vo opagjacki redosled) koi se pomali od
//vnesen broj X i koi se - palindromi i - delivi so suma na svoite cifri
//(Vlez 1000 izlez 999 888 828 777 itn.)

#include <iostream>
using namespace std;

int main() {
    int broj;
    int brojac = 0;

    cin >> broj;

    for (int i = broj - 1; i > 0; i--) {
        int suma_cifri = 0;
        int obraten_broj = 0;
        int temp = i;
        while (temp > 0) {
            int posledna = temp % 10;
            obraten_broj = (obraten_broj * 10) + posledna;
            suma_cifri += posledna;
            temp /= 10;
        }
        if (i == obraten_broj && i % suma_cifri == 0) {
            cout << i << endl;
            brojac++;
            if (brojac == 10) {
                break;
            }
        }
    }

    return 0;
}
