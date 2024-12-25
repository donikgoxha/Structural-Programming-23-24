#include <iostream>
#include <iomanip>

using namespace std;

void transform1(int &max1, int &min1, int &diff, int &sum, int v[], int &a) {
    for (int i = 0; i < a; i++) {
        if (max1 < v[i]) max1 = v[i];
        if (min1 > v[i]) min1 = v[i];
        sum += v[i];
    }
    diff = max1 - min1;
    for (int i = 0; i < a; i++) {
        v[i] += diff;
    }
}

int main() {
    int a;
    cin >> a;
    int v[100];
    for (int i = 0; i < a; i++) cin >> v[i];
    int max1 = 0;
    int min1 = 100;
    int diff;
    int sum = 0;

    transform1(max1, min1, diff, sum, v, a);

    cout << "MAX -> " << max1 << endl;
    cout << "MIN -> " << min1 << endl;
    cout << "SUM -> " << sum << endl;
    for (int i = 0; i < a; i++)
        cout << v[i] << " ";
}
