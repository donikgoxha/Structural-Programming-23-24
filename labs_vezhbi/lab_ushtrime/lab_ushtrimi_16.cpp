//
// Created by Donik Goxha on 30-Oct-24.
//
/*
Да се пресмета збирот на првите N природни броеви: 1+2+3+...+N
На пример, за N=4 треба да отпечатите 10 (1+2+3+4=10).
Влез
Во првиот ред се наоѓа природниот број N (1 <= N <= 130).
Излез
Излезот се состои од еден ред во кој треба да ја отпечатите сумата на броевите.
*/
#include <iostream>
using namespace std;

int main() {
    int a;
    int suma = 0;
    cin >> a;

    for (int i = 1; i <= a; ++i) {
        suma = suma + i;
    }
    cout << suma << endl;
    return 0;
}
