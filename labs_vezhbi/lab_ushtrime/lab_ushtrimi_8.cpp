//
// Created by Donik Goxha on 30-Oct-24.
//
/*
Напишете програма која за дадени два броја, ќе го пресмета и отпечати нивниот збир, разлика,
производ и количник.
Влез
Во првиот ред се наоѓаат целите броеви X и Y (1 <= Y <= X <= 100). Во сите тест примери,
Y ќе биде делител на X.
Излез
Излезот се состои од еден ред во кој треба да го отпечатите збирот, разликата, производот
и количникот на дадените броеви.
 */
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;

    cout << sum << " " << difference << " " << product << " " << quotient << endl;
    return 0;
}
