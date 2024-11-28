//
// Created by Donik Goxha on 03-Nov-24.
//st
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[100];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                for (int k = j; k < n - 1; k++) {
                    array[k] = array[k + 1];
                }
                --n;
                --j;
            }
        }
    }

    return 0;
}
