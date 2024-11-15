//
// Created by Donik Goxha on 05-Nov-24.
//
//zad2 english kolok1 vjet
/*Task 2
While the program inputs numbers do the following.
Take the last two digits find the sum of those digits and add it at the tail of the number.
input:
12345
6728492
Xxx
output:
12345
1239
1212
123
15
6
6728492
6728411
672842
67286
67214
6726
678
615
66
12
3
 */
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int number;

    while (true) {
        cin >> number;

        if (isdigit(number)) {
            cout << "Invalid input." << endl;
            break;
        }

        if (number == -1) {
            break;
        }

        while (number >= 10) {
            cout << number << endl;

            int lastDigit = number % 10;
            int secondLastDigit = (number / 10) % 10;

            int sum = lastDigit + secondLastDigit;

            number = (number / 100) * 10 + sum;
        }

        cout << number << endl;
        break;
    }

    return 0;
}
