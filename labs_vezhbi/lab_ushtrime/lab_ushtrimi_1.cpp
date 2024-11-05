//
// Created by Donik Goxha on 30-Oct-24.
//
#include <iostream>
using namespace std;


int main() {
    int num1, num2;
    cin >> num1 >> num2;
    //2468 - 2 - parna poz, 4 - neparna poz, 6 - parna poz, 8 - neparna poz
    //123 - 1 - parna poz, 2 - neparna poz, 3 - parna poz

    int firstDigit_num1 = num1 / 100; //1
    int secondDigit_num1 = num1 / 10 % 10; //2
    int thirdDigit_num1 = num1 % 10; //3

    int firstDigit_num2 = num2 / 1000; //2
    int secondDigit_num2 = num2 / 100 % 10; //4
    int thirdDigit_num2 = num2 / 10 % 10; //6
    int fourthDigit_num2 = num2 % 10; //8

    int sum = firstDigit_num1 + thirdDigit_num1 + secondDigit_num2 + fourthDigit_num2;

    double mean = sum / 4.0;
    cout << mean << endl;


    return 0;
}
