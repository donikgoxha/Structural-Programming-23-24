//
// Created by Donik Goxha on 05-Nov-24.
//
/*
Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто
различно од број. За секој број треба да се пресмета збирот на цифрата со максимална вредност
од претходно внесениот број  и сумата на цифрите на тековниот број (за првиот внесен број се
пресметува само сумата на неговите цифри). За секој внесен број резултатот треба да се испечати
во следниот формат:
[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]
342:9   //3+4+2
345: 16 //3+4+5+4
123: 11 //1+2+3+5
456: 18 //4+5+6+3
 */
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int maxDigit(int n) {
    int max = 0;
    while (n > 0) {
        int ld = n % 10;
        if (ld > max) {
            max = ld;
        }
        n /= 10;
    }
    return max;
}

int main() {
    int a;
    int currentSum = 0;
    int predhodna = 0;
    while (cin >> a) {
        currentSum = sumOfDigits(a);
        int result = currentSum + predhodna;
        cout << a << ": " << result << endl;
        predhodna = maxDigit(a);
    }
    return 0;
}
