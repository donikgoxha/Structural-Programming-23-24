//
// Created by Donik Goxha on 05-Nov-24.
//

//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
//Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
//да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.

#include <iostream>
using namespace std;

bool isBlag(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            return false;
        }
        number = number / 10;
    }
    return true;
}

int main() {
    int start, end;
    int blag_broj;
    bool found = false;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        if (isBlag(i)) {
            cout << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "NE" << endl;
    }
    return 0;
}
