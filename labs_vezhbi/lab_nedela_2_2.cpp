//
// Created by Donik Goxha on 29-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    //2.Od standarden vlez se vnesuvaat brojkite a,b,N.
    //Da se ispechatat site brojki do N koi sho se zbir na a i b;

    int a, b, N, temp = 1;
    cin >> a >> b >> N;
    do {
        if (N > temp)
            cout << a << ", ";
        else cout << a;
        a += b;
        temp++;
    } while (N >= temp);
    return 0;
}
