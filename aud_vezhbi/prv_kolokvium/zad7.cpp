//
// Created by Donik Goxha on 09-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int from, to;
    cin >> from >> to;

    for (int i = from; i < to; i++) {
        int temp = i;
        int prevrtenbroj = 0;

        while (temp > 0) {
            int cifra = temp % 10;
            prevrtenbroj = (prevrtenbroj * 10) + cifra;
            temp /= 10;
        }
        if(prevrtenbroj == i) {
            cout << i << endl;
        }
    }
    return 0;
}
