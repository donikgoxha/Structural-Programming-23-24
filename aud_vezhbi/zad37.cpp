//vs mk matriksat ispitna
#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];
    int brojac = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1 && a[i + 1][j - 1] == 1 && a[i + 1][j] == 1
                && a[i + 1][j + 1] == 1 && a[i + 2][j] == 1) {
                brojac++;
                a[i][j]=-1;
                a[i+1][j-1]=-1;
                a[i+1][j]=-1;
                a[i+1][j+1]=-1;
                a[i+2][j]=-1;
            }
        }
    }
    cout << brojac;
    return 0;
}
