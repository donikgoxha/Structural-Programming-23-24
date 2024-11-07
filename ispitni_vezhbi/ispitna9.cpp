//
// Created by Donik Goxha on 05-Nov-24.
//
/*
    Write a program in which from the standard input you read one positive integer z,
    and afterwards you read one after another pairs of integers (a, b).
    Thereby, the loop should end if you read the pair (0, 0).
    The program should calculate how many times the integer z is equal to the sum of the pairs a and b,
    as well as the percentage of the pairs (a,b) that give sum equal to z
    (NOTE: the pair (0,0) is not taken into account when doing calculations!).
 */
#include <iostream>
using namespace std;

int main() {
    int z, a, b;
    cin >> z;

    int total_pairs = 0;
    int matching_pairs = 0;

    while (true) {
        cin >> a >> b;

        if (a == 0 && b == 0) {
            break;
        }

        total_pairs++;

        if (a + b == z) {
            matching_pairs++;
        }
    }
    cout << "You entered " << matching_pairs << " pairs of numbers that have a sum equal to " << z << endl;

    if (total_pairs > 0) {
        double percentage = ((double) matching_pairs / (double) total_pairs) * 100;
        cout << "The percentage of pairs with sum " << z << " is " << percentage << "%" << endl;
    }

    return 0;
}
