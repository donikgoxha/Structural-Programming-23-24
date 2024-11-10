//
// Created by Donik Goxha on 05-Nov-24.
//
/*
 *Од стандарден влез се внесуваат два цели броја N и Х.
 *Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
 *Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
 */
#include <iostream>
using namespace std;

bool containsTheDigit(int number, int digit) {
    while (number > 0) {
        if (number % 10 == digit) {
            return true;
        }
        number /= 10;
    }
    return false;
}

bool areTotallyDifferent(int a, int b) {
    while (a > 0) {
        int digitA = a % 10;
        if (containsTheDigit(b, digitA)) {
            return false;
        }
        a = a / 10;
    }
    return true;
}

int main() {
    int n, x;
    cin >> n >> x;

    for (int i = n - 1; i >= 0; --i) {
        if (areTotallyDifferent(i, x)) {
            cout << i << endl;
            break;
        }
    }
    cout << 0 << endl;
    return 0;
}
