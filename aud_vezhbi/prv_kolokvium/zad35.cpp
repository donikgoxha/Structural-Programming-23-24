//vs mk matriksat zad2
#include <iostream>
using namespace std;

int main() {
    int n;
    int max, min;
    int a[100][100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    max = a[0][0];
    min = a[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        a[i][i] = max - min;
    }

    return 0;
}
