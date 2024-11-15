//
// Created by Donik Goxha on 05-Nov-24.
//
/*
Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5,
а другата е поголема или еднаква на 5. На пример, ако бројот x е составен од цифрите a, b, c и d,
тогаш за нив важи:
a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5
Пр.  508294, 2638, 81
Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10
(броевите помали од 10 се игнорираат). Читањето завршува во моментот кога ќе се прочита знак
што не е цифра. Да се испечатат сите цик-цак броеви.
 */
#include <iostream>
using namespace std;

bool zigzagNumber(int number) {
    int prevDigit = number % 10; // Start with the last digit
    number = number / 10;

    while (number > 0) {
        int currentDigit = number % 10;

        if (!((currentDigit < 5 && prevDigit >= 5) || (currentDigit >= 5 && prevDigit < 5))) {
            return false;
        }

        prevDigit = currentDigit;
        number = number / 10;
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
