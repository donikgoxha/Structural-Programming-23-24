//
// Created by Donik Goxha on 09-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int n, i = 0;
    float x, proizvod = 1;
    cin >> x >> n;

    do {
        proizvod *= x;
        i++;
    } while (i < n);
    cout << proizvod << endl;

    return 0;
}
