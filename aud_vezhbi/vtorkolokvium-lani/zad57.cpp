//aud13(kolokviumski-vs) zad2
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int m, n;
    int a[100][100];
    int sum = 0;
    cin >> m >> n;

    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            cin >> a[i][j];
        }
    }


    int minumum = min(n, m);


    for (int i = 2; i <= minumum; i++) {
        sum = 0;
        for (int j = 0; j < i; j++) {
            sum += a[0][j];
        }
        for (int j = 1; j < i - 1; j++) {
            sum += a[j][i - 1 - j];
        }
        for (int j = 0; j < i; j++) {
            sum += a[i-1][j];
        }
        cout << sum << endl;
    }

    return 0;
}
