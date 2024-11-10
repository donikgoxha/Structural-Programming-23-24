//
// Created by Donik Goxha on 05-Nov-24.
//
/*
*Read from SI unknown number of triplets of integers (three integers).
*The reading ends when the program can not read successfully read three integers.
*For each triplet of integers print out the two of them that have the minimum difference between them.
*First print the smaller one, and then the bigger integer. If two pairs of integers in the triplet have equal difference,
*then print out all the integers, ordered from the smallest to the largest.
*Example: if 5 1 7 is entered -> 5 - 1 = 4, 7 - 5 = 2, 7 - 1 = 6 -> 2 is the smallest difference -> 5 7 should be printed
Input:
5 1 7
10 2 18

Output:
5 7
2 10 18
 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        int diff1 = abs(a - b);
        int diff2 = abs(b - c);
        int diff3 = abs(a - c);

        int minDiff = min(diff1, min(diff2, diff3));

        if ((diff1 == minDiff) + (diff2 == minDiff) + (diff3 == minDiff) > 1) {
            if (a > b) swap(a, b);
            if (a > c) swap(a, c);
            if (b > c) swap(b, c);
            cout << a << " " << b << " " << c << endl;
        } else if (diff1 == minDiff) {
            if (a > b) swap(a, b);
            cout << a << " " << b << endl;
        } else if (diff2 == minDiff) {
            if (b > c) swap(b, c);
            cout << b << " " << c << endl;
        } else {
            if (a > c) swap(a, c);
            cout << a << " " << c << endl;
        }
    }

    return 0;
}
