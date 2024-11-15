//
// Created by Donik Goxha on 05-Nov-24.
//
/*
Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе
точка (.). Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри.
Доколку добиениот декаден збир е делив со 16 се печати Pogodok. Доколку истиот тој збир покрај
што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6), се печати Poln pogodok
инаку се печати самиот збир.
Пример:
влез: A 7 F 2 0 c A 5
излез: 61
(61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак
последните цифри му се 1,6)
 */
#include <iostream>
using namespace std;

int main() {
    char hex;
    int sumDecimal = 0;

    while (cin >> hex) {
        if (hex == '.') {
            if (sumDecimal % 16 == 0) {
                if (sumDecimal % 100 == 16) {
                    cout << "Poln pogodok" << endl;
                } else {
                    cout << "Pogodok" << endl;
                }
            } else {
                cout << sumDecimal << endl;
            }
            return 0;
        }

        if (hex >= '0' && hex <= '9') {
            sumDecimal += hex - '0';
        } else if (hex >= 'A' && hex <= 'F') {
            sumDecimal += hex - 'A' + 10;
        } else if (hex >= 'a' && hex <= 'f') {
            sumDecimal += hex - 'a' + 10;
        } else {
            cout << "Incorrect input" << endl;
            return 1;
        }
    }

    return 0;
}
