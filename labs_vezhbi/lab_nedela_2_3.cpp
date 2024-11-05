//
// Created by Donik Goxha on 29-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    //3. Od standarden vlez se vnesuvaat brojkite P,Q i N broj na brojki ednakvo na P.
    //Da se ispechati procentot na broevi koi se pogolemi od Q,ednakvi na Q i pomali od Q,I


    int P, Q, a;
    float b = 0, c = 0, d = 0, pogolemo, pomalo, ednakvo;

    cin >> P >> Q;
    for (int i = 1; i <= P; i++) {
        cin >> a;
        if (a == Q) b++;
        else if (a > Q) c++;
        else d++;
    }

    pogolemo = c / P * 100;
    ednakvo = b / P * 100;
    pomalo = d / P * 100;

    cout << "Greater: " << pogolemo << "%" << endl;
    cout << "Equal: " << ednakvo << "%" << endl;
    cout << "Pomalo: " << pomalo << "%" << endl;

    return 0;
}
