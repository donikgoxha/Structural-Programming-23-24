//
// Created by Donik Goxha on 09-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int n, r1 = 0, r2 = 0, div = 0, broj;
    cin >> n;
    int i = 0;

    do {
        cin >> broj;
        if (broj % 3 == 0) {
            div++;
        } else if (broj % 3 == 1) {
            r1++;
        } else {
            r2++;
        }
        i++;
    } while (i < n);
    cout << div << " " << r1 << " " << r2 << endl;

    return 0;
}
