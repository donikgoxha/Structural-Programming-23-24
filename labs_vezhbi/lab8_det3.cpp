#include <iostream>
#include <iomanip>

using namespace std;

void scale(float &ratio1, float v[], int &a) {
    float max1 = 0;
    for (int i = 0; i < a; i++) if (max1 < v[i]) max1 = v[i];
    ratio1 = 100 / max1;
    for (int i = 0; i < a; i++) v[i] *= ratio1;
}

int main() {
    int a;
    cin >> a;

    float v[100];

    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }
    float ratio1;
    scale(ratio1, v, a);
    for (int i = 0; i < a; i++) {
        cout << fixed << setprecision(2) << v[i] << " ";
    }
}
