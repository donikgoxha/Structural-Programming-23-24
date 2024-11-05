//
// Created by Donik Goxha on 05-Nov-24.
//
//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
//Обратен број е бројот составен од истите цифри, но во обратен редослед
//(на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9).
//Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
//Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
#include<iostream>
using namespace std;

int reversedNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = (reversed * 10) + (n % 10);
        n /= 10;
    }
    return reversed;
}

int countDigits(int n) {
    int counter = 0;
    while (n > 0) {
        n /= 10;
        counter++;
    }
    return counter;
}

int main() {
    int interstingNumber, reverseNumber, n;

    cin >> n;

    if (n <= 9) {
        cout << "Brojot ne e validen" << endl;
        return 0;
    }
    bool found = false;

    for (int m = n - 1; m >= 9; m--) {
        int reversed = reversedNumber(m);
        int counter = countDigits(m);
        if (reversed % counter == 0) {
            cout << m << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Brojot ne e validen" << endl;
    }
    return 0;
}
