//
// Created by Donik Goxha on 05-Nov-24.
//
//zad1 english kolok1 vjet
/*Task 1
Write a program that for a given number n (n>0) it will calculate the sum of
the products of all even numbers in the interval (0,n], it will print each even number together with the
product it will print the sum of all the products and will print the average product of those even numbers.
input:
7
output:
22 = 4
44 = 16
6*6 = 36
56
18.66667
 */
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Invalid input!" << endl;
        return 0;
    }
    int sum_product = 0;
    int counter = 0;

    for (int i = 2; i <= n; i += 2) {
        int product = i * i;
        sum_product += product;
        counter++;
        cout << i << "*" << i << "=" << product << endl;
    }
    double average = (1.0 * sum_product / counter);

    cout << "Average = " << average << endl;
    cout << "Sum of products = " << sum_product << endl;

    return 0;
}
