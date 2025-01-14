//
// Created by Donik Goxha on 09-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    //4321 - 4 = 3+2+1
    for (int number = 1000; number <= 9999; number++) {
        int najznacanja = number / 1000;

        int zbircifri = 0;
        int temp = number;

        while (temp > 9) {
            zbircifri += temp % 10;
            temp /= 10;
        }

        if (temp == zbircifri) {
            cout << number << endl;
        }
    }


    return 0;
}
