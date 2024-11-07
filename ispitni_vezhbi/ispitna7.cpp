//
// Created by Donik Goxha on 05-Nov-24.
//
/*
From SI read one number that represents the today's date in format DDMMYYYY(DD-day, MM-month, YYYY-year).
Then read one integer N, after you read N dates of birth in the given format.
For each of the N read dates your program should print "YES" if on today's date (read in the beginning)
the person with that date have more or equal to 18 years, otherwise should print "NO".

For example:
Input	   Result
15032015    YES
12          NO
12121992    YES
16031997    NO
12121980    NO
12041997    YES
01011999    YES
23121976    YES
28071955    YES
16091985    YES
19950817    YES
04061983    YES
16111981    YES
25021951    YES
 */
#include <iostream>
using namespace std;


void dateExtraction(int date, int &day, int &month, int &year) {
    year = date % 10000;
    month = (date / 10000) % 100;
    day = date / 1000000;
}

bool isEightTeen(int todayDate, int birthDate) {
    int todayDay, todayMonth, todayYear;
    int birthDay, birthMonth, birthYear;

    dateExtraction(todayDate, todayDay, todayMonth, todayYear);
    dateExtraction(birthDate, birthDay, birthMonth, birthYear);

    int currentAge = todayYear - birthYear;

    if (todayMonth < birthMonth || (todayMonth == birthMonth && todayDay < birthDay)) {
        currentAge--;
    }
    return currentAge >= 18;
}

int main() {
    int todaysDate, n;
    cin >> todaysDate >> n;
    for (int i = 0; i < n; i++) {
        int birthDate;
        cin >> birthDate;
        if (isEightTeen(todaysDate, birthDate)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
