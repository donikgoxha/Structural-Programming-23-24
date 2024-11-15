//
// Created by Donik Goxha on 05-Nov-24.
//
/*
Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број
или 0 треба да се печати „Invalid input“.
Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат
на парните позиции од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.
Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)
Input	            Result
12345678 1357       PAREN
 */
#include <iostream>
using namespace std;

bool isEvenEquivalent(int larger, int smaller) {
    int position = 1;
    int reversed = 0;
    int factor = 1;

    while (larger > 0) {
        if (position % 2 == 0) {
            reversed = reversed + (larger % 10) * factor;
            factor = factor * 10;
        }
        larger = larger / 10;
        position++;
    }
    return reversed == smaller;
}

int main() {
    int a, b;
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Invalid input" << endl;
    }

    int larger, smaller;

    if (a > b) {
        larger = a;
        smaller = b;
    } else {
        larger = b;
        smaller = a;
    }
    if (isEvenEquivalent(larger, smaller)) {
        cout << "PAREN" << endl;
    } else {
        cout << "NE" << endl;
    }

    return 0;
}
