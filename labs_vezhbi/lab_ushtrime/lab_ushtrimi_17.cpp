//
// Created by Donik Goxha on 30-Oct-24.
//
/*
За даден број N, да се определи неговиот број на цифри.
Влез
Во првиот ред се наоѓа природниот број N (0 <= N <= 30000) за кој треба да го пресметаме бројот на цифри.
Излез
Излезот се состои од еден ред во кој треба да го отпечатите бројот на цифри на N.
 */
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int counter = 0;
    do {
        n = n / 10;
        counter++;
    } while (n > 0);
    cout << counter << endl;
    return 0;
}
