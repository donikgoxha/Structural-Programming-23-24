//
// Created by Donik Goxha on 30-Oct-24.
//
/*
Да се провери дали внесениот број N е парен или непарен.
Влез
Во првиот ред се наоѓа природниот број N (1 <= N <= 30000).
Излез
Излезот се состои од еден ред во кој треба се испише "PAREN" (со големи букви, без наводниците)
доколку бројот е парен или да се испише "NEPAREN" доколку бројот е непарен.
 */
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "PAREN" << endl;
    } else {
        cout << "NEPAREN" << endl;
    }
    return 0;
}
