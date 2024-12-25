//aud11 zad2
#include <iostream>
using namespace std;

void zbir_broj_cifri(int a, int &zbir_cifri, int &broj_cifri) {
    while (a > 0) {
        broj_cifri++;
        zbir_cifri += a % 10;
        a = a / 10;
    }
}

int main() {
    int broj;
    int zbir_cifri = 0, broj_cifri = 0;
    cin >> broj;
    zbir_broj_cifri(broj, zbir_cifri, broj_cifri);
    cout << zbir_cifri << " " << broj_cifri;

    return 0;
}
