//
// Created by Donik Goxha on 28-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int a, b;
    int larg_pal = 0;
    bool flag = true;
    cin >> a >> b;


    for (int i = a; i <= b; i++) {
        int temp = i;
        int rev_small = 0;
        //int rev_big = 0;

        while (temp > 0) {
            int ld = temp % 10;
            //int sld = temp / 10;
            //rev_big = rev_big * 10 + sld;
            rev_small = rev_small * 10 + ld;
            temp /= 10;
        }
        if (rev_small == i && flag) {
            cout << "Smallest Palindromic Number: " << rev_small << endl;
            // } else if (rev_big == i) {
            //     cout << "Biggest Palindromic Number: " << rev_big << endl;
            // }
            flag = false;
        } else if (rev_small == i) {
            larg_pal = i;
        }
    }

    cout << "Largest Palindromic Number: " << larg_pal << endl;
    return 0;
}
