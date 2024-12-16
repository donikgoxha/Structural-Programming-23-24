//aud10 rekurzija zad3
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

void printDigits(int n) {
    if (n == 0) {
        return;
    } else {
        cout << n % 10 << endl;
        printDigits(n / 10);
    }
}

int main() {
    return 0;
}
