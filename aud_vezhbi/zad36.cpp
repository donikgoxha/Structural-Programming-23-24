//vs mk matriksat zad3
#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100][100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                cout << "ne e simetricna";
                return 0;
            }
        }
    }
    cout << "simetricna e" << endl;
    return 0;
}
