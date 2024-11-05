//
// Created by Donik Goxha on 29-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    //    1.Od standarden vlez se vnesuva broj N.
    //    Da se ispechatat site tricifreni broevi koi se delivi so N

    int n;
    cin >> n;
    for (int i = 100; i <= 1000; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
