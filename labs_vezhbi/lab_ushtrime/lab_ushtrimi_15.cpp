//
// Created by Donik Goxha on 30-Oct-24.
//
/*
Во математиката, факториел на позитивен цел број N (се означува со N!) претставува производ на
сите природни броеви помали или еднакви на N. На пример: 5! = 5 * 4 * 3 * 2 * 1 = 120
Вредноста на 0! е 1.
Влез
Во првиот ред се наоѓа природниот број N (0 <= N <= 10) за кој ќе пресметуваме факториел.
Излез
Излезот се состои од еден ред во кој треба да го отпечатите резултатот N!.
 */
#include <iostream>
using namespace std;

int faktoriel(int k) {
    int proizvod = 1;
    for (int i = 1; i <= k; i++) {
        proizvod = proizvod * i;
    }
    return proizvod;
}

int main() {
    int n;
    cin >> n;

    cout << faktoriel(n) << endl;
    return 0;
}
