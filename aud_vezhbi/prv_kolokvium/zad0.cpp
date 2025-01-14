//
// Created by Donik Goxha on 09-Oct-24.
//
#include <iostream>
using namespace std;

int main() {
    int poeni;
    cin >> poeni;

    if ((poeni >= 0) && (poeni <= 50)) {
        cout << "5-ka" << endl;
    } else if ((poeni >= 51) && (poeni <= 60)) {
        cout << "6-ka" << endl;
    } else if ((poeni >= 61) && (poeni <= 70)) {
        cout << "7-ka" << endl;
    } else if ((poeni >= 71) && (poeni <= 80)) {
        cout << "8-ka" << endl;
    } else if ((poeni >= 81) && (poeni <= 90)) {
        cout << "9-ka" << endl;
    } else if ((poeni >= 91) && (poeni <= 100)) {
        cout << "10-ka" << endl;
    } else {
        cout << "nevaliden vlez" << endl;
    }


    // int x, y;
    // cin >> x >> y;
    //
    // if (x > 0) {
    //     if (y > 0) {
    //         cout << "prv" << endl;
    //     } else if (y < 0) {
    //         cout << "chetvrt" << endl;
    //     } else {
    //         cout << "x+" << endl;
    //     }
    // } else if (x < 0) {
    //     if (y > 0) {
    //         cout << "vtor" << endl;
    //     } else if (y < 0) {
    //         cout << "tret" << endl;
    //     } else {
    //         cout << "x-" << endl;
    //     }
    // } else {
    //     if (y > 0) {
    //         cout << "y+" << endl;
    //     } else if (y < 0) {
    //         cout << "y-" << endl;
    //     } else {
    //         cout << "center" << endl;
    //     }
    // }


    // if (x == 0 && y == 0) {
    //     cout << "centar" << endl;
    //     return 0;
    // }
    // if (x == 0) {
    //     cout << "y-oska" << endl;
    //     return 0;
    // }
    // if (y == 0) {
    //     cout << "x-oska" << endl;
    //     return 0;
    // }
    //
    // if (x > 0 && y > 0) {
    //     cout << "prv" << endl;
    // } else if (x < 0 && y > 0) {
    //     cout << "vtor" << endl;
    // } else if (x < 0 && y < 0) {
    //     cout << "tret" << endl;
    // } else {
    //     cout << "chetvrt" << endl;
    // }
    return 0;
}
