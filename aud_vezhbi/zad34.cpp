//vs mk matriksat zad1
#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[100][100];
    int zbir_neparni_koloni = 0;
    int zbir_parni_redici = 0;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (j % 2 == 1) {
                zbir_neparni_koloni += a[i][j];
            }
            if (i % 2 == 0) {
                zbir_parni_redici += a[i][j];
            }
        }
    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << zbir_neparni_koloni - zbir_parni_redici << endl;

    return 0;
}
