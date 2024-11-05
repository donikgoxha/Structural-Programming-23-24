//
// Created by Donik Goxha on 05-Nov-24.
//

//Од стандарден влез се читаат знаци се додека не се прочита извичник.
//Во вака внесениот текст се скриени цели броеви (помали од 100).
//Да се напише програма што ќе ги прочита сите знаци и на излез ќе го
//испечати збирот на сите броеви скриени во текстот.
//Напомена: cin во C++ ги игнорира празните места(space).
//За да не ги игнорира потребно е да се додаде noskipws пред читањето на знакот(пр.cin >> noskipws >> znak;)
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char character;
    int sum = 0, currentNumber = 0;
    bool inNumber = false;

    while (cin >> noskipws >> character) {
        if (character == '!') {
            break;
        }

        if (isdigit(character)) {
            currentNumber = currentNumber * 10 + character - '0';
            inNumber = true;
        } else {
            if (inNumber) {
                if (currentNumber < 100) {
                    sum = sum + currentNumber;
                }
                currentNumber = 0;
                inNumber = false;
            }
        }
    }
    if (inNumber && currentNumber < 100) {
        sum = sum + currentNumber;
    }
    cout << sum << endl;

    return 0;
}
