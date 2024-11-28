//
// Created by Donik Goxha on 03-Nov-24.
//

//nizi kaj stefan
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double min = 100000;
    double max = -100000;

    double array[100];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }
    for (int i = 0; i < n; i++) {
        array[i] = (array[i] - min) / (max - min);
    }

    cout << max << " " << min << endl;

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
