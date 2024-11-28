//
// Created by Donik Goxha on 03-Nov-24.
//st
#include <iostream>
using namespace std;

int main() {
    int n;
    int array[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    bool asc = true;
    bool desc = true;
    for (int i = 1; i < n; i++) {
        if(array[i] <= array[i - 1]) {
            asc = false;
        }
        if(array[i] >= array[i - 1]) {
            desc = false;
        }
    }

    if(asc) {
        cout << "asc";
    } else if(desc) {
        cout << "desc";
    } else {
        cout << "neither";
    }

    return 0;
}
