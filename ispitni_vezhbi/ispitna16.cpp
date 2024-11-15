//
// Created by Donik Goxha on 05-Nov-24.
//
/*
Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно
помали една во однос на друга. На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за
нив важи:
a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
Пр. 343, 4624, 6231209
Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10
(броевите помали од 10 се игнорираат). Читањето завршува во моментот кога ќе се прочита знак што не
е цифра. Да се испечатат сите цик-цак броеви.
*/
#include <iostream>
using namespace std;

bool zigzagNumber(int number) {
    int ld = number % 10;
    number = number / 10;
    bool ascending = (number % 10 < ld);

    while (number > 0) {
        int currentDigit = number % 10;
        number = number / 10;

        if (ascending && !(currentDigit < ld)) {
            return false;
        } else if (!ascending && !(currentDigit > ld)) {
            return false;
        }
        ascending = !ascending;
        ld = currentDigit;
    }
    return true;
}

int main() {
    int number;
    while (cin >> number) {
        if (number < 10) {
            continue;
        }
        if (zigzagNumber(number)) {
            cout << number << endl;
        }
    }
    return 0;
}
