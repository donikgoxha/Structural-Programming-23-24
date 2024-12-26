#include <iostream>
#include <iomanip>
using namespace std;

void scale(int scores[], int n) {
    int max = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > max) max = scores[i];
    }

    double ratio = 100.0 / max;

    for (int i = 0; i < n; i++) {
        scores[i] = scores[i] * ratio;
    }
}

int main() {
    int n;
    cin >> n;
    int scores[100];

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    scale(scores, n);

    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(2) << scores[i] << " ";
    }
    cout << endl;

    return 0;
}
