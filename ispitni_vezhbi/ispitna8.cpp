//
// Created by Donik Goxha on 05-Nov-24.
//

//From SI are read N pairs of integers, where the first number is the students' points,
//and the second is the max. points. Write a program where for each pair (points, max points),
//will print the students success in percentage and his grade following these rules:
// if the student has 90% or more - "10".
// if the student has 80% or more - "9".
// if the student has 70% or more - "8".
// if the student has 60% or more - "7".
// if the student has 50% or more - "6".
// If the student has less than 50% print "FAIL".

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int points, max_points;
        cin >> points >> max_points;

        if (max_points == 0) {
            cout << "Max points cannot be zero" << endl;
            continue;
        }

        double percentage = (points * 100.0) / max_points;
        cout << percentage;

        if (percentage >= 90) {
            cout << " 10" << endl;
        } else if (percentage >= 80) {
            cout << " 9" << endl;
        } else if (percentage >= 70) {
            cout << " 8" << endl;
        } else if (percentage >= 60) {
            cout << " 7" << endl;
        } else if (percentage >= 50) {
            cout << " 6" << endl;
        } else {
            cout << " FAIL" << endl;
        }
    }
    return 0;
}
