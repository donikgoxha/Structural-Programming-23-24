//
// Created by Donik Goxha on 30-Oct-24.
//
//zad2 aud6
//zad2 aud6
#include <iostream>
using namespace std;

bool proverka(int broj) {
    int xy = broj / 100;
    int zk = broj % 100;
    if (broj % (xy + zk) == 0) {
        return true;
    }
    return false;
}


int main() {
    for (int i = 1000; i < 10000; i++) {
        if (proverka(i)) {
            cout << i << endl;
        }
    }
    return 0;
}
