//aud13(kolokviumski-vs) zad4
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, m, jabolko_n, jabolko_m, z_i = 0, z_j = 0, a[100][100] = {0}, pravec = 0;

    a[0][0] = 1;
    cin >> n >> m >> jabolko_n >> jabolko_m;
    char potezi[100];
    cin.ignore();

    cin.getline(potezi, 100);
    for (int i = 0; i < strlen(potezi); i++) {
        if (potezi[i] == 'F') {
            if (pravec == 0) {
                z_i++;
            } else if (pravec == 1) {
                z_i--;
            } else if (pravec == 2) {
                z_j++;
            } else {
                z_j--;
            }
        } else if (potezi[i] == 'L') {
            if (pravec == 0) {
                z_j++;
                pravec = 2;
            } else if (pravec == 1) {
                z_j--;
                pravec = 3;
            } else if (pravec == 2) {
                z_i--;
                pravec = 1;
            } else {
                z_i++;
                pravec = 0;
            }
        } else {
            if (pravec == 0) {
                z_j--;
                pravec = 3;
            } else if (pravec == 1) {
                z_j++;
                pravec = 2;
            } else if (pravec == 2) {
                z_i++;
                pravec = 0;
            } else {
                z_i--;
                pravec = 1;
            }
        }
        if (a[z_i][z_j]) {
            cout << " GAME OVER Ouch" << endl;
            return 0;
        }
        if (z_i < 0 || z_i >= n || z_j < 0 || z_j >= m) {
            cout << " GAME OVER Ouch" << endl;
            return 0;
        }
        if (z_i == jabolko_n && z_j == jabolko_m) {
            cout << "NJAM" << endl;
            return 0;
        }
        a[z_i][z_j] = 1;
    }
    return 0;
}
